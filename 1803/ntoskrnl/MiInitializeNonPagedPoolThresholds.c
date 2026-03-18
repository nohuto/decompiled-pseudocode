/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x140170128
 * Callers:
 *     MiPerformMemoryChange @ 0x140252E5C (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x14089CAE8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140170180 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 MiInitializeNonPagedPoolThresholds()
{
  __int64 v0; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CF240, &LockHandle);
  v0 = qword_1403CC5D0;
  if ( qword_1403CC5D0 > qword_1403CFA10 )
    v0 = qword_1403CFA10;
  MiState[0] = v0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return MiSignalNonPagedPoolWatchers();
}
