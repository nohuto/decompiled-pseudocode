/*
 * XREFs of ndisBindUnbindPeriodicReceives @ 0x1C004F040
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FE704 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C000F6A0 (NdisAcquireRWLockWrite.c)
 *     ndisReceiveQueueingOff @ 0x1C004F83C (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C004F8AC (ndisReceiveQueueingOn.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00691D8 (ndisEmptyPeriodicReceivesQueue.c)
 */

void __fastcall ndisBindUnbindPeriodicReceives(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  unsigned __int64 *p_SpinLock; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf
  struct _NDIS_MINIPORT_BLOCK *v7; // rcx
  struct _NDIS_MINIPORT_BLOCK *NextMiniportBlock; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  if ( ndisPeriodicReceives )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    if ( a2 >= 0 )
    {
      if ( a2 <= 2 )
      {
        p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
        KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
        a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        a1->PeriodicReceiveQueue.LockDbg = 73030;
        ++a1->PeriodicReceiveQueue.BoundToIP;
        if ( a1->MediaType == NdisMedium802_3
          && byte_1C0097F01 == 1
          && dword_1C0097F04 != -1
          && a1->PeriodicReceiveQueue.State == PeriodicReceivesOff )
        {
          ndisReceiveQueueingOn(a1);
        }
LABEL_20:
        a1->PeriodicReceiveQueue.LockThread = 0LL;
        a1->PeriodicReceiveQueue.LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(p_SpinLock);
        goto LABEL_21;
      }
      if ( a2 <= 5 )
      {
        p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
        KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
        CurrentThread = KeGetCurrentThread();
        v6 = a1->PeriodicReceiveQueue.BoundToIP-- == 1;
        a1->PeriodicReceiveQueue.LockThread = CurrentThread;
        a1->PeriodicReceiveQueue.LockDbg = 73051;
        if ( v6 && a1->PeriodicReceiveQueue.State )
        {
          ndisReceiveQueueingOff(a1);
          ndisEmptyPeriodicReceivesQueue(a1);
          v7 = qword_1C0097F18;
          if ( qword_1C0097F18 == a1 )
          {
            qword_1C0097F18 = qword_1C0097F18->PeriodicReceiveQueue.NextMiniportBlock;
          }
          else if ( qword_1C0097F18 )
          {
            while ( 1 )
            {
              NextMiniportBlock = v7->PeriodicReceiveQueue.NextMiniportBlock;
              if ( NextMiniportBlock == a1 )
                break;
              v7 = v7->PeriodicReceiveQueue.NextMiniportBlock;
              if ( !NextMiniportBlock )
                goto LABEL_14;
            }
            v7->PeriodicReceiveQueue.NextMiniportBlock = NextMiniportBlock->PeriodicReceiveQueue.NextMiniportBlock;
          }
LABEL_14:
          a1->PeriodicReceiveQueue.NextMiniportBlock = 0LL;
        }
        goto LABEL_20;
      }
    }
LABEL_21:
    NdisReleaseRWLock(Lock, &LockState);
  }
}
