/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x14016113C
 * Callers:
 *     MiSessionRemoveImage @ 0x140154B38 (MiSessionRemoveImage.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     RtlRemoveInvertedFunctionTable @ 0x140160774 (RtlRemoveInvertedFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x140160E1C (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x140160F88 (MiProcessLoaderEntry.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiShowBadMapper @ 0x140251FB0 (MiShowBadMapper.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
