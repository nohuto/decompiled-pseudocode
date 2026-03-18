/*
 * XREFs of KeAbPostReleaseEx @ 0x1400BAF60
 * Callers:
 *     PfLockSharedTryAcquire @ 0x140001F44 (PfLockSharedTryAcquire.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     MiLockAddressSpaceToo @ 0x1400BA9EC (MiLockAddressSpaceToo.c)
 *     ExTryToAcquireFastMutex @ 0x1400BABB0 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1400BB0F0 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1401003B0 (ExTryAcquirePushLockSharedEx.c)
 *     MiLeapPrefetch @ 0x14010A194 (MiLeapPrefetch.c)
 *     MiLockControlAreaSectionExtend @ 0x140110630 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiTryLockVad @ 0x14012E314 (MiTryLockVad.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14013F0C0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14013F3D0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14013F6A0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceShared @ 0x14013FBD0 (ExAcquireFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1401404C0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401408BC (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140145BA0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140155520 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1401FB984 (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x1402224DC (MiChangingSubsectionProtos.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402705DC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140284DE0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140284EB0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     AlpcpReceiveMessagePort @ 0x14049EAE0 (AlpcpReceiveMessagePort.c)
 *     TlgAggregateInternalProviderCallback @ 0x1404F19A0 (TlgAggregateInternalProviderCallback.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14058FEE0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1405958F4 (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x140694B14 (CmpTryToLockKcbExclusive.c)
 *     TryLockShutdownShared @ 0x140694C14 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x1406A94F4 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1406F2DE0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     KiForceSymbolReferences @ 0x14086B5B8 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeAbEntryFree @ 0x1400BB090 (KeAbEntryFree.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  _KLOCK_ENTRY *v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v5; // ebp
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = (_KLOCK_ENTRY *)a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    a2 = 96LL * (unsigned __int8)(a2 >> 1);
    v2 = &CurrentThread->LockEntries[a2 / 0x60];
    if ( (*(_QWORD *)&v2->LockState.0 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(
        0x162u,
        (ULONG_PTR)CurrentThread,
        BugCheckParameter2,
        (ULONG_PTR)&CurrentThread->LockEntries[a2 / 0x60],
        0LL);
  }
  else
  {
    CurrentThread = (struct _KTHREAD *)(a2 - (unsigned __int16)(16 * *(unsigned __int8 *)(a2 + 24)));
  }
  --CurrentThread->SpecialApcDisable;
  v5 = ++CurrentThread->AbAllocationRegionCount == 1;
  v2->AcquiredByte &= ~1u;
  KeAbEntryFree(v2, a2, &v9);
  v6 = ((char *)v2 - (char *)CurrentThread - 800) / 96;
  if ( v5 )
    CurrentThread->AbEntrySummary |= 1 << v6;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v6);
  --CurrentThread->AbAllocationRegionCount;
  result = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v9);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    return KiCheckForKernelApcDelivery();
  }
  return result;
}
