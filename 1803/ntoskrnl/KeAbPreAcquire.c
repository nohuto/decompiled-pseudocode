/*
 * XREFs of KeAbPreAcquire @ 0x140008E50
 * Callers:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140007E50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiLockControlAreaSectionExtend @ 0x14004CEC8 (MiLockControlAreaSectionExtend.c)
 *     NtCancelTimer @ 0x14005A790 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     InsertEventEntryInLookUpTable @ 0x14006F1E0 (InsertEventEntryInLookUpTable.c)
 *     MiLockAddressSpaceToo @ 0x140071B04 (MiLockAddressSpaceToo.c)
 *     ExTryToAcquireFastMutex @ 0x14007C620 (ExTryToAcquireFastMutex.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     FlushLookUpTableBucket @ 0x140084338 (FlushLookUpTableBucket.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14008F600 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     MiDeprioritizeVad @ 0x1400A23D8 (MiDeprioritizeVad.c)
 *     PfLockSharedTryAcquire @ 0x1400A2528 (PfLockSharedTryAcquire.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x1400AAFC0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpDeleteTimer @ 0x1400C00C0 (ExpDeleteTimer.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     MiRebuildLargePages @ 0x140155E10 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceExclusive @ 0x140158600 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140158BE0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14015A3E0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14015A954 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14015AA34 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaAllocatorFree @ 0x14015E594 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14015E660 (ExpSaPageGroupFreeMemory.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14015E8D0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1402386C4 (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x1402590DC (MiProcessTransitionHeatBatch.c)
 *     MiChangingSubsectionProtos @ 0x14025D140 (MiChangingSubsectionProtos.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x1402B9350 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1402B94A0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1402B9570 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExGetWakeTimerList @ 0x1402BAC10 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1402BB7A0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1402BBC70 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1402BBDB0 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1402BC3A0 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1402BDA4C (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1402BDE9C (ExpSaPageGroupDescriptorFree.c)
 *     WheaConfigureErrorSource @ 0x14047CB90 (WheaConfigureErrorSource.c)
 *     WbAddWarbirdEncryptionSegment @ 0x140489EA8 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x14048A06C (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x14048A130 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x14048A1F4 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14048A364 (WbGetWarbirdEncryptionSegment.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14048BF00 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     PfpPrefetchSharedStart @ 0x140490DA4 (PfpPrefetchSharedStart.c)
 *     CmpDelayDerefKCBWorker @ 0x1404A84A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     AlpcpReceiveMessagePort @ 0x1404CAA80 (AlpcpReceiveMessagePort.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1404F4D64 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404F502C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfCreateNameInstance @ 0x1404F5F84 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1404F62D0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x1404F6A2C (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F6C20 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x1404F7060 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x1404F7310 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1404F7878 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     WbRemoveWarbirdProcess @ 0x14050EB18 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14050EF0C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14050F32C (WbGetWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x14050F76C (WbGetHeapExecutedBlock.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14050F9F8 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     ExpWnfDeleteProcessContext @ 0x140511368 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1405115F8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x140511974 (ExpWnfDeleteScopeById.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 *     ExUuidCreate @ 0x14052FD70 (ExUuidCreate.c)
 *     WbAllocateUserMemory @ 0x14053A19C (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14053A460 (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14053AB8C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14053AC9C (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14055C830 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteNameInstance @ 0x140567528 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140567868 (ExpWnfDeleteStateData.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1405678F8 (ExpWnfEnumerateScopeInstances.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x14056ED6C (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x14056EE2C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14056EF30 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeUserMemory @ 0x14056F130 (WbFreeUserMemory.c)
 *     WbFreeMemoryBlockRegion @ 0x14056F21C (WbFreeMemoryBlockRegion.c)
 *     ExpWnfCreateProcessContext @ 0x140570558 (ExpWnfCreateProcessContext.c)
 *     ExpWnfNotifySubscription @ 0x140570A70 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140570C14 (ExpWnfDispatchKernelSubscription.c)
 *     NtAllocateUuids @ 0x14057C100 (NtAllocateUuids.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14057C76C (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14057D4EC (CmpTryToLockHashEntryExclusive.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x14057EAB4 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     NtReleaseKeyedEvent @ 0x1405BD078 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1405BE16C (NtWaitForKeyedEvent.c)
 *     ExRegisterExtension @ 0x1406421E0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1406423DC (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x14064AF18 (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x14064B320 (NtSetUuidSeed.c)
 *     CmpTryToLockKcbExclusive @ 0x1406FA6D8 (CmpTryToLockKcbExclusive.c)
 *     TryLockShutdownShared @ 0x1406FA7D8 (TryLockShutdownShared.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14070D100 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14070DC20 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x14075BCA0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x14075BD10 (PfpPrefetchSharedConflictNotifyStart.c)
 *     PdcAcquireRwLockExclusive @ 0x14078BEFC (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x1407C6170 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407CA2E0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x1407CA63C (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1407CAB20 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1407CACA0 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1407CAEF8 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x1407CBD98 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x1407CBF94 (WheapPredictiveFailureAnalysis.c)
 *     WheaInitialize @ 0x1408A29A0 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x1408C095C (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x1408DFFA0 (KiForceSymbolReferences.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  bool v9; // zf
  int v11; // eax
  unsigned int v12; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    if ( a2 )
    {
      *(_BYTE *)(a2 + 32) |= 2u;
      if ( *(__int64 *)(a2 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a2);
      v11 = *(_DWORD *)(v3 + 88) & 0x1FFFF;
      v12 = *(_DWORD *)(v3 + 88) & 0xFFFE0000;
      *(_BYTE *)(v3 + 25) &= ~1u;
      v14 = v11;
      *(_DWORD *)(v3 + 88) = v12;
      *(_QWORD *)(v3 + 32) = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_1403CCF90[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v3 + 40) = SessionId;
      *(_QWORD *)(v3 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_10;
    }
    LOBYTE(v6) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v6 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v3 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_5:
        if ( !v3 )
        {
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_10;
        }
        goto LABEL_6;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v6) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
      CurrentThread->AbEntrySummary = v6;
    }
    v7 = v6;
    _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
    CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
    v3 = (__int64)&CurrentThread->LockEntries[v6];
    goto LABEL_5;
  }
  if ( (a3 & 1) == 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  v3 = 0LL;
LABEL_10:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v14);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v3;
}
