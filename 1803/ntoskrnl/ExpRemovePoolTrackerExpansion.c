/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x1400A4600
 * Callers:
 *     ExPoolCleanupExpansionTable @ 0x1400A3494 (ExPoolCleanupExpansionTable.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     ExFreeHeapPool @ 0x1402BD494 (ExFreeHeapPool.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, char a3)
{
  KSPIN_LOCK *v3; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 v10; // rax
  _DWORD *v11; // r9
  unsigned __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // edx
  _QWORD *v16; // rax
  __int64 Next; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  __int64 result; // rax
  int v21; // eax
  int v22; // eax
  __int64 OldIrql; // rax
  int v24; // edx
  __int64 v25; // r8
  unsigned __int64 v26; // rbp
  volatile signed __int64 *v27; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v3 = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v21 = SchedulerAssist[5];
      SchedulerAssist[5] = v21 + 1;
      if ( v21 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v3);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( (a3 & 0x20) != 0 )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v11 = *(_DWORD **)(v10 + 8232);
    v12 = *(_QWORD *)(v10 + 8240);
  }
  else
  {
    v12 = PoolTrackTableExpansionSize;
    v11 = PoolTrackTableExpansion;
  }
  v13 = 0;
  if ( !v12 )
  {
LABEL_36:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    if ( (a3 & 0x20) != 0 )
    {
      v25 = ExpSessionPoolTrackTable;
      v24 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      LODWORD(OldIrql) = KeGetPcr()->Prcb.Number;
      v24 = PoolTrackTableSize;
      v25 = (__int64)*(&ExPoolTagTables + OldIrql);
    }
    v26 = -a2;
    result = (unsigned int)(v24 - 1);
    v27 = (volatile signed __int64 *)(v25 + 56 * result);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64(v27 + 6);
      _InterlockedExchangeAdd64(v27 + 4, v26);
    }
    else
    {
      _InterlockedIncrement64(v27 + 3);
      _InterlockedExchangeAdd64(v27 + 1, v26);
    }
    return result;
  }
  v14 = 0LL;
  while ( 1 )
  {
    v15 = v11[14 * v14];
    if ( v15 == a1 )
      break;
    if ( v15 )
    {
      v14 = ++v13;
      if ( v13 < v12 )
        continue;
    }
    goto LABEL_36;
  }
  v16 = &v11[14 * v13];
  if ( (a3 & 1) != 0 )
  {
    ++v16[6];
    v16[4] -= a2;
  }
  else
  {
    ++v16[3];
    v16[1] -= a2;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_18;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_18:
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v22 = v19[5] - 1;
      v19[5] = v22;
      if ( !v22 && !*((_BYTE *)v19 + 25) && !*((_BYTE *)v19 + 27) )
        KiPerformUnboostKick(v18);
    }
  }
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
