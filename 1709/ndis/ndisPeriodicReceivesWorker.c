/*
 * XREFs of ndisPeriodicReceivesWorker @ 0x1C006A950
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0017B40 (NdisAcquireRWLockRead.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C0023A14 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1C004FCC8 (ndisTracePeriodicReceivesEnd.c)
 *     ndisTracePeriodicReceivesStart @ 0x1C004FDAC (ndisTracePeriodicReceivesStart.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0068BC4 (-ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0068FC8 (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisPeriodicReceivesWorker(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // si
  __int64 Clock; // rdi
  struct _NET_BUFFER_LIST *MiniportIndicateList; // rax
  unsigned int v5; // ebp
  __int64 v6; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  if ( BYTE1(dword_1C0099FD8) )
  {
    v2 = 1;
    ndisTracePeriodicReceivesStart((__int64)a1);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    Clock = 0LL;
    v2 = 0;
  }
  NdisAcquireRWLockRead(Lock, &LockState, 1u);
  MiniportIndicateList = ndisGetMiniportIndicateList(a1);
  v5 = ndisDoPeriodicReceivesIndication(a1, MiniportIndicateList);
  NdisReleaseRWLock(Lock, &LockState);
  if ( v2 )
  {
    v6 = WmiGetClock(0LL, 0LL);
    ndisTracePeriodicReceivesEnd((__int64)a1, v6 - Clock, v5);
  }
  a1->PeriodicReceiveQueue.WorkItemQueued = 0;
  _InterlockedOr(v7, 0);
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    ndisQueuePeriodicReceivesWorkItem(a1, 0);
    ndisQueuePeriodicReceivesTimer();
  }
  ndisDereferenceMiniport((__int64)a1, 0x4Cu);
}
