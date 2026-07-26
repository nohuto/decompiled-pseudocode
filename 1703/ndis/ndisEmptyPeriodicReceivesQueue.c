/*
 * XREFs of ndisEmptyPeriodicReceivesQueue @ 0x1C0068148
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00207E0 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C0050474 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001008 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1C00510F8 (ndisTracePeriodicReceivesEnd.c)
 *     ndisTracePeriodicReceivesStart @ 0x1C00511DC (ndisTracePeriodicReceivesStart.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00692B0 (ndisReturnNetBufferListsInternal.c)
 */

_NET_BUFFER_LIST *__fastcall ndisEmptyPeriodicReceivesQueue(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  _NET_BUFFER_LIST *result; // rax
  struct _NET_BUFFER_LIST *QueuedHead; // rdi
  unsigned __int64 *p_SpinLock; // rsi
  char v7; // bp
  __int64 Clock; // r14
  unsigned int v9; // edi
  __int64 v10; // rax

  result = a1->PeriodicReceiveQueue.QueuedHead;
  QueuedHead = 0LL;
  if ( result )
  {
    QueuedHead = a1->PeriodicReceiveQueue.QueuedHead;
    result = (_NET_BUFFER_LIST *)(unsigned int)a1->PeriodicReceiveQueue.NumMQueuedNbls;
    a1->PeriodicReceiveQueue.TrackingDequeued += (unsigned int)result;
    if ( a2 )
      a1->PeriodicReceiveQueue.TrackingEmptied += (unsigned int)result;
    else
      a1->PeriodicReceiveQueue.NumNblsDequeued += (int)result;
  }
  a1->PeriodicReceiveQueue.QueuedHead = 0LL;
  a1->PeriodicReceiveQueue.QueuedTail = 0LL;
  a1->PeriodicReceiveQueue.NumMQueuedNbls = 0;
  if ( QueuedHead )
  {
    a1->PeriodicReceiveQueue.LockThread = 0LL;
    p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
    a1->PeriodicReceiveQueue.LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    if ( a2 )
    {
      ndisReturnNetBufferListsInternal(a1, QueuedHead, 0LL, 0LL);
    }
    else
    {
      if ( BYTE1(dword_1C0093FD8) )
      {
        v7 = 1;
        ndisTracePeriodicReceivesStart((__int64)a1);
        Clock = WmiGetClock(0LL, 0LL);
      }
      else
      {
        Clock = 0LL;
        v7 = 0;
      }
      v9 = ndisDoPeriodicReceivesIndication(a1, QueuedHead);
      if ( v7 )
      {
        v10 = WmiGetClock(0LL, 0LL);
        ndisTracePeriodicReceivesEnd((__int64)a1, v10 - Clock, v9);
      }
    }
    KeAcquireSpinLockAtDpcLevel(p_SpinLock);
    result = (_NET_BUFFER_LIST *)KeGetCurrentThread();
    a1->PeriodicReceiveQueue.LockThread = result;
    a1->PeriodicReceiveQueue.LockDbg = 2494636;
  }
  return result;
}
