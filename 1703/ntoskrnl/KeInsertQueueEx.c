/*
 * XREFs of KeInsertQueueEx @ 0x140010EB0
 * Callers:
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IoSetIoCompletionEx @ 0x1400E30E0 (IoSetIoCompletionEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400E3860 (NtReleaseWorkerFactoryWorker.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, int a3, char a4)
{
  bool v7; // r15
  _QWORD *v8; // rbp
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  int v12; // edx
  _QWORD *v13; // rcx
  __int64 v15; // r8
  unsigned int v16; // [rsp+78h] [rbp+20h]

  v7 = a4 != 0;
  v8 = (_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v15) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, a2, v15);
  }
  if ( a3 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    a3 = 0;
  KiAcquireKobjectLockSafe(a1);
  v16 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v8 == v8
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a1, a2) )
  {
    v12 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v12 + 1;
    v13 = *(_QWORD **)(a1 + 32);
    if ( *v13 != a1 + 24 )
      __fastfail(3u);
    *a2 = a1 + 24;
    a2[1] = v13;
    *v13 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v12 && (_QWORD *)*v8 != v8 )
      KiWakeOtherQueueWaiters(CurrentPrcb, a1);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, v7 ? 3 : 0, 1, a3, CurrentIrql);
  return v16;
}
