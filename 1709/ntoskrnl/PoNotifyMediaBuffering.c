/*
 * XREFs of PoNotifyMediaBuffering @ 0x14000DD50
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax

  KxAcquireSpinLock(&PpmMediaBufferingWork);
  v2 = byte_140366AC8;
  if ( !byte_140366AC8 )
    byte_140366AC8 = 1;
  byte_140366AC9 = a1;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  if ( !v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    if ( PriorityThread < 31 )
      ++PriorityThread;
    ExQueueWorkItem(&WorkItem, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  }
}
