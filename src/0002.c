/**
 * @file
 * Sum of the even Fibonacci numbers less than or equal to 4000000.
 */
#include <stdio.h>

long fib(const int);

int main(void) {
    long sum = 0;

    long value;
    for (int i = 1; (value = fib(i)) <= 4000000; i++) {
        if (value % 2 == 0) {
            sum += value;
        }
    }

    printf("%ld\n", sum);
}

/**
 * Computes the nth Fibonacci number, for n >= 1, starting with 1 and 2.
 */
long fib(const int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return fib(n - 1) + fib(n - 2);
}