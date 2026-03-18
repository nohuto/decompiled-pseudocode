/*
 * XREFs of MmSetAccessLogging @ 0x14016C25C
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1404780E0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140478230 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140485C0C (PfTSetTracingPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

BOOLEAN __fastcall MmSetAccessLogging(int a1, int a2)
{
  BOOLEAN result; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CBF40, &LockHandle);
  dword_1403CBF28 = a1;
  dword_1403CBF2C = a2;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    if ( !ListEntry )
      return KeInsertQueueDpc(&stru_1403CC0C8, 0LL, 0LL);
  }
  else
  {
    if ( stru_1403CBF08.Parameter )
    {
      if ( stru_1403CBF08.Parameter == (void *)2 )
        stru_1403CBF08.Parameter = (void *)3;
    }
    else
    {
      stru_1403CBF08.List.Flink = 0LL;
      stru_1403CBF08.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      stru_1403CBF08.Parameter = (void *)1;
      ExQueueWorkItem(&stru_1403CBF08, DelayedWorkQueue);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return result;
}
