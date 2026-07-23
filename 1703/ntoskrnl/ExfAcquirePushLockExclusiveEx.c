/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x1400FDC60
 * Callers:
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140013CB0 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140021C70 (ExAcquireAutoExpandPushLockExclusive.c)
 *     AcquireAggregateSessionLockForFlush @ 0x140030EA8 (AcquireAggregateSessionLockForFlush.c)
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     NtCancelTimer @ 0x14004AB00 (NtCancelTimer.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x1400FDC50 (ExfAcquirePushLockExclusive.c)
 *     ExpDeleteTimer @ 0x14012B620 (ExpDeleteTimer.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 *     ExWakeTimersPause @ 0x14013DACC (ExWakeTimersPause.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14014EFA0 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x14014F0C4 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14014F418 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140151CD4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140151FB8 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1401522A0 (ExpSaPageGroupDescriptorFree.c)
 *     ExGetWakeTimerList @ 0x14025CC34 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14025D960 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14025DE30 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14025DF60 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14025E500 (ExpSvmDereferenceDevice.c)
 *     WheaConfigureErrorSource @ 0x140412950 (WheaConfigureErrorSource.c)
 *     ExpWnfDeleteProcessContext @ 0x140438158 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1404383E8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x140438C24 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140438F68 (ExpWnfDeleteStateData.c)
 *     WbAddWarbirdEncryptionSegment @ 0x140440FC4 (WbAddWarbirdEncryptionSegment.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1404410F4 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140441208 (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140444870 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfCreateProcessContext @ 0x140447564 (ExpWnfCreateProcessContext.c)
 *     NtAllocateUuids @ 0x14044E440 (NtAllocateUuids.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140451400 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1404514C4 (WbHeapExecutionUnloadModule.c)
 *     NtReleaseKeyedEvent @ 0x140456358 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14045651C (NtWaitForKeyedEvent.c)
 *     WbRemoveWarbirdProcess @ 0x1404987CC (WbRemoveWarbirdProcess.c)
 *     ExpWnfDeleteScopeById @ 0x1404997D0 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1404EDCD8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404EDF78 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfWriteStateData @ 0x1404EE2D4 (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1404EE7F0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F01B0 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x1404F0600 (ExpWnfUpdateSubscription.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14053B6C0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdProcess @ 0x14053BCA0 (WbGetWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14053C220 (WbGetWarbirdThread.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14054801C (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAllocateUserMemory @ 0x1405486B8 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140548924 (WbAllocateSlots.c)
 *     WbFreeMemoryBlockRegion @ 0x140549118 (WbFreeMemoryBlockRegion.c)
 *     WbReEncryptEncryptionSegment @ 0x1405498C0 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140549988 (WbGetInitializedEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x140549E54 (WbDecryptEncryptionSegment.c)
 *     ExUuidCreate @ 0x14054C980 (ExUuidCreate.c)
 *     ExRegisterExtension @ 0x1405C4D20 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1405C4EFC (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     TlgRegisterAggregateProviderEx @ 0x1405CDEF8 (TlgRegisterAggregateProviderEx.c)
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
 * Callees:
 *     ExpOptimizePushLockList @ 0x140022508 (ExpOptimizePushLockList.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1400FEE20 (RtlBackoff.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, _BYTE *a2, ULONG_PTR a3)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  int v7; // r13d
  signed __int64 result; // rax
  bool v9; // cl
  unsigned __int64 v10; // rax
  bool v11; // zf
  signed __int64 v12; // rax
  int i; // eax
  __int16 Object; // [rsp+30h] [rbp-40h] BYREF
  char v16; // [rsp+32h] [rbp-3Eh]
  _BYTE v17[5]; // [rsp+33h] [rbp-3Dh] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+60h] [rbp-10h]
  signed __int32 v22; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h]
  int v24; // [rsp+B0h] [rbp+40h] BYREF

  v24 = 0;
  v4 = (__int64)a2;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = (unsigned __int8)v24 - 2;
  while ( (v6 & 1) != 0 )
  {
    if ( v4 )
    {
      *(_BYTE *)(v4 + 32) |= 2u;
      if ( *(__int64 *)(v4 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v4, (__int64)a2);
      *(_BYTE *)(v4 + 25) |= 1u;
      *(_BYTE *)(v4 + 32) &= ~2u;
    }
    v9 = 0;
    v23 = v4;
    v22 = 3;
    v20 = 0LL;
    if ( (v6 & 2) != 0 )
    {
      p_Object = 0LL;
      v21 = -1;
      v18[2] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      a2 = (_BYTE *)((unsigned __int64)&Object | v6 & 8 | 7);
      v9 = (v6 & 4) == 0;
    }
    else
    {
      p_Object = &Object;
      v10 = v6 >> 4;
      if ( (int)(v6 >> 4) > 1 )
        a2 = (_BYTE *)((unsigned __int64)&Object | 0xB);
      else
        a2 = v17;
      if ( !(_DWORD)v10 )
        LODWORD(v10) = v7;
      v21 = v10;
    }
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)a2, v6);
    v11 = v6 == v12;
    v6 = v12;
    if ( !v11 )
      goto LABEL_16;
    if ( v9 )
      ExpOptimizePushLockList((volatile signed __int64 *)a1, (signed __int64)a2);
    Object = 1;
    v18[1] = v18;
    v18[0] = v18;
    v16 = 6;
    *(_DWORD *)&v17[1] = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      for ( i = ExpSpinCount; i; --i )
      {
        if ( (v22 & 2) == 0 )
          break;
        _mm_pause();
      }
    }
    if ( _interlockedbittestandreset(&v22, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_17:
    if ( v4 )
      v4 = KeAbPreAcquire(a3, (PRTL_BALANCED_NODE)v4);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 + 1, v6);
  if ( v6 != result )
  {
    if ( v4 )
      KeAbPreWait(v4);
LABEL_16:
    RtlBackoff(&v24);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_17;
  }
  return result;
}
