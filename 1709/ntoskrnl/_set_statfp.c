/*
 * XREFs of _set_statfp @ 0x1401632E8
 * Callers:
 *     _exception_enabled @ 0x14016295C (_exception_enabled.c)
 * Callees:
 *     _set_fpsr @ 0x140163340 (_set_fpsr.c)
 *     _get_fpsr @ 0x14018AA50 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
