/*
 * XREFs of MmSetAccessLogging @ 0x1402309E4
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1404312A0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140431394 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140431444 (PfTSetTracingPriority.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall MmSetAccessLogging(int a1, int a2)
{
  BOOLEAN result; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140388C80, &LockHandle);
  dword_140388C68 = a1;
  dword_140388C6C = a2;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    if ( !ListEntry )
      return KeInsertQueueDpc(&Dpc, 0LL, 0LL);
  }
  else
  {
    if ( stru_140388C48.Parameter )
    {
      if ( stru_140388C48.Parameter == (void *)2 )
        stru_140388C48.Parameter = (void *)3;
    }
    else
    {
      stru_140388C48.List.Flink = 0LL;
      stru_140388C48.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      stru_140388C48.Parameter = (void *)1;
      ExQueueWorkItem(&stru_140388C48, DelayedWorkQueue);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return result;
}
