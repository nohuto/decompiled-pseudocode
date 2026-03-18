/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x140008AF0
 * Callers:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140007E50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquirePushLockExclusive @ 0x140008AD0 (ExfAcquirePushLockExclusive.c)
 *     NtCancelTimer @ 0x14005A790 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     FlushLookUpTableBucket @ 0x140084338 (FlushLookUpTableBucket.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400AB010 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExpDeleteTimer @ 0x1400C00C0 (ExpDeleteTimer.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExWakeTimersPause @ 0x14014DD10 (ExWakeTimersPause.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14015A7A8 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x14015A954 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14015AA34 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaAllocatorFree @ 0x14015E594 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14015E660 (ExpSaPageGroupFreeMemory.c)
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
 *     ExpWnfDeliverThreadNotifications @ 0x1404F4D64 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404F502C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfCreateNameInstance @ 0x1404F5F84 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F6C20 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x1404F7060 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x1404F7310 (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1404F7878 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     WbRemoveWarbirdProcess @ 0x14050EB18 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14050EF0C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14050F32C (WbGetWarbirdProcess.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14050F9F8 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     ExpWnfDeleteProcessContext @ 0x140511368 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1405115F8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x140511974 (ExpWnfDeleteScopeById.c)
 *     ExUuidCreate @ 0x14052FD70 (ExUuidCreate.c)
 *     WbAllocateUserMemory @ 0x14053A19C (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14053A460 (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14053AB8C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14053AC9C (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfDeleteNameInstance @ 0x140567528 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140567868 (ExpWnfDeleteStateData.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x14056ED6C (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x14056EE2C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14056EF30 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeMemoryBlockRegion @ 0x14056F21C (WbFreeMemoryBlockRegion.c)
 *     ExpWnfCreateProcessContext @ 0x140570558 (ExpWnfCreateProcessContext.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140570C14 (ExpWnfDispatchKernelSubscription.c)
 *     NtAllocateUuids @ 0x14057C100 (NtAllocateUuids.c)
 *     NtReleaseKeyedEvent @ 0x1405BD078 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1405BE16C (NtWaitForKeyedEvent.c)
 *     ExRegisterExtension @ 0x1406421E0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1406423DC (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x14064AF18 (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x14064B320 (NtSetUuidSeed.c)
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
 * Callees:
 *     RtlBackoff @ 0x140007ED0 (RtlBackoff.c)
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExpOptimizePushLockList @ 0x1400BEE8C (ExpOptimizePushLockList.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  signed __int64 result; // rax
  bool v9; // cl
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // eax
  __int16 Object; // [rsp+30h] [rbp-40h] BYREF
  char v17; // [rsp+32h] [rbp-3Eh]
  int v18; // [rsp+34h] [rbp-3Ch]
  _QWORD v19[3]; // [rsp+38h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  signed __int32 v23; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v24; // [rsp+68h] [rbp-8h]
  unsigned int v25; // [rsp+B0h] [rbp+40h] BYREF

  v25 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = (unsigned int)(unsigned __int8)v25 + 3;
  while ( (v6 & 1) != 0 )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v9 = 0;
    v24 = a2;
    v23 = v7;
    v21 = 0LL;
    if ( (v6 & 2) != 0 )
    {
      p_Object = 0LL;
      v22 = -1;
      v19[2] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (unsigned __int64)&Object | v6 & 8 | 7;
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v10 = 11LL;
      p_Object = &Object;
      v22 = v6 >> 4;
      if ( v22 <= 1 )
        v10 = v7;
      v11 = (unsigned __int64)&Object | v10;
      if ( !(unsigned int)(v6 >> 4) )
        v22 = -2;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_13;
    if ( v9 )
      ExpOptimizePushLockList(a1);
    Object = 1;
    v19[1] = v19;
    v19[0] = v19;
    v17 = 6;
    v18 = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      for ( i = ExpSpinCount; i; --i )
      {
        if ( (v23 & 2) == 0 )
          break;
        _mm_pause();
      }
    }
    if ( _interlockedbittestandreset(&v23, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = KeAbPreAcquire(a3);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 + 1, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_13:
    RtlBackoff(&v25);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
