/*
 * XREFs of ndisPeriodicReceivesWorker @ 0x1C006B250
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C00069C0 (NdisAcquireRWLockRead.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C0012D20 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1C0050610 (ndisTracePeriodicReceivesEnd.c)
 *     ndisTracePeriodicReceivesStart @ 0x1C00506F4 (ndisTracePeriodicReceivesStart.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006953C (-ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069934 (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisPeriodicReceivesWorker(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // si
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 Clock; // rdi
  struct _NET_BUFFER_LIST *MiniportIndicateList; // rax
  unsigned int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  if ( BYTE1(dword_1C009AF18) )
  {
    v2 = 1;
    ndisTracePeriodicReceivesStart((__int64)a1);
    Clock = WmiGetClock(0LL, 0LL, v3, v4);
  }
  else
  {
    Clock = 0LL;
    v2 = 0;
  }
  NdisAcquireRWLockRead(Lock, &LockState, 1u);
  MiniportIndicateList = ndisGetMiniportIndicateList(a1);
  v7 = ndisDoPeriodicReceivesIndication(a1, MiniportIndicateList);
  NdisReleaseRWLock(Lock, &LockState);
  if ( v2 )
  {
    v10 = WmiGetClock(0LL, 0LL, v8, v9);
    ndisTracePeriodicReceivesEnd((__int64)a1, v10 - Clock, v7);
  }
  a1->PeriodicReceiveQueue.WorkItemQueued = 0;
  _InterlockedOr(v11, 0);
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    ndisQueuePeriodicReceivesWorkItem(a1, 0);
    ndisQueuePeriodicReceivesTimer();
  }
  ndisDereferenceMiniport((__int64)a1, 0x4Cu, v8, v9);
}
