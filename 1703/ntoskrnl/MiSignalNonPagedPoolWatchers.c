/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x140154988
 * Callers:
 *     MiCountNonPagedPool @ 0x1400AE6FC (MiCountNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140154930 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x1405A25E8 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

__int64 MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140381440, &LockHandle);
  if ( qword_140380330 )
  {
    v0 = MiState[0];
    v1 = qword_14036BD18;
    if ( qword_14036BD18 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_140380330->Header.SignalState )
        KeResetEvent(qword_140380330);
    }
    else if ( !qword_140380330->Header.SignalState )
    {
      KeSetEvent(qword_140380330, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_140380328->Header.SignalState )
        KeSetEvent(qword_140380328, 0, 0);
    }
    else if ( qword_140380328->Header.SignalState )
    {
      KeResetEvent(qword_140380328);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
