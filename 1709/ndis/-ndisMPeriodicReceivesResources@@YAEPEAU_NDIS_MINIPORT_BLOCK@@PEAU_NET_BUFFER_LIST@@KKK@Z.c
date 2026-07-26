/*
 * XREFs of ?ndisMPeriodicReceivesResources@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0068E20
 * Callers:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C006A864 (ndisMQueueReceiveNetBufferLists.c)
 * Callees:
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00680B8 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisFreePeriodicReceives @ 0x1C0069318 (ndisFreePeriodicReceives.c)
 */

char __fastcall ndisMPeriodicReceivesResources(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // r13
  char v6; // r15
  struct _NET_BUFFER_LIST *Alignment; // rsi
  PNET_BUFFER_LIST v10; // rax
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  struct _NET_BUFFER_LIST *v12; // rdi
  unsigned int v13; // r14d
  _NET_BUFFER_LIST *i; // r12
  PNET_BUFFER_LIST v15; // rax
  unsigned __int64 *p_SpinLock; // rcx
  KIRQL v17; // al
  unsigned __int64 *v18; // rcx
  KIRQL NewIrql; // [rsp+68h] [rbp+20h]

  v5 = a4;
  v6 = 0;
  a1->PeriodicReceiveQueue.TrackingResources += a4;
  Alignment = a2;
  NewIrql = 0;
  if ( a1->PeriodicReceiveQueue.State == PeriodicReceivesOn )
  {
    v10 = ndisCopyPeriodicReceiveNbl(a1, a3, a2);
    v12 = v10;
    if ( v10 )
    {
      v13 = 1;
      for ( i = v10; ; i = v15 )
      {
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
        v15 = ndisCopyPeriodicReceiveNbl(v11, a3, Alignment);
        if ( !v15 )
        {
          ndisFreePeriodicReceives(v12);
          return v6;
        }
        i->Link.Alignment = (unsigned __int64)v15;
        ++v13;
      }
      p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
      if ( (a5 & 1) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel(p_SpinLock);
        a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
      }
      else
      {
        v17 = KeAcquireSpinLockRaiseToDpc(p_SpinLock);
        a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        NewIrql = v17;
      }
      a1->PeriodicReceiveQueue.LockDbg = 2493989;
      if ( a1->PeriodicReceiveQueue.State == PeriodicReceivesOn
        && (unsigned __int64)(v5 + a1->PeriodicReceiveQueue.NumMQueuedNbls) < 0x3E8 )
      {
        a1->PeriodicReceiveQueue.TrackingQueued += v13;
        _InterlockedExchangeAdd(&a1->PeriodicReceiveQueue.NblsAllocated, v13);
        if ( a1->PeriodicReceiveQueue.QueuedHead )
          a1->PeriodicReceiveQueue.QueuedTail->Next = v12;
        else
          a1->PeriodicReceiveQueue.QueuedHead = v12;
        a1->PeriodicReceiveQueue.NumMQueuedNbls += v13;
        v6 = 1;
        a1->PeriodicReceiveQueue.QueuedTail = i;
      }
      else
      {
        ndisFreePeriodicReceives(v12);
      }
      a1->PeriodicReceiveQueue.LockThread = 0LL;
      v18 = &a1->PeriodicReceiveQueue.SpinLock;
      a1->PeriodicReceiveQueue.LockDbg = 0;
      if ( (a5 & 1) != 0 )
        KeReleaseSpinLockFromDpcLevel(v18);
      else
        KeReleaseSpinLock(v18, NewIrql);
    }
  }
  return v6;
}
