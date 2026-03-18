/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x1401398B4
 * Callers:
 *     MiCountNonPagedPool @ 0x1400C2560 (MiCountNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14013985C (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x1405B1D08 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14038B380, &LockHandle);
  if ( qword_14038A1C8 )
  {
    v0 = MiState[0];
    v1 = qword_140388018;
    if ( qword_140388018 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_14038A1C8->Header.SignalState )
        KeResetEvent(qword_14038A1C8);
    }
    else if ( !qword_14038A1C8->Header.SignalState )
    {
      KeSetEvent(qword_14038A1C8, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_14038A1C0->Header.SignalState )
        KeSetEvent(qword_14038A1C0, 0, 0);
    }
    else if ( qword_14038A1C0->Header.SignalState )
    {
      KeResetEvent(qword_14038A1C0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
