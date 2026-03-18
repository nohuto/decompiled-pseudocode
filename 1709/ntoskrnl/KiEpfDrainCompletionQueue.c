/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x14020CEB4
 * Callers:
 *     KiEpfCompletionDpcRoutine @ 0x14020CE50 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x14020CF30 (KiEpfHandleNotification.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KiEpfComplete @ 0x14020CD5C (KiEpfComplete.c)
 */

void KiEpfDrainCompletionQueue()
{
  __int64 v0; // rax
  unsigned __int64 v1; // rbx

  if ( KiEpfCompletionQueue )
  {
    while ( 1 )
    {
      KxAcquireSpinLock(&KiEpfCompletionQueueSpinLock);
      v0 = *(_QWORD *)KiEpfCompletionQueue;
      if ( *(_QWORD *)KiEpfCompletionQueue == *(_QWORD *)(KiEpfCompletionQueue + 8) )
        break;
      v1 = *(_QWORD *)(KiEpfCompletionQueue + 8 * v0 + 16);
      *(_QWORD *)KiEpfCompletionQueue = (v0 + 1) % (unsigned __int64)(unsigned int)KiEpfCompletionQueueSize;
      KxReleaseSpinLock(&KiEpfCompletionQueueSpinLock);
      KiEpfComplete(v1);
    }
    KxReleaseSpinLock(&KiEpfCompletionQueueSpinLock);
  }
}
