/*
 * XREFs of MmSetAccessLogging @ 0x1401362B4
 * Callers:
 *     PfTAccessTracingStart @ 0x140404D3C (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14040E304 (PfTAccessTracingCleanup.c)
 *     PfTSetTracingPriority @ 0x140419968 (PfTSetTracingPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

BOOLEAN __fastcall MmSetAccessLogging(int a1, int a2)
{
  BOOLEAN result; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036CA80, &LockHandle);
  dword_14036CA68 = a1;
  dword_14036CA6C = a2;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    if ( !P )
      return KeInsertQueueDpc(&stru_14036CC08, 0LL, 0LL);
  }
  else
  {
    if ( stru_14036CA48.Parameter )
    {
      if ( stru_14036CA48.Parameter == (void *)2 )
        stru_14036CA48.Parameter = (void *)3;
    }
    else
    {
      stru_14036CA48.List.Flink = 0LL;
      stru_14036CA48.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      stru_14036CA48.Parameter = (void *)1;
      ExQueueWorkItem(&stru_14036CA48, DelayedWorkQueue);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return result;
}
