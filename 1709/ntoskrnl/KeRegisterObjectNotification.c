/*
 * XREFs of KeRegisterObjectNotification @ 0x1400B25BC
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1400B252C (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryManagerThread @ 0x140145860 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140855B44 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiWaitSatisfyOther @ 0x1400E33F4 (KiWaitSatisfyOther.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 *v7; // rcx
  _QWORD *v9; // rbp
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r14
  __int64 v12; // r8
  int v13; // edx
  __int64 *v14; // rcx

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe(a1);
  if ( *(int *)(a1 + 4) > 0 )
  {
    KiWaitSatisfyOther(a1);
    *(_BYTE *)(a3 + 17) = 5;
    v9 = (_QWORD *)(a2 + 8);
    *(_QWORD *)a3 = 0LL;
    KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      LOBYTE(v12) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a3, v12);
    }
    KiAcquireKobjectLockSafe(a2);
    if ( (_QWORD *)*v9 == v9
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a2 && CurrentThread->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)CurrentPrcb, a2, a3) )
    {
      v13 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v13 + 1;
      v14 = *(__int64 **)(a2 + 32);
      if ( *v14 != a2 + 24 )
        __fastfail(3u);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v14;
      *v14 = a3;
      *(_QWORD *)(a2 + 32) = a3;
      if ( !v13 && (_QWORD *)*v9 != v9 )
        KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a2);
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
    return 1;
  }
  else
  {
    v7 = *(__int64 **)(a1 + 16);
    if ( *v7 != a1 + 8 )
      __fastfail(3u);
    *(_QWORD *)a3 = a1 + 8;
    *(_QWORD *)(a3 + 8) = v7;
    *v7 = a3;
    *(_QWORD *)(a1 + 16) = a3;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    return 0;
  }
}
