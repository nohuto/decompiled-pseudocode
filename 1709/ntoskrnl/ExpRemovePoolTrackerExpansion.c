/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x140103540
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // al
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  _DWORD *v9; // r10
  unsigned __int64 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 Next; // rax
  __int64 result; // rax
  __int64 OldIrql; // rax
  int v18; // edx
  __int64 v19; // r8
  unsigned __int64 v20; // rbp
  __int64 v21; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
  }
  else
  {
    v7 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v7 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v7);
  }
  if ( (a3 & 0x20) != 0 )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v9 = *(_DWORD **)(v8 + 8112);
    v10 = *(_QWORD *)(v8 + 8120);
  }
  else
  {
    v10 = PoolTrackTableExpansionSize;
    v9 = PoolTrackTableExpansion;
  }
  v11 = 0;
  if ( v10 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = v9[14 * v12];
      if ( v13 == a1 )
        break;
      if ( v13 )
      {
        v12 = ++v11;
        if ( v11 < v10 )
          continue;
      }
      goto LABEL_24;
    }
    v14 = 14 * v12;
    if ( (a3 & 1) != 0 )
    {
      ++*(_QWORD *)&v9[v14 + 12];
      *(_QWORD *)&v9[v14 + 8] -= a2;
    }
    else
    {
      ++*(_QWORD *)&v9[v14 + 6];
      *(_QWORD *)&v9[v14 + 2] -= a2;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_17;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_17:
        result = LockHandle.OldIrql;
        __writecr8(LockHandle.OldIrql);
        return result;
      }
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_17;
  }
LABEL_24:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( (a3 & 0x20) != 0 )
  {
    v19 = ExpSessionPoolTrackTable;
    v18 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(OldIrql) = KeGetPcr()->Prcb.Number;
    v18 = PoolTrackTableSize;
    v19 = (__int64)*(&ExPoolTagTables + OldIrql);
  }
  v20 = -a2;
  result = (unsigned int)(v18 - 1);
  v21 = 56 * result;
  if ( (a3 & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v21 + v19 + 48));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + v19 + 32), v20);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v21 + v19 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + v19 + 8), v20);
  }
  return result;
}
