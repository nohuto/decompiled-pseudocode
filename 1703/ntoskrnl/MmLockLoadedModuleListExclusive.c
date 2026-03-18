/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x14006E01C
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x14006DD94 (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x14006DF00 (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1401480F4 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x140149B04 (MiSessionRemoveImage.c)
 *     MiShowBadMapper @ 0x14020CCEC (MiShowBadMapper.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 * Callees:
 *     <none>
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
