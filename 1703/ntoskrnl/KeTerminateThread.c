/*
 * XREFs of KeTerminateThread @ 0x140114224
 * Callers:
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     ExQueueWorkItemEx @ 0x140114B34 (ExQueueWorkItemEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140114EE8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140120D30 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x140201CD8 (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 *v4; // rsi
  __int64 *v5; // rdx
  __int64 **v6; // rax
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // r12
  _QWORD *v9; // r14
  _QWORD *v10; // r15
  signed __int64 *v11; // r8
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rsi
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rbp
  _QWORD *v22; // r13
  _KTHREAD *CurrentThread; // r9
  int v24; // r8d
  __int64 *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  signed __int32 v28[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v30; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v31; // [rsp+98h] [rbp+10h]
  _KTHREAD *v32; // [rsp+A0h] [rbp+18h]

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
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, KiProcessListLock);
    v19 = *(_QWORD *)(v3 + 576);
    v20 = *(_QWORD **)(v3 + 584);
    if ( *(_QWORD *)(v19 + 8) != v3 + 576 || *v20 != v3 + 576 )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3);
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
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter1);
  v9 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v10 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v10 != v9 )
  {
    v16 = (__int64)v10;
    v10 = (_QWORD *)*v10;
    v17 = *(_BYTE *)(v16 + 16);
    if ( v17 == 1 )
    {
      v18 = *(unsigned __int16 *)(v16 + 18);
      goto LABEL_27;
    }
    if ( v17 == 2 )
    {
      *(_BYTE *)(v16 + 17) = 5;
      v21 = *(_QWORD *)(v16 + 24);
      *(_QWORD *)v16 = 0LL;
      v22 = (_QWORD *)(v21 + 8);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v31 = KeGetCurrentPrcb();
      CurrentThread = v31->CurrentThread;
      v32 = CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v26) = KeIsThreadRunning(CurrentThread);
        EtwTraceEnqueueWork(v27, v16, v26);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v21);
      if ( (_QWORD *)*v22 == v22
        || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
        || v32->Queue == (_DISPATCHER_HEADER *volatile)v21 && v32->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v31, v21, v16) )
      {
        v24 = *(_DWORD *)(v21 + 4);
        *(_DWORD *)(v21 + 4) = v24 + 1;
        v25 = *(__int64 **)(v21 + 32);
        if ( *v25 != v21 + 24 )
          __fastfail(3u);
        *(_QWORD *)v16 = v21 + 24;
        *(_QWORD *)(v16 + 8) = v25;
        *v25 = v16;
        *(_QWORD *)(v21 + 32) = v16;
        if ( !v24 && (_QWORD *)*v22 != v22 )
          KiWakeOtherQueueWaiters((__int64)v31, v21);
      }
      _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
    }
    else
    {
      v18 = 256LL;
LABEL_27:
      KiTryUnwaitThread((__int64)CurrentPrcb, v16, v18, 0LL);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v9 = v9;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  v11 = (signed __int64 *)(BugCheckParameter1 + 1560);
  _m_prefetchw(&PsReaperListHead);
  v12 = PsReaperListHead;
  do
  {
    *v11 = v12;
    v13 = v12;
    v12 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v11, v12);
  }
  while ( v12 != v13 );
  if ( v12 )
  {
    if ( qword_140349058 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140349058, 0) )
    {
      v14 = 0xFFFFLL;
      goto LABEL_19;
    }
  }
  else
  {
    v14 = 0xFFFFFFFFLL;
LABEL_19:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v14) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140349058, 0);
  }
  _InterlockedOr(v28, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb);
}
