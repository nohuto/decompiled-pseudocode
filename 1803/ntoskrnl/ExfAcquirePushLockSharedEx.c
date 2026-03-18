/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x140008790
 * Callers:
 *     ExfAcquirePushLockShared @ 0x140008770 (ExfAcquirePushLockShared.c)
 *     InsertEventEntryInLookUpTable @ 0x14006F1E0 (InsertEventEntryInLookUpTable.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14007BE70 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140103AA0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExpSaAllocatorAllocate @ 0x14015A954 (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14015E594 (ExpSaAllocatorFree.c)
 *     WheaConfigureErrorSource @ 0x14047CB90 (WheaConfigureErrorSource.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14048A364 (WbGetWarbirdEncryptionSegment.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1404F4D64 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404F502C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x1404F62D0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x1404F6A2C (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F6C20 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 *     WbRemoveWarbirdProcess @ 0x14050EB18 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14050EF0C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14050F32C (WbGetWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x14050F76C (WbGetHeapExecutedBlock.c)
 *     WbAllocateUserMemory @ 0x14053A19C (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14053A460 (WbAllocateSlots.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14055C830 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1405678F8 (ExpWnfEnumerateScopeInstances.c)
 *     WbFreeUserMemory @ 0x14056F130 (WbFreeUserMemory.c)
 *     ExpWnfNotifySubscription @ 0x140570A70 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140570C14 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x14057EAB4 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExRegisterExtension @ 0x1406421E0 (ExRegisterExtension.c)
 * Callees:
 *     RtlBackoff @ 0x140007ED0 (RtlBackoff.c)
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExpOptimizePushLockList @ 0x1400BEE8C (ExpOptimizePushLockList.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  signed __int64 v8; // rcx
  signed __int64 result; // rax
  bool v10; // cl
  _BYTE *v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // eax
  __int16 Object; // [rsp+30h] [rbp-40h] BYREF
  char v17; // [rsp+32h] [rbp-3Eh]
  _BYTE v18[5]; // [rsp+33h] [rbp-3Dh] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  signed __int32 v23; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v24; // [rsp+68h] [rbp-8h]
  unsigned int v25; // [rsp+A0h] [rbp+30h] BYREF

  v25 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  while ( 1 )
  {
    v7 = (v6 >> 1) & 1;
    if ( (v6 & 1) == 0 || !v7 && (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      break;
    if ( a2 )
      KeAbPreWait(a2);
    v10 = 0;
    v24 = a2;
    v23 = 2;
    v21 = 0LL;
    if ( v7 )
    {
      p_Object = 0LL;
      v22 = -1;
      v19[2] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (_BYTE *)((unsigned __int64)&Object | v6 & 8 | 7);
      v10 = (v6 & 4) == 0;
    }
    else
    {
      v22 = -2;
      p_Object = &Object;
      v11 = v18;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_14;
    if ( v10 )
      ExpOptimizePushLockList(a1);
    Object = 1;
    v19[1] = v19;
    v19[0] = v19;
    v17 = 6;
    *(_DWORD *)&v18[1] = 0;
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
LABEL_15:
    if ( a2 )
      a2 = KeAbPreAcquire(a3);
  }
  v8 = (v6 | 1) + 16;
  if ( v7 )
    v8 = v6 | 1;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v8, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_14:
    RtlBackoff(&v25);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_15;
  }
  return result;
}
