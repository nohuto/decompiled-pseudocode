/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x14005D890
 * Callers:
 *     ExfAcquirePushLockExclusive @ 0x140008500 (ExfAcquirePushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     FlushLookUpTableBucket @ 0x1400B4A48 (FlushLookUpTableBucket.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400BAB00 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400BAD00 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExpDeleteTimer @ 0x1400E0CF0 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1400E1574 (NtCancelTimer.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14014A4FC (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x14014A620 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14014A950 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x1401562B8 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140156564 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140156834 (ExpSaPageGroupDescriptorFree.c)
 *     ExGetWakeTimerList @ 0x140286510 (ExGetWakeTimerList.c)
 *     ExWakeTimersPause @ 0x140286828 (ExWakeTimersPause.c)
 *     ExShareAddressSpaceWithDevice @ 0x1402874A0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x140287970 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x140287AB0 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x140288050 (ExpSvmDereferenceDevice.c)
 *     WheaConfigureErrorSource @ 0x140428BF0 (WheaConfigureErrorSource.c)
 *     NtAllocateUuids @ 0x140449620 (NtAllocateUuids.c)
 *     WbAddWarbirdEncryptionSegment @ 0x14044A194 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x14044A354 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x14044A418 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x14044A4DC (WbGetInitializedEncryptionSegment.c)
 *     WbRemoveWarbirdProcess @ 0x1404FC020 (WbRemoveWarbirdProcess.c)
 *     ExpWnfDeleteScopeById @ 0x1404FCB94 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteStateData @ 0x1404FDB28 (ExpWnfDeleteStateData.c)
 *     ExpWnfDeleteProcessContext @ 0x1404FEA5C (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteNameInstance @ 0x1404FEC5C (ExpWnfDeleteNameInstance.c)
 *     ExpWnfWriteStateData @ 0x1404FF464 (ExpWnfWriteStateData.c)
 *     ExpWnfDeleteSubscription @ 0x1404FFB7C (ExpWnfDeleteSubscription.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140500538 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfSubscribeNameInstance @ 0x14050080C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140500DC0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1405013D8 (ExpWnfDeliverThreadNotifications.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x140501744 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x140501880 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140501C80 (WbGetWarbirdProcess.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140503110 (ExpWnfUpdateSubscription.c)
 *     WbAllocateSlots @ 0x1405036B0 (WbAllocateSlots.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140504DC0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     ExUuidCreate @ 0x14050B7E0 (ExUuidCreate.c)
 *     WbAllocateUserMemory @ 0x140576058 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14057642C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14057653C (WbAddHeapExecutedBlockToLRU.c)
 *     WbFreeMemoryBlockRegion @ 0x140577510 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfCreateProcessContext @ 0x14058202C (ExpWnfCreateProcessContext.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140583AF0 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x140583BB0 (WbHeapExecutionUnloadModule.c)
 *     NtWaitForKeyedEvent @ 0x140590C6C (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x140590F8C (NtReleaseKeyedEvent.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140592EC4 (ExpWnfDispatchKernelSubscription.c)
 *     TlgRegisterAggregateProviderEx @ 0x1405AB198 (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x1405D8110 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1405D82F4 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
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
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExpOptimizePushLockList @ 0x14005F784 (ExpOptimizePushLockList.c)
 *     RtlBackoff @ 0x14005F7F0 (RtlBackoff.c)
 *     KeAbPreWait @ 0x14005F870 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, __int16 *a3)
{
  ULONG_PTR v3; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  bool v8; // cl
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  int v13; // ecx
  signed __int64 result; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  struct _KTHREAD *CurrentThread; // rdi
  int SessionId; // eax
  int i; // ecx
  int v21[4]; // [rsp+30h] [rbp-50h] BYREF
  __int16 Object; // [rsp+40h] [rbp-40h] BYREF
  char v23; // [rsp+42h] [rbp-3Eh]
  int v24; // [rsp+44h] [rbp-3Ch]
  _QWORD v25[3]; // [rsp+48h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  int v28; // [rsp+70h] [rbp-10h]
  signed __int32 v29; // [rsp+74h] [rbp-Ch] BYREF
  __int64 v30; // [rsp+78h] [rbp-8h]
  unsigned int v31; // [rsp+C0h] [rbp+40h]
  unsigned int v32; // [rsp+D8h] [rbp+58h] BYREF

  v3 = (ULONG_PTR)a3;
  v32 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = (unsigned int)(unsigned __int8)v32 + 3;
  while ( (v6 & 1) != 0 )
  {
    if ( a2 )
    {
      *(_BYTE *)(a2 + 32) |= 2u;
      if ( *(__int64 *)(a2 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a2);
      *(_BYTE *)(a2 + 25) |= 1u;
      *(_BYTE *)(a2 + 32) &= ~2u;
    }
    v8 = 0;
    v30 = a2;
    v29 = v7;
    v27 = 0LL;
    if ( (v6 & 2) != 0 )
    {
      p_Object = 0LL;
      v28 = -1;
      v25[2] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = (unsigned __int64)&Object | v6 & 8 | 7;
      v8 = (v6 & 4) == 0;
    }
    else
    {
      v9 = 11LL;
      p_Object = &Object;
      a3 = &Object;
      v28 = v6 >> 4;
      if ( v28 <= 1 )
        v9 = v7;
      v10 = (unsigned __int64)&Object | v9;
      if ( !(unsigned int)(v6 >> 4) )
        v28 = -2;
    }
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v10, v6);
    v11 = v6 == v12;
    v6 = v12;
    if ( !v11 )
    {
      v13 = v32;
      if ( v32 )
      {
        if ( v32 < 0x1FFF )
          v13 = 2 * v32;
LABEL_21:
        v32 = v13;
        v15 = __rdtsc();
        v31 = 0;
        v16 = ((v13 - 1) & v15) + v13;
        if ( v16 )
        {
          do
          {
            _mm_pause();
            ++v31;
          }
          while ( v31 < v16 );
        }
      }
      else if ( (_DWORD)KeNumberProcessors_0 != 1 )
      {
        v13 = 64;
        goto LABEL_21;
      }
LABEL_23:
      v6 = *a1;
      _m_prefetchw(a1);
      goto LABEL_24;
    }
    if ( v8 )
      ExpOptimizePushLockList(a1, v10, a3);
    Object = 1;
    v25[1] = v25;
    v25[0] = v25;
    v23 = 6;
    v24 = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      for ( i = ExpSpinCount; i; --i )
      {
        if ( (v29 & 2) == 0 )
          break;
        _mm_pause();
      }
    }
    if ( _interlockedbittestandreset(&v29, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_24:
    if ( a2 )
    {
      v21[0] = 0;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v3, KeGetCurrentIrql(), 0LL);
      *(_BYTE *)(a2 + 32) |= 2u;
      if ( *(__int64 *)(a2 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a2);
      v21[0] = 0;
      v21[0] = *(_DWORD *)(a2 + 88) & 0x1FFFF;
      *(_DWORD *)(a2 + 88) &= 0xFFFE0000;
      *(_BYTE *)(a2 + 25) &= ~1u;
      *(_QWORD *)(a2 + 32) = 0LL;
      if ( v3 >= 0xFFFF800000000000uLL && byte_1403899D0[((v3 >> 39) & 0x1FF) - 256] == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(a2 + 40) = SessionId;
      *(_QWORD *)(a2 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, v3, v21);
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 + 1, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
    RtlBackoff(&v32);
    goto LABEL_23;
  }
  return result;
}
