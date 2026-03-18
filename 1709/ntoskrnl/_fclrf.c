/*
 * XREFs of _fclrf @ 0x14016334A
 * Callers:
 *     _clrfp @ 0x140163240 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
