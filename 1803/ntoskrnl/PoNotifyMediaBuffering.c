/*
 * XREFs of PoNotifyMediaBuffering @ 0x140144310
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x140091160 (KeQueryPriorityThread.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax
  KPRIORITY v4; // edx

  KxAcquireSpinLock(&PpmMediaBufferingWork);
  v2 = byte_1403AB288;
  if ( !byte_1403AB288 )
    byte_1403AB288 = 1;
  byte_1403AB289 = a1;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  if ( !v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    v4 = PriorityThread + 1;
    if ( PriorityThread >= 31 )
      v4 = PriorityThread;
    ExQueueWorkItem(&WorkItem, (WORK_QUEUE_TYPE)(v4 + 32));
  }
}
