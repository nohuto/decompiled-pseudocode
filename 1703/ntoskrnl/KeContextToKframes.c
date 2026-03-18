/*
 * XREFs of KeContextToKframes @ 0x1401819C0
 * Callers:
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 *     KiContinueEx @ 0x140008870 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x140008A84 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140135720 (KiRaiseException.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiRestoreProcessorState @ 0x1402071E8 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x1406AE6E0 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x1406AF0C8 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x140110820 (KxContextToKframes.c)
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
