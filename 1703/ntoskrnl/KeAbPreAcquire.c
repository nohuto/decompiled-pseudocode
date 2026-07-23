/*
 * XREFs of KeAbPreAcquire @ 0x1400FDE60
 * Callers:
 *     ExAcquireCacheAwarePushLockExclusive @ 0x140013C60 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140021C70 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExTryToAcquireFastMutex @ 0x140022150 (ExTryToAcquireFastMutex.c)
 *     AcquireAggregateSessionLockForFlush @ 0x140030EA8 (AcquireAggregateSessionLockForFlush.c)
 *     MiTryLockVad @ 0x140033F8C (MiTryLockVad.c)
 *     MiLeapPrefetch @ 0x14003A5C0 (MiLeapPrefetch.c)
 *     MiLockAddressSpaceToo @ 0x14003FD5C (MiLockAddressSpaceToo.c)
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     NtCancelTimer @ 0x14004AB00 (NtCancelTimer.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x140055D84 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     MiLockControlAreaSectionExtend @ 0x14005E338 (MiLockControlAreaSectionExtend.c)
 *     PfLockSharedTryAcquire @ 0x140061B34 (PfLockSharedTryAcquire.c)
 *     InsertEventEntryInLookUpTable @ 0x140081DE4 (InsertEventEntryInLookUpTable.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiInitializeInPageSupport @ 0x1400FC010 (MiInitializeInPageSupport.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     ExpDeleteTimer @ 0x14012B620 (ExpDeleteTimer.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14014D420 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14014E340 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 *     ExpSaAllocatorAllocate @ 0x14014F0C4 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14014F418 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1401506E0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpSaAllocatorFree @ 0x140151CD4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140151FB8 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1401522A0 (ExpSaPageGroupDescriptorFree.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1401529C0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1401F5BB0 (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x140218224 (MiChangingSubsectionProtos.c)
 *     MiRebuildLargePages @ 0x1402249F0 (MiRebuildLargePages.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x14025B360 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14025B4B0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14025B580 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExGetWakeTimerList @ 0x14025CC34 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14025D960 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14025DE30 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14025DF60 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14025E500 (ExpSvmDereferenceDevice.c)
 *     WheaConfigureErrorSource @ 0x140412950 (WheaConfigureErrorSource.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140438078 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteProcessContext @ 0x140438158 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1404383E8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x140438C24 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140438F68 (ExpWnfDeleteStateData.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140438FF8 (ExpWnfEnumerateScopeInstances.c)
 *     WbAddWarbirdEncryptionSegment @ 0x140440FC4 (WbAddWarbirdEncryptionSegment.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1404410F4 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140441208 (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfNotifySubscription @ 0x1404446CC (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140444870 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfCreateProcessContext @ 0x140447564 (ExpWnfCreateProcessContext.c)
 *     NtAllocateUuids @ 0x14044E440 (NtAllocateUuids.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140451400 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1404514C4 (WbHeapExecutionUnloadModule.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x140456218 (AlpcpTryLockForCachedReferenceBlob.c)
 *     NtReleaseKeyedEvent @ 0x140456358 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14045651C (NtWaitForKeyedEvent.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140456CB4 (CmpTryToLockHashEntryExclusive.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404578B4 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     PfpPrefetchSharedStart @ 0x1404669E8 (PfpPrefetchSharedStart.c)
 *     CmpDelayDerefKCBWorker @ 0x140490BA0 (CmpDelayDerefKCBWorker.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     WbRemoveWarbirdProcess @ 0x1404987CC (WbRemoveWarbirdProcess.c)
 *     ExpWnfDeleteScopeById @ 0x1404997D0 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1404EDCD8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404EDF78 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfWriteStateData @ 0x1404EE2D4 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1404EE7F0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1404EF98C (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x1404F0098 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F01B0 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x1404F0600 (ExpWnfUpdateSubscription.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14053B6C0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdProcess @ 0x14053BCA0 (WbGetWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14053C220 (WbGetWarbirdThread.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14054801C (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAllocateUserMemory @ 0x1405486B8 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140548924 (WbAllocateSlots.c)
 *     WbFreeUserMemory @ 0x14054902C (WbFreeUserMemory.c)
 *     WbFreeMemoryBlockRegion @ 0x140549118 (WbFreeMemoryBlockRegion.c)
 *     WbReEncryptEncryptionSegment @ 0x1405498C0 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140549988 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x140549AFC (WbGetWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x140549E54 (WbDecryptEncryptionSegment.c)
 *     ExUuidCreate @ 0x14054C980 (ExUuidCreate.c)
 *     CmpReferenceKeyControlBlock @ 0x14054CCC0 (CmpReferenceKeyControlBlock.c)
 *     ExRegisterExtension @ 0x1405C4D20 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1405C4EFC (ExRegisterHost.c)
 *     TlgAggregateInternalProviderCallback @ 0x1405CB100 (TlgAggregateInternalProviderCallback.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     TlgRegisterAggregateProviderEx @ 0x1405CDEF8 (TlgRegisterAggregateProviderEx.c)
 *     CmpTryToLockKcbExclusive @ 0x14066A484 (CmpTryToLockKcbExclusive.c)
 *     TryLockShutdownShared @ 0x14066A58C (TryLockShutdownShared.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14067D9D8 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14067E474 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1406C3EC0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1406C3F30 (PfpPrefetchSharedConflictNotifyStart.c)
 *     PdcAcquireRwLockExclusive @ 0x1406F0134 (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x14071F010 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140722D4C (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x1407230A8 (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140723410 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140723590 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1407237C4 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x1407245E8 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x1407247E8 (WheapPredictiveFailureAnalysis.c)
 *     WheaInitialize @ 0x1407FC324 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x14081E950 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x1408343F0 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

PRTL_BALANCED_NODE __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, PRTL_BALANCED_NODE Node, char a3)
{
  PRTL_BALANCED_NODE p_TreeNode; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // ecx
  __int64 v7; // rax
  int SessionId; // eax
  __int16 v9; // cx
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
        KiAbEntryRemoveFromTree(Node, (__int64)Node);
      v11 = *(_DWORD *)&p_TreeNode[3].0 & 0x1FFFF;
      v12 = *(_DWORD *)&p_TreeNode[3].0 & 0xFFFE0000;
      BYTE1(p_TreeNode[1].Children[0]) &= ~1u;
      v14 = v11;
      *(_DWORD *)&p_TreeNode[3].0 = v12;
      p_TreeNode[1].Children[1] = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_14036D700[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
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
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
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
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
  p_TreeNode = 0LL;
LABEL_10:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, BugCheckParameter2, (unsigned int *)&v14);
  v9 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v9;
  if ( !v9 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return p_TreeNode;
}
