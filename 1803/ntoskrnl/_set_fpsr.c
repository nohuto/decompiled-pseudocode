/*
 * XREFs of _set_fpsr @ 0x14018D200
 * Callers:
 *     _ctrlfp @ 0x14018D124 (_ctrlfp.c)
 *     _set_statfp @ 0x14018D1A8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
