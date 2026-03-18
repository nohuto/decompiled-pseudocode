/*
 * XREFs of KeInsertQueueEx @ 0x140086460
 * Callers:
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, int a3, char a4)
{
  _QWORD *v5; // rbp
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rsi
  _QWORD *p_Lock; // rcx
  int v13; // edx
  int v15; // edx
  _QWORD *v16; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v18; // rdx
  unsigned int v19; // [rsp+80h] [rbp+18h]
  char v20; // [rsp+88h] [rbp+20h]

  v5 = (_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v18, IsThreadRunning);
  }
  if ( a3 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    a3 = 0;
  p_Lock = &CurrentThread->Header.Lock;
  if ( CurrentThread[1].WaitBlock[1].Object )
    p_Lock = CurrentThread[1].WaitBlock[1].Object;
  if ( !a4 || (v20 = 1, *(_BYTE *)(p_Lock[68] + 1466LL) != 2) )
    v20 = 0;
  KiAcquireKobjectLockSafe(a1);
  v19 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 == v5
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44) && !v20
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2) )
  {
    v15 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v15 + 1;
    v16 = *(_QWORD **)(a1 + 32);
    if ( *v16 != a1 + 24 )
      __fastfail(3u);
    *a2 = a1 + 24;
    a2[1] = v16;
    *v16 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v15 && (_QWORD *)*v5 != v5 )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  v13 = 0;
  if ( a4 )
    v13 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v13, 1, a3, CurrentIrql);
  return v19;
}
