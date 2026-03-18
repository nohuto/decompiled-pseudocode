/*
 * XREFs of VfDriverInitSuccess @ 0x14080F4C4
 * Callers:
 *     MmCallDllInitialize @ 0x140611478 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1408B65A4 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x140816010 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
