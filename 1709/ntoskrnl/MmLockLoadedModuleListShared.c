/*
 * XREFs of MmLockLoadedModuleListShared @ 0x1400D5670
 * Callers:
 *     MmIsSessionExecutionValid @ 0x1400D5564 (MmIsSessionExecutionValid.c)
 *     RtlpxLookupFunctionTable @ 0x1400D58A0 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x14015A240 (RtlPcToFileName.c)
 *     MiSplitDriverPage @ 0x140214314 (MiSplitDriverPage.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListShared(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
}
