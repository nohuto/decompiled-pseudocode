/*
 * XREFs of KiInsertQueueInternal @ 0x140124ED8
 * Callers:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

char __fastcall KiInsertQueueInternal(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rax
  int v8; // edx
  __int64 **v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 8);
  KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v10) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v11, v10);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( (_QWORD *)*v2 == v2
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || (LOBYTE(v7) = KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2), !(_BYTE)v7) )
  {
    v8 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v8 + 1;
    v7 = a1 + 24;
    v9 = *(__int64 ***)(a1 + 32);
    if ( *v9 != (__int64 *)(a1 + 24) )
      __fastfail(3u);
    *a2 = v7;
    a2[1] = (__int64)v9;
    *v9 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v8 && (_QWORD *)*v2 != v2 )
      LOBYTE(v7) = KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v7;
}
