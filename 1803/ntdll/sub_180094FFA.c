/*
 * XREFs of sub_180094FFA @ 0x180094FFA
 * Callers:
 *     sub_180093FD8 @ 0x180093FD8 (sub_180093FD8.c)
 * Callees:
 *     <none>
 */

void sub_180094FFA()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
