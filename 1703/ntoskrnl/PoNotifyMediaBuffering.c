/*
 * XREFs of PoNotifyMediaBuffering @ 0x140130B50
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeQueryPriorityThread @ 0x140054910 (KeQueryPriorityThread.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax

  v2 = 0;
  KxAcquireSpinLock(&PpmMediaBufferingWork);
  if ( !byte_14034C128 )
  {
    v2 = 1;
    byte_14034C128 = 1;
  }
  byte_14034C129 = a1;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  if ( v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    if ( PriorityThread < 31 )
      ++PriorityThread;
    ExQueueWorkItem(&WorkItem, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  }
}
