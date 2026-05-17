/*
 * XREFs of _fclrf @ 0x18009AA3A
 * Callers:
 *     _clrfp @ 0x180099ACC (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
