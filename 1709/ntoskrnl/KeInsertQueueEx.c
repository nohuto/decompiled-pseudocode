/*
 * XREFs of KeInsertQueueEx @ 0x140110C00
 * Callers:
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, unsigned int a3, char a4)
{
  BOOL v7; // ebp
  _QWORD *v8; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // r13
  int v12; // edx
  _QWORD *v13; // rcx
  unsigned int v14; // ecx
  unsigned __int8 IsThreadRunning; // al
  __int64 v17; // rdx
  unsigned int v18; // [rsp+78h] [rbp+20h]

  v7 = a4 != 0;
  v8 = (_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v17, IsThreadRunning);
  }
  if ( a3 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    a3 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  v18 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v8 == v8
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2) )
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
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v7 )
    v14 = 3;
  else
    v14 = 0;
  KiExitDispatcher((__int64)CurrentPrcb, v14, 1u, a3, CurrentIrql);
  return v18;
}
