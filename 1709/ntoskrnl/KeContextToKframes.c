/*
 * XREFs of KeContextToKframes @ 0x1401813C0
 * Callers:
 *     KiRaiseException @ 0x14000D500 (KiRaiseException.c)
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     KiContinueEx @ 0x1400DA860 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x1400DAA74 (KiContinuePreviousModeUser.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiRestoreProcessorState @ 0x14020DB78 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x1406D9B30 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x1406DA518 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x140025510 (KxContextToKframes.c)
 */

__int64 __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( (_BYTE)result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
