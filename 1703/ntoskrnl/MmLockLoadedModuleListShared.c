/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14006CF18
 * Callers:
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 *     RtlpxLookupFunctionTable @ 0x1400E4B40 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x140165994 (RtlPcToFileName.c)
 *     MiSplitDriverPage @ 0x14020D2B4 (MiSplitDriverPage.c)
 * Callees:
 *     <none>
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
