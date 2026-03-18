/*
 * XREFs of _call_matherr @ 0x14016E0E0
 * Callers:
 *     _handle_error @ 0x14016E20C (_handle_error.c)
 *     _handle_errorf @ 0x14016E33C (_handle_errorf.c)
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     _set_errno_from_matherr @ 0x14016EA10 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x14016EA60 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)PsGetHostSilo() )
    set_errno_from_matherr(a1);
  return a6;
}
