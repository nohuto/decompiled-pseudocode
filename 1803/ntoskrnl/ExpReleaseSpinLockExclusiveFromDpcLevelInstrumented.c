/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MiAgePte @ 0x140012B60 (MiAgePte.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     ExReleaseSpinLockExclusive @ 0x1400B13C0 (ExReleaseSpinLockExclusive.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     MiLockSectionControlArea @ 0x1400E1590 (MiLockSectionControlArea.c)
 *     MiRemoveWsleList @ 0x1400E1950 (MiRemoveWsleList.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400E5FE0 (MiCheckPurgeAndUpMapCount.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiBeginPageAccessor @ 0x1400E7730 (MiBeginPageAccessor.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
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
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1402B1E58 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
