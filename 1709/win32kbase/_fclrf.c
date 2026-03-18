/*
 * XREFs of _fclrf @ 0x1C00AB79A
 * Callers:
 *     _clrfp @ 0x1C00AB6A0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
