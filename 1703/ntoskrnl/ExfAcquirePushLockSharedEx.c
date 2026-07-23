/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x1400FE070
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140081DE4 (InsertEventEntryInLookUpTable.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400F01E0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockShared @ 0x1400FE060 (ExfAcquirePushLockShared.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14011C590 (ExAcquireAutoExpandPushLockShared.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x14014EC1C (ExpAcquireFannedOutPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14014F0C4 (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140151CD4 (ExpSaAllocatorFree.c)
 *     WheaConfigureErrorSource @ 0x140412950 (WheaConfigureErrorSource.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140438078 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140438FF8 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfNotifySubscription @ 0x1404446CC (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140444870 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404578B4 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     WbRemoveWarbirdProcess @ 0x1404987CC (WbRemoveWarbirdProcess.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1404EDCD8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404EDF78 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfLookupNameInstance @ 0x1404EF98C (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x1404F0098 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F01B0 (ExpWnfSubscribeNameInstance.c)
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdProcess @ 0x14053BCA0 (WbGetWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14053C220 (WbGetWarbirdThread.c)
 *     WbAllocateUserMemory @ 0x1405486B8 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140548924 (WbAllocateSlots.c)
 *     WbFreeUserMemory @ 0x14054902C (WbFreeUserMemory.c)
 *     WbGetWarbirdEncryptionSegment @ 0x140549AFC (WbGetWarbirdEncryptionSegment.c)
 *     ExRegisterExtension @ 0x1405C4D20 (ExRegisterExtension.c)
 * Callees:
 *     ExpOptimizePushLockList @ 0x140022508 (ExpOptimizePushLockList.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1400FEE20 (RtlBackoff.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(signed __int64 *a1, _RTL_BALANCED_NODE *a2, ULONG_PTR a3)
{
  signed __int64 v6; // rbx
  signed __int64 v7; // rcx
  signed __int64 result; // rax
  bool v9; // cl
  _BYTE *v10; // rdx
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
  _RTL_BALANCED_NODE *v23; // [rsp+68h] [rbp-8h]
  int v24; // [rsp+B0h] [rbp+40h] BYREF

  v24 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  while ( (v6 & 1) != 0 && ((v6 & 2) != 0 || (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v9 = 0;
    v23 = a2;
    v22 = 2;
    v20 = 0LL;
    if ( (v6 & 2) != 0 )
    {
      p_Object = 0LL;
      v21 = -1;
      v18[2] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = (_BYTE *)((unsigned __int64)&Object | v6 & 8 | 7);
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v21 = -2;
      p_Object = &Object;
      v10 = v17;
    }
    v12 = _InterlockedCompareExchange64(a1, (signed __int64)v10, v6);
    v11 = v6 == v12;
    v6 = v12;
    if ( !v11 )
      goto LABEL_14;
    if ( v9 )
      ExpOptimizePushLockList(a1, (signed __int64)v10);
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
LABEL_15:
    if ( a2 )
      a2 = KeAbPreAcquire(a3, a2, 0);
  }
  v7 = v6 | 1;
  if ( (v6 & 2) == 0 )
    v7 += 16LL;
  result = _InterlockedCompareExchange64(a1, v7, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_14:
    RtlBackoff(&v24);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_15;
  }
  return result;
}
