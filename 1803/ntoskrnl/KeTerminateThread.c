/*
 * XREFs of KeTerminateThread @ 0x140040FBC
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     ExQueueWorkItemEx @ 0x140041E6C (ExQueueWorkItemEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1400AF378 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C2518 (KiRemoveThreadFromSchedulingGroup.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x140245ED8 (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 *v4; // rsi
  __int64 *v5; // rdx
  __int64 **v6; // rax
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // r13
  __int64 *v9; // rdx
  _QWORD *v10; // r14
  _QWORD *v11; // r15
  signed __int64 *v12; // r8
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rsi
  char v20; // al
  __int64 v21; // r8
  __int64 v22; // rbp
  _QWORD *v23; // r12
  _KTHREAD *CurrentThread; // r9
  int v25; // r8d
  struct _KPRCB *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  signed __int32 v29[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v31; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v32; // [rsp+98h] [rbp+10h]
  _KTHREAD *v33; // [rsp+A0h] [rbp+18h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x1000) != 0 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter1 + 360);
  if ( v2 )
    KeDisableProfiling(BugCheckParameter1, *(_QWORD *)(v2 + 8));
  v3 = *(_QWORD *)(BugCheckParameter1 + 544);
  *(_BYTE *)(BugCheckParameter1 + 643) = 22;
  KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v4 = (__int64 *)(BugCheckParameter1 + 760);
  if ( *(_QWORD *)(BugCheckParameter1 + 760) == *(_QWORD *)(BugCheckParameter1 + 768) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&KiProcessListLock;
    KxAcquireQueuedSpinLock(&LockHandle, &KiProcessListLock);
    v17 = *(_QWORD *)(v3 + 576);
    v18 = *(_QWORD **)(v3 + 584);
    if ( *(_QWORD *)(v17 + 8) != v3 + 576 || *v18 != v3 + 576 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  KiAcquireKobjectLockSafe(v3);
  v5 = (__int64 *)*v4;
  v6 = *(__int64 ***)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v4 + 8) != v4 || *v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (__int64)v6;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v7 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v7 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v7, BugCheckParameter1 + 520);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(BugCheckParameter1);
  v10 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v11 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v11 != v10 )
  {
    v19 = (__int64)v11;
    v11 = (_QWORD *)*v11;
    v20 = *(_BYTE *)(v19 + 16);
    if ( v20 == 1 )
    {
      v21 = *(unsigned __int16 *)(v19 + 18);
      goto LABEL_30;
    }
    if ( v20 == 2 )
    {
      *(_BYTE *)(v19 + 17) = 5;
      v22 = *(_QWORD *)(v19 + 24);
      *(_QWORD *)v19 = 0LL;
      v23 = (_QWORD *)(v22 + 8);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v32 = KeGetCurrentPrcb();
      CurrentThread = v32->CurrentThread;
      v33 = CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v27) = KeIsThreadRunning(CurrentThread);
        EtwTraceEnqueueWork(v28, v19, v27);
      }
      KiAcquireKobjectLockSafe(v22);
      if ( (_QWORD *)*v23 == v23
        || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
        || v33->Queue == (_DISPATCHER_HEADER *volatile)v22 && v33->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v32, v22, v19) )
      {
        v25 = *(_DWORD *)(v22 + 4);
        *(_DWORD *)(v22 + 4) = v25 + 1;
        v9 = *(__int64 **)(v22 + 32);
        if ( *v9 != v22 + 24 )
          __fastfail(3u);
        *(_QWORD *)v19 = v22 + 24;
        *(_QWORD *)(v19 + 8) = v9;
        *v9 = v19;
        *(_QWORD *)(v22 + 32) = v19;
        if ( !v25 && (_QWORD *)*v23 != v23 )
          KiWakeOtherQueueWaiters(v32, v22);
      }
      _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
    }
    else
    {
      v21 = 256LL;
LABEL_30:
      KiTryUnwaitThread(CurrentPrcb, v19, v21, 0LL);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v10 = v10;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  v12 = (signed __int64 *)(BugCheckParameter1 + 1560);
  _m_prefetchw(&PsReaperListHead);
  v13 = PsReaperListHead;
  do
  {
    *v12 = v13;
    v14 = v13;
    v13 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v12, v13);
  }
  while ( v13 != v14 );
  if ( v13 )
  {
    if ( qword_1403A62B8 && _interlockedbittestandreset((volatile signed __int32 *)&qword_1403A62B8, 0) )
    {
      v15 = 0xFFFFLL;
      goto LABEL_19;
    }
  }
  else
  {
    v15 = 0xFFFFFFFFLL;
LABEL_19:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v15) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_1403A62B8, 0);
  }
  _InterlockedOr(v29, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v26 = KeGetCurrentPrcb();
    v31 = 0;
    while ( 1 )
    {
      LOBYTE(v9) = 1;
      KiSetVpThreadSpinLockCount(v26, v9);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v26, 0LL);
      do
        KeYieldProcessorEx(&v31);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
  return KiSwapThread(BugCheckParameter1, CurrentPrcb);
}
