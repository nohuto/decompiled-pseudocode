/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x140154930
 * Callers:
 *     MiPerformMemoryChange @ 0x14020DA70 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x140803DE4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140154988 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 MiInitializeNonPagedPoolThresholds()
{
  __int64 v0; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140381440, &LockHandle);
  v0 = qword_14036D090;
  if ( qword_14036D090 > qword_1403817D0 )
    v0 = qword_1403817D0;
  MiState[0] = v0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return MiSignalNonPagedPoolWatchers();
}
