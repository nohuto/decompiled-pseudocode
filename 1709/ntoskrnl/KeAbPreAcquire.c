/*
 * XREFs of KeAbPreAcquire @ 0x1400BAD80
 * Callers:
 *     PfLockSharedTryAcquire @ 0x140001F44 (PfLockSharedTryAcquire.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     FlushLookUpTableBucket @ 0x1400B4A48 (FlushLookUpTableBucket.c)
 *     InsertEventEntryInLookUpTable @ 0x1400BA53C (InsertEventEntryInLookUpTable.c)
 *     MiLockAddressSpaceToo @ 0x1400BA9EC (MiLockAddressSpaceToo.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x1400BAAB0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExTryToAcquireFastMutex @ 0x1400BABB0 (ExTryToAcquireFastMutex.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400BAD00 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     ExpDeleteTimer @ 0x1400E0CF0 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1400E1574 (NtCancelTimer.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     MiLeapPrefetch @ 0x14010A194 (MiLeapPrefetch.c)
 *     MiLockControlAreaSectionExtend @ 0x140110630 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiTryLockVad @ 0x14012E314 (MiTryLockVad.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14013F0C0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14013F3D0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14013FBD0 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140145BA0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14014A620 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14014A950 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC (ExpSaPageGroupDescriptorAllocate.c)
 *     MiRebuildLargePages @ 0x14014E330 (MiRebuildLargePages.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140155520 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExpSaAllocatorFree @ 0x1401562B8 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140156564 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140156834 (ExpSaPageGroupDescriptorFree.c)
 *     IopProcessIoTracking @ 0x1401FB984 (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x1402224DC (MiChangingSubsectionProtos.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402705DC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x140284C90 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140284DE0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140284EB0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExGetWakeTimerList @ 0x140286510 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1402874A0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x140287970 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x140287AB0 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x140288050 (ExpSvmDereferenceDevice.c)
 *     WheaConfigureErrorSource @ 0x140428BF0 (WheaConfigureErrorSource.c)
 *     PfpPrefetchSharedStart @ 0x1404410B4 (PfpPrefetchSharedStart.c)
 *     NtAllocateUuids @ 0x140449620 (NtAllocateUuids.c)
 *     WbAddWarbirdEncryptionSegment @ 0x14044A194 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x14044A354 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x14044A418 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x14044A4DC (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14044A64C (WbGetWarbirdEncryptionSegment.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14044DD2C (ExpWnfEnumerateScopeInstances.c)
 *     CmpDelayDerefKCBWorker @ 0x1404781A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x140481170 (CmpAllocateKeyControlBlock.c)
 *     AlpcpReceiveMessagePort @ 0x14049EAE0 (AlpcpReceiveMessagePort.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     TlgAggregateInternalProviderCallback @ 0x1404F19A0 (TlgAggregateInternalProviderCallback.c)
 *     WbRemoveWarbirdProcess @ 0x1404FC020 (WbRemoveWarbirdProcess.c)
 *     ExpWnfDeleteScopeById @ 0x1404FCB94 (ExpWnfDeleteScopeById.c)
 *     ExpWnfNotifySubscription @ 0x1404FDA2C (ExpWnfNotifySubscription.c)
 *     ExpWnfDeleteStateData @ 0x1404FDB28 (ExpWnfDeleteStateData.c)
 *     ExpWnfDeleteProcessContext @ 0x1404FEA5C (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteNameInstance @ 0x1404FEC5C (ExpWnfDeleteNameInstance.c)
 *     ExpWnfWriteStateData @ 0x1404FF464 (ExpWnfWriteStateData.c)
 *     ExpWnfDeleteSubscription @ 0x1404FFB7C (ExpWnfDeleteSubscription.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140500538 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfSubscribeNameInstance @ 0x14050080C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfReadStateData @ 0x140500CA8 (ExpWnfReadStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140500DC0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140500F14 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1405013D8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfLookupNameInstance @ 0x140501678 (ExpWnfLookupNameInstance.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x140501744 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x140501880 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140501C80 (WbGetWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x1405021D0 (WbGetHeapExecutedBlock.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140503110 (ExpWnfUpdateSubscription.c)
 *     WbAllocateSlots @ 0x1405036B0 (WbAllocateSlots.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140504DC0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     ExUuidCreate @ 0x14050B7E0 (ExUuidCreate.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140570094 (ExpWnfAcquireSubscriptionByName.c)
 *     WbAllocateUserMemory @ 0x140576058 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14057642C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14057653C (WbAddHeapExecutedBlockToLRU.c)
 *     WbFreeUserMemory @ 0x140577424 (WbFreeUserMemory.c)
 *     WbFreeMemoryBlockRegion @ 0x140577510 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfCreateProcessContext @ 0x14058202C (ExpWnfCreateProcessContext.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140583AF0 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x140583BB0 (WbHeapExecutionUnloadModule.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14058FEE0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     NtWaitForKeyedEvent @ 0x140590C6C (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x140590F8C (NtReleaseKeyedEvent.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140592EC4 (ExpWnfDispatchKernelSubscription.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1405958F4 (CmpTryToLockHashEntryExclusive.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140597614 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     TlgRegisterAggregateProviderEx @ 0x1405AB198 (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x1405D8110 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1405D82F4 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
 *     CmpTryToLockKcbExclusive @ 0x140694B14 (CmpTryToLockKcbExclusive.c)
 *     TryLockShutdownShared @ 0x140694C14 (TryLockShutdownShared.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1406A8A6C (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x1406A94F4 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1406F2DE0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1406F2E50 (PfpPrefetchSharedConflictNotifyStart.c)
 *     PdcAcquireRwLockExclusive @ 0x140727BD4 (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x14075EE70 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407627FC (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x140762B58 (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140762EC0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140763040 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140763278 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x1407640B0 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x1407642B0 (WheapPredictiveFailureAnalysis.c)
 *     WheaInitialize @ 0x140840C7C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x14084F4D4 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x14086B5B8 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 */

PRTL_BALANCED_NODE __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, PRTL_BALANCED_NODE Node, char a3)
{
  PRTL_BALANCED_NODE p_TreeNode; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // ecx
  __int64 v7; // rax
  int SessionId; // eax
  bool v9; // zf
  int v11; // eax
  unsigned int v12; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // bp
  int v14; // [rsp+68h] [rbp+20h] BYREF

  p_TreeNode = Node;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    if ( Node )
    {
      LOBYTE(Node[1].Right) |= 2u;
      if ( (__int64)Node[1].Children[1] < 0 )
        KiAbEntryRemoveFromTree(Node);
      v11 = *(_DWORD *)&p_TreeNode[3].0 & 0x1FFFF;
      v12 = *(_DWORD *)&p_TreeNode[3].0 & 0xFFFE0000;
      BYTE1(p_TreeNode[1].Children[0]) &= ~1u;
      v14 = v11;
      *(_DWORD *)&p_TreeNode[3].0 = v12;
      p_TreeNode[1].Children[1] = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_1403899D0[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)&p_TreeNode[1].0 = SessionId;
      p_TreeNode[1].Children[1] = (_RTL_BALANCED_NODE *)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
      goto LABEL_10;
    }
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        p_TreeNode = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_5:
        if ( !p_TreeNode )
        {
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_10;
        }
        goto LABEL_6;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    p_TreeNode = &CurrentThread->LockEntries[v7].TreeNode;
    goto LABEL_5;
  }
  if ( (a3 & 1) == 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  p_TreeNode = 0LL;
LABEL_10:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int *)&v14);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return p_TreeNode;
}
