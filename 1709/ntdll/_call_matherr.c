/*
 * XREFs of _call_matherr @ 0x180098968
 * Callers:
 *     _handle_error @ 0x180098A8C (_handle_error.c)
 * Callees:
 *     WinSqmCheckEscalationSetString @ 0x180086D70 (WinSqmCheckEscalationSetString.c)
 *     _set_errno_from_matherr @ 0x180099824 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x180099AEC (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)WinSqmCheckEscalationSetString() )
    set_errno_from_matherr(a1);
  return a6;
}
