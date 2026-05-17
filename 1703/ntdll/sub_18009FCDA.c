/*
 * XREFs of sub_18009FCDA @ 0x18009FCDA
 * Callers:
 *     sub_18009ED5C @ 0x18009ED5C (sub_18009ED5C.c)
 * Callees:
 *     <none>
 */

void sub_18009FCDA()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
