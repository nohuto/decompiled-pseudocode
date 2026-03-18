/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x14024B234
 * Callers:
 *     KiEpfCompletionDpcRoutine @ 0x14024B1D0 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x14024B2B0 (KiEpfHandleNotification.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiEpfComplete @ 0x14024B0D0 (KiEpfComplete.c)
 */

void KiEpfDrainCompletionQueue()
{
  unsigned __int64 i; // rdi
  __int64 v1; // rax
  char v2; // bl
  unsigned __int64 v3; // [rsp+30h] [rbp+8h]

  if ( KiEpfCompletionQueue )
  {
    for ( i = v3; ; KiEpfComplete(i) )
    {
      KxAcquireSpinLock(&KiEpfCompletionQueueSpinLock);
      v1 = *(_QWORD *)KiEpfCompletionQueue;
      if ( *(_QWORD *)KiEpfCompletionQueue == *(_QWORD *)(KiEpfCompletionQueue + 8) )
      {
        v2 = 0;
      }
      else
      {
        i = *(_QWORD *)(KiEpfCompletionQueue + 8 * v1 + 16);
        v2 = 1;
        *(_QWORD *)KiEpfCompletionQueue = (v1 + 1) % (unsigned __int64)(unsigned int)KiEpfCompletionQueueSize;
      }
      KxReleaseSpinLock(&KiEpfCompletionQueueSpinLock);
      if ( !v2 )
        break;
    }
  }
}
