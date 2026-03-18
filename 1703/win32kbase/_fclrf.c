/*
 * XREFs of _fclrf @ 0x1C00A203A
 * Callers:
 *     _clrfp @ 0x1C00A1F3C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
