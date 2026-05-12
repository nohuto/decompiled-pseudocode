/*
 * XREFs of StorportTimerDpc @ 0x1C0001120
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006D1C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006EEC (RaidAdapterAcquireInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorportTimerDpc(
        struct _KDPC *Dpc,
        __int64 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, __int64); // rdi
  __int64 v7; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *DeferredContext;
  v5 = DeferredContext[18];
  v6 = (void (__fastcall *)(__int64, __int64))_InterlockedExchange64(DeferredContext + 17, 0LL);
  if ( v6 )
  {
    if ( *(_DWORD *)(v4 + 688) )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 680), &LockHandle);
    else
      LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(
                                            v4,
                                            DeferredContext,
                                            SystemArgument1,
                                            SystemArgument2);
    v6(*(_QWORD *)(v4 + 536) + 16LL, v5);
    if ( *(_DWORD *)(v4 + 688) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      LOBYTE(v7) = LockHandle.LockQueue.Next;
      RaidAdapterReleaseInterruptLock(v4, v7);
    }
  }
}
