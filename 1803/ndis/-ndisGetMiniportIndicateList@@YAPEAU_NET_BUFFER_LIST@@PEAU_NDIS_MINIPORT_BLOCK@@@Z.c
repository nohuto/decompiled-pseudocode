/*
 * XREFs of ?ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006953C
 * Callers:
 *     ndisPeriodicReceivesWorker @ 0x1C006B250 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ndisPeriodicReceivesGetMaxNblCount @ 0x1C006B1EC (ndisPeriodicReceivesGetMaxNblCount.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisGetMiniportIndicateList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NET_BUFFER_LIST *v2; // rdi
  int MaxNblCount; // esi
  _NET_BUFFER_LIST *QueuedHead; // rcx
  int v5; // edx

  v2 = 0LL;
  MaxNblCount = ndisPeriodicReceivesGetMaxNblCount();
  KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
  a1->PeriodicReceiveQueue.LockDbg = 2494251;
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    QueuedHead = a1->PeriodicReceiveQueue.QueuedHead;
    v5 = 0;
    while ( QueuedHead )
    {
      ++a1->PeriodicReceiveQueue.TrackingDequeued;
      ++v5;
      if ( !--MaxNblCount )
        break;
      QueuedHead = (_NET_BUFFER_LIST *)QueuedHead->Link.Alignment;
    }
    v2 = a1->PeriodicReceiveQueue.QueuedHead;
    if ( QueuedHead )
    {
      a1->PeriodicReceiveQueue.QueuedHead = (_NET_BUFFER_LIST *)QueuedHead->Link.Alignment;
      QueuedHead->Link.Alignment = 0LL;
      if ( a1->PeriodicReceiveQueue.QueuedHead )
      {
LABEL_10:
        a1->PeriodicReceiveQueue.NumMQueuedNbls -= v5;
        a1->PeriodicReceiveQueue.NumNblsDequeued += v5;
        goto LABEL_11;
      }
    }
    else
    {
      a1->PeriodicReceiveQueue.QueuedHead = 0LL;
    }
    a1->PeriodicReceiveQueue.QueuedTail = 0LL;
    goto LABEL_10;
  }
LABEL_11:
  a1->PeriodicReceiveQueue.LockThread = 0LL;
  a1->PeriodicReceiveQueue.LockDbg = 0;
  KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  return v2;
}
