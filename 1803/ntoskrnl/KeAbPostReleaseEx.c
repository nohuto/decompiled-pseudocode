/*
 * XREFs of KeAbPostReleaseEx @ 0x14007C82C
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiLockControlAreaSectionExtend @ 0x14004CEC8 (MiLockControlAreaSectionExtend.c)
 *     MiLockAddressSpaceToo @ 0x140071B04 (MiLockAddressSpaceToo.c)
 *     ExTryToAcquireFastMutex @ 0x14007C620 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14007C6A0 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14008F600 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     MiDeprioritizeVad @ 0x1400A23D8 (MiDeprioritizeVad.c)
 *     PfLockSharedTryAcquire @ 0x1400A2528 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400A2630 (ExTryAcquirePushLockSharedEx.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     ExpReleaseFastResourceShared @ 0x140158310 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x140158600 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x140158940 (ExDisownFastResource.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140158BE0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401596CC (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14015A3E0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14015E8D0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1402386C4 (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x1402590DC (MiProcessTransitionHeatBatch.c)
 *     MiChangingSubsectionProtos @ 0x14025D140 (MiChangingSubsectionProtos.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1402B94A0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1402B9570 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14048BF00 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     AlpcpReceiveMessagePort @ 0x1404CAA80 (AlpcpReceiveMessagePort.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14057C76C (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14057D4EC (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x1406FA6D8 (CmpTryToLockKcbExclusive.c)
 *     TryLockShutdownShared @ 0x1406FA7D8 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14070DC20 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x14075BCA0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     KiForceSymbolReferences @ 0x1408DFFA0 (KiForceSymbolReferences.c)
 * Callees:
 *     KeAbEntryFree @ 0x14007C944 (KeAbEntryFree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, _KLOCK_ENTRY *a2)
{
  _KLOCK_ENTRY *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // r8
  unsigned __int8 v6; // bl
  __int64 v7; // rdx
  char v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = (unsigned __int8)((unsigned __int64)a2 >> 1);
    v2 = &CurrentThread->LockEntries[v5];
    if ( (*(_QWORD *)&v2->LockState.0 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(
        0x162u,
        (ULONG_PTR)CurrentThread,
        BugCheckParameter2,
        (ULONG_PTR)&CurrentThread->LockEntries[v5],
        0LL);
  }
  else
  {
    CurrentThread = (struct _KTHREAD *)((char *)a2 - (unsigned __int16)(16 * a2->EntryOffset));
  }
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount;
  v2->AcquiredByte &= ~1u;
  KeAbEntryFree(v2, a2, &v9);
  v7 = ((char *)v2 - (char *)CurrentThread - 800) / 96;
  if ( v6 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v7;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v7);
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v9);
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
