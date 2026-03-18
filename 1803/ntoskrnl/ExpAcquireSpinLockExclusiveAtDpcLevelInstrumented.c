/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MiAgePte @ 0x140012B60 (MiAgePte.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     MiLockSectionControlArea @ 0x1400E1590 (MiLockSectionControlArea.c)
 *     MiRemoveWsleList @ 0x1400E1950 (MiRemoveWsleList.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400E5FE0 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x1400E6090 (MiGetWsAndInsertVad.c)
 *     MiBeginPageAccessor @ 0x1400E7730 (MiBeginPageAccessor.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1401258A0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x1402B1DE4 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // di
  unsigned __int64 v5; // rax
  int InterruptCount; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rax
  int v12; // [rsp+60h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v7 = v5;
  }
  else
  {
    v7 = v12;
    v4 = 0;
    InterruptCount = v12;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v8 = ExpAcquireSpinLockExclusive(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v8;
  }
  if ( v4 )
  {
    v10 = __rdtsc();
    LOBYTE(v8) = PerfLogSpinLockAcquire((__int64)a1, v10, v10 - v7, v9, InterruptCount, 3);
  }
  return v8;
}
