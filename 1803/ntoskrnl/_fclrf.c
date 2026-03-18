/*
 * XREFs of _fclrf @ 0x14018D20A
 * Callers:
 *     _clrfp @ 0x14018D100 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
