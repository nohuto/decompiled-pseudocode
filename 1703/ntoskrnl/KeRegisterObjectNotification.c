/*
 * XREFs of KeRegisterObjectNotification @ 0x14012A4E8
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x14012A458 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryManagerThread @ 0x14015D930 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x14082478C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiWaitSatisfyOther @ 0x140051968 (KiWaitSatisfyOther.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 *v7; // rcx
  _QWORD *v9; // rbp
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r14
  int v12; // edx
  __int64 *v13; // rcx
  __int64 v14; // r8

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
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
      LOBYTE(v14) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a3, v14);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a2);
    if ( (_QWORD *)*v9 == v9
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a2 && CurrentThread->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)CurrentPrcb, a2, a3) )
    {
      v12 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v12 + 1;
      v13 = *(__int64 **)(a2 + 32);
      if ( *v13 != a2 + 24 )
        __fastfail(3u);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v13;
      *v13 = a3;
      *(_QWORD *)(a2 + 32) = a3;
      if ( !v12 && (_QWORD *)*v9 != v9 )
        KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a2);
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, 1LL, 0LL, CurrentIrql);
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
