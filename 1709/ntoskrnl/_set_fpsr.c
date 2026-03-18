/*
 * XREFs of _set_fpsr @ 0x140163340
 * Callers:
 *     _ctrlfp @ 0x140163264 (_ctrlfp.c)
 *     _set_statfp @ 0x1401632E8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
