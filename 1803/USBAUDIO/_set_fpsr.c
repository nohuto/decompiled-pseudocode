/*
 * XREFs of _set_fpsr @ 0x1C00095C0
 * Callers:
 *     _ctrlfp @ 0x1C00094E4 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0009568 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
