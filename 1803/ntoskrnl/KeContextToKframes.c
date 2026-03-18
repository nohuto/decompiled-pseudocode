/*
 * XREFs of KeContextToKframes @ 0x1401AB000
 * Callers:
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1401321E0 (KiContinuePreviousModeUser.c)
 *     KiContinueEx @ 0x1401323B0 (KiContinueEx.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiRaiseException @ 0x140249930 (KiRaiseException.c)
 *     KiRestoreProcessorState @ 0x14024BD80 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x140743BF4 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x1407445E4 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x140132CB0 (KxContextToKframes.c)
 */

char __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char result; // al
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0;
    __writecr8(0LL);
  }
  return result;
}
