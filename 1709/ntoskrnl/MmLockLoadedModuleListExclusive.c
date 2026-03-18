/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x140015FE0
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x140015BA4 (RtlRemoveInvertedFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x140015D58 (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x140015EC4 (MiProcessLoaderEntry.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x140158EEC (MiSessionRemoveImage.c)
 *     MiShowBadMapper @ 0x140213CEC (MiShowBadMapper.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListExclusive(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
}
