/*
 * XREFs of KeAbPostReleaseEx @ 0x14003FBE8
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140006FD0 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryToAcquireFastMutex @ 0x140022150 (ExTryToAcquireFastMutex.c)
 *     MiTryLockVad @ 0x140033F8C (MiTryLockVad.c)
 *     MiLeapPrefetch @ 0x14003A5C0 (MiLeapPrefetch.c)
 *     MiLockAddressSpaceToo @ 0x14003FD5C (MiLockAddressSpaceToo.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x140055D84 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     MiLockControlAreaSectionExtend @ 0x14005E338 (MiLockControlAreaSectionExtend.c)
 *     PfLockSharedTryAcquire @ 0x140061B34 (PfLockSharedTryAcquire.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14011CE80 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExAcquireFastResourceExclusive @ 0x14014D420 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14014D6F0 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14014DF20 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14014E340 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14014E868 (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1401506E0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1401529C0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1401F5BB0 (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x140218224 (MiChangingSubsectionProtos.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14025B4B0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14025B580 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x140456218 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140456CB4 (CmpTryToLockHashEntryExclusive.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 *     TlgAggregateInternalProviderCallback @ 0x1405CB100 (TlgAggregateInternalProviderCallback.c)
 *     CmpTryToLockKcbExclusive @ 0x14066A484 (CmpTryToLockKcbExclusive.c)
 *     TryLockShutdownShared @ 0x14066A58C (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14067E474 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1406C3EC0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     KiForceSymbolReferences @ 0x1408343F0 (KiForceSymbolReferences.c)
 * Callees:
 *     KeAbEntryFree @ 0x14003FCFC (KeAbEntryFree.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, _KLOCK_ENTRY *a2)
{
  _KLOCK_ENTRY *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v5; // bl
  __int64 v6; // rdx
  __int64 v8; // r8
  char v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (unsigned __int8)((unsigned __int64)a2 >> 1);
    v2 = &CurrentThread->LockEntries[v8];
    if ( (*(_QWORD *)&v2->LockState.0 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(
        0x162u,
        (ULONG_PTR)CurrentThread,
        BugCheckParameter2,
        (ULONG_PTR)&CurrentThread->LockEntries[v8],
        0LL);
  }
  else
  {
    CurrentThread = (struct _KTHREAD *)((char *)a2 - 16 * a2->EntryOffset);
  }
  --CurrentThread->SpecialApcDisable;
  v5 = ++CurrentThread->AbAllocationRegionCount;
  v2->AcquiredByte &= ~1u;
  KeAbEntryFree(v2, a2, &v9);
  v6 = ((char *)v2 - (char *)CurrentThread - 800) / 96;
  if ( v5 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v6;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v6);
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v9);
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
