/*
 * XREFs of _set_fpsr @ 0x18009AA30
 * Callers:
 *     _control87 @ 0x18009869C (_control87.c)
 *     _ctrlfp @ 0x180099AEC (_ctrlfp.c)
 *     _set_statfp @ 0x180099B68 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
