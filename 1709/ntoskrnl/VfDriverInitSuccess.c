/*
 * XREFs of VfDriverInitSuccess @ 0x1407A2484
 * Callers:
 *     MmCallDllInitialize @ 0x1405C90B8 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1408466E8 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x1407A8FD8 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
