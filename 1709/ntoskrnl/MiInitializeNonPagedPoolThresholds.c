/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x14013985C
 * Callers:
 *     MiPerformMemoryChange @ 0x140214B28 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x14082D7A8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1401398B4 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 MiInitializeNonPagedPoolThresholds()
{
  __int64 v0; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14038B380, &LockHandle);
  v0 = qword_140389350;
  if ( qword_140389350 > qword_14038B750 )
    v0 = qword_14038B750;
  MiState[0] = v0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return MiSignalNonPagedPoolWatchers();
}
