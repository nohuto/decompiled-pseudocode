/*
 * XREFs of _fclrf @ 0x1C00095CA
 * Callers:
 *     _clrfp @ 0x1C00094C0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
