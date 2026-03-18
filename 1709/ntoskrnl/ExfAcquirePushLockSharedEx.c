/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x14005D4E0
 * Callers:
 *     ExfAcquirePushLockShared @ 0x140007FF0 (ExfAcquirePushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140084450 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     InsertEventEntryInLookUpTable @ 0x1400BA53C (InsertEventEntryInLookUpTable.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140101100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14014A620 (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x1401562B8 (ExpSaAllocatorFree.c)
 *     WheaConfigureErrorSource @ 0x140428BF0 (WheaConfigureErrorSource.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14044A64C (WbGetWarbirdEncryptionSegment.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14044DD2C (ExpWnfEnumerateScopeInstances.c)
 *     WbRemoveWarbirdProcess @ 0x1404FC020 (WbRemoveWarbirdProcess.c)
 *     ExpWnfNotifySubscription @ 0x1404FDA2C (ExpWnfNotifySubscription.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140500538 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfSubscribeNameInstance @ 0x14050080C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfReadStateData @ 0x140500CA8 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140500F14 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1405013D8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfLookupNameInstance @ 0x140501678 (ExpWnfLookupNameInstance.c)
 *     WbGetWarbirdThread @ 0x140501880 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140501C80 (WbGetWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x1405021D0 (WbGetHeapExecutedBlock.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     WbAllocateSlots @ 0x1405036B0 (WbAllocateSlots.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140570094 (ExpWnfAcquireSubscriptionByName.c)
 *     WbAllocateUserMemory @ 0x140576058 (WbAllocateUserMemory.c)
 *     WbFreeUserMemory @ 0x140577424 (WbFreeUserMemory.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140592EC4 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140597614 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExRegisterExtension @ 0x1405D8110 (ExRegisterExtension.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     RtlBackoff @ 0x14005F7F0 (RtlBackoff.c)
 *     KeAbPreWait @ 0x14005F870 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExpWakePushLock @ 0x1400A7F10 (ExpWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(signed __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR v3; // r15
  unsigned __int64 v4; // r14
  signed __int64 v6; // rbx
  signed __int64 v7; // rcx
  signed __int64 result; // rax
  bool v9; // cl
  bool v10; // zf
  signed __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  struct _KTHREAD *CurrentThread; // rdi
  int SessionId; // eax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  signed __int64 v20; // rax
  int i; // ecx
  int v23[4]; // [rsp+30h] [rbp-50h] BYREF
  __int16 Object; // [rsp+40h] [rbp-40h] BYREF
  char v25; // [rsp+42h] [rbp-3Eh]
  _BYTE v26[5]; // [rsp+43h] [rbp-3Dh] BYREF
  _QWORD v27[3]; // [rsp+48h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-18h]
  int v30; // [rsp+70h] [rbp-10h]
  signed __int32 v31; // [rsp+74h] [rbp-Ch] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-8h]
  unsigned int v33; // [rsp+C0h] [rbp+40h]
  unsigned int v34; // [rsp+D8h] [rbp+58h] BYREF

  v3 = a3;
  v34 = 0;
  v4 = a2;
  _m_prefetchw(a1);
  v6 = *a1;
  while ( (v6 & 1) != 0 && ((v6 & 2) != 0 || (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    if ( v4 )
    {
      *(_BYTE *)(v4 + 32) |= 2u;
      if ( *(__int64 *)(v4 + 32) < 0 )
        KiAbEntryRemoveFromTree(v4, a2, a3);
      *(_BYTE *)(v4 + 25) |= 1u;
      *(_BYTE *)(v4 + 32) &= ~2u;
    }
    v9 = 0;
    v32 = v4;
    v31 = 2;
    v29 = 0LL;
    if ( (v6 & 2) != 0 )
    {
      p_Object = 0LL;
      v30 = -1;
      v27[2] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      a2 = (unsigned __int64)&Object | v6 & 8 | 7;
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v30 = -2;
      p_Object = &Object;
      a2 = (unsigned __int64)v26;
    }
    v11 = _InterlockedCompareExchange64(a1, a2, v6);
    v10 = v6 == v11;
    v6 = v11;
    if ( !v10 )
    {
      v12 = v34;
      if ( v34 )
      {
        if ( v34 < 0x1FFF )
          v12 = 2 * v34;
LABEL_19:
        v34 = v12;
        v13 = __rdtsc();
        v33 = 0;
        a2 = (unsigned int)(v12 - 1);
        v14 = (a2 & v13) + v12;
        if ( v14 )
        {
          do
          {
            _mm_pause();
            ++v33;
          }
          while ( v33 < v14 );
        }
      }
      else if ( (_DWORD)KeNumberProcessors_0 != 1 )
      {
        v12 = 64;
        goto LABEL_19;
      }
LABEL_21:
      v6 = *a1;
      _m_prefetchw(a1);
      goto LABEL_22;
    }
    if ( v9 )
    {
      while ( 1 )
      {
        a3 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
        v17 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
        if ( !*(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) )
        {
          do
          {
            v18 = v17;
            v17 = (_QWORD *)v17[3];
            v17[5] = v18;
            v19 = v17[4];
          }
          while ( !v19 );
          if ( v17 != (_QWORD *)a3 )
            *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v19;
        }
        v20 = _InterlockedCompareExchange64(a1, a2 - 4, a2);
        v10 = a2 == v20;
        a2 = v20;
        if ( v10 )
          break;
        if ( (v20 & 1) == 0 )
        {
          ExpWakePushLock(a1, v20);
          break;
        }
      }
    }
    Object = 1;
    v27[1] = v27;
    v27[0] = v27;
    v25 = 6;
    *(_DWORD *)&v26[1] = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      for ( i = ExpSpinCount; i; --i )
      {
        if ( (v31 & 2) == 0 )
          break;
        _mm_pause();
      }
    }
    if ( _interlockedbittestandreset(&v31, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_22:
    if ( v4 )
    {
      v23[0] = 0;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v3, KeGetCurrentIrql(), 0LL);
      *(_BYTE *)(v4 + 32) |= 2u;
      if ( *(__int64 *)(v4 + 32) < 0 )
        KiAbEntryRemoveFromTree(v4, a2, a3);
      v23[0] = 0;
      v23[0] = *(_DWORD *)(v4 + 88) & 0x1FFFF;
      *(_DWORD *)(v4 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v4 + 25) &= ~1u;
      *(_QWORD *)(v4 + 32) = 0LL;
      if ( v3 >= 0xFFFF800000000000uLL && byte_1403899D0[((v3 >> 39) & 0x1FF) - 256] == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v4 + 40) = SessionId;
      *(_QWORD *)(v4 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, v3, v23);
      v10 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v10
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  v7 = (v6 | 1) + 16;
  if ( (v6 & 2) != 0 )
    v7 = v6 | 1;
  result = _InterlockedCompareExchange64(a1, v7, v6);
  if ( v6 != result )
  {
    if ( v4 )
      KeAbPreWait(v4);
    RtlBackoff(&v34);
    goto LABEL_21;
  }
  return result;
}
