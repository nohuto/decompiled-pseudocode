/*
 * XREFs of _fclrf @ 0x14016EB4A
 * Callers:
 *     _clrfp @ 0x14016EA3C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
