/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x140170180
 * Callers:
 *     MiCountNonPagedPool @ 0x1400D8358 (MiCountNonPagedPool.c)
 *     MiReturnNonPagedPoolPde @ 0x1400DC5A0 (MiReturnNonPagedPoolPde.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140170128 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x14061C8B0 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

__int64 MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  LONG SignalState; // edx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CF240, &LockHandle);
  if ( qword_1403CE048 )
  {
    v0 = MiState[0];
    v1 = qword_1403CB118;
    SignalState = qword_1403CE048->Header.SignalState;
    if ( qword_1403CB118 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( SignalState )
        KeResetEvent(qword_1403CE048);
    }
    else if ( !SignalState )
    {
      KeSetEvent(qword_1403CE048, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_1403CE040->Header.SignalState )
        KeSetEvent(qword_1403CE040, 0, 0);
    }
    else if ( qword_1403CE040->Header.SignalState )
    {
      KeResetEvent(qword_1403CE040);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
