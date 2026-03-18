/*
 * XREFs of VfDriverInitSuccess @ 0x1407622D0
 * Callers:
 *     MmCallDllInitialize @ 0x140586B80 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1407F99D8 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
