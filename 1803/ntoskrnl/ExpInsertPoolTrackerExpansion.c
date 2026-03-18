/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x1400A30A0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExpResizeBigPageTable @ 0x14014A110 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTracker @ 0x140153B90 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x1402BCFE4 (ExAllocateHeapPool.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     InitializePagedPool @ 0x1408ACF98 (InitializePagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     ExPoolCleanupExpansionTable @ 0x1400A3494 (ExPoolCleanupExpansionTable.c)
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // si
  unsigned __int64 v4; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // rax
  _DWORD *v12; // rbx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned int i; // edx
  int v16; // eax
  _QWORD *v17; // rax
  __int64 Next; // rax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  __int64 result; // rax
  __int64 v22; // rdx
  char *HeapPages; // rax
  char *v24; // rsi
  unsigned __int64 v25; // rax
  size_t v26; // rcx
  __int64 v27; // rax
  int v28; // r9d
  unsigned int v29; // esi
  size_t v30; // r11
  int v31; // r10d
  __int64 v32; // rcx
  int v33; // eax
  size_t v34; // rsi
  int v35; // edx
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-19h] BYREF
  size_t Size; // [rsp+48h] [rbp-1h]
  __int64 v44; // [rsp+50h] [rbp+7h]
  __int64 v45; // [rsp+58h] [rbp+Fh]
  size_t v46; // [rsp+60h] [rbp+17h]
  __int64 v47; // [rsp+68h] [rbp+1Fh]
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+70h] [rbp+27h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v52; // [rsp+C8h] [rbp+7Fh]
  int v53; // [rsp+C8h] [rbp+7Fh]

  v3 = a3;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v37 = SchedulerAssist[5];
      SchedulerAssist[5] = v37 + 1;
      if ( v37 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
      {
        KiPerformUnboostKick(CurrentPrcb);
        v4 = a2;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
    goto LABEL_24;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
LABEL_24:
    v4 = a2;
  }
  v52 = v3 & 0x20;
  if ( (v3 & 0x20) != 0 )
  {
    v9 = ExpSessionPoolTrackTable;
    v10 = ExpSessionPoolTrackTableSize;
    v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v12 = *(_DWORD **)(v11 + 8232);
    v13 = *(_QWORD *)(v11 + 8240);
  }
  else
  {
    v9 = PoolTrackTable;
    v10 = PoolTrackTableSize;
    v13 = PoolTrackTableExpansionSize;
    v12 = PoolTrackTableExpansion;
  }
  v14 = 0LL;
  v44 = v10;
  v45 = v9;
  for ( i = 0; i < v13; v14 = ++i )
  {
    v16 = v12[14 * v14];
    if ( v16 == a1 )
      break;
    if ( !v16 )
    {
      v12[14 * i] = a1;
      break;
    }
  }
  if ( i != v13 )
  {
    v17 = &v12[14 * i];
    if ( (v3 & 1) != 0 )
    {
      ++v17[5];
      v17[4] += v4;
    }
    else
    {
      ++v17[2];
      v17[1] += v4;
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
    v19 = KeGetCurrentPrcb();
    v20 = v19->SchedulerAssist;
    if ( v20 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v38 = v20[5] - 1;
        v20[5] = v38;
        if ( !v38 && !*((_BYTE *)v20 + 25) && !*((_BYTE *)v20 + 27) )
          KiPerformUnboostKick(v19);
      }
    }
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    return result;
  }
  if ( *(_DWORD *)(56 * v10 + v9 - 56) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    result = v45 + 56LL * (unsigned int)(v44 - 1);
    if ( (v3 & 1) != 0 )
    {
      v39 = 32LL;
      v40 = 40LL;
    }
    else
    {
      v39 = 8LL;
      v40 = 16LL;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(result + v40));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(result + v39), a2);
    return result;
  }
  v47 = 56 * v13;
  Size = (56 * v13 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v22 = ((Size + 4096) * (unsigned __int128)0x2492492492492493uLL) >> 64;
  v46 = (v22 + ((Size + 4096 - v22) >> 1)) >> 5;
  HeapPages = (char *)ExAllocateHeapPages(512LL, Size + 4096, v13, v4);
  v24 = HeapPages;
  if ( !HeapPages )
  {
    v41 = v45 + 56LL * (unsigned int)(v44 - 1);
    *(_DWORD *)v41 = 1818654287;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v41 + 40));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 32), a2);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v41 + 16));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 8), a2);
    }
    return result;
  }
  if ( v12 )
    memmove(HeapPages, v12, Size);
  memset(&v24[v47], 0, Size + 4096 - v47);
  if ( v52 )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v26 = v46;
    *(_QWORD *)(v25 + 8232) = v24;
    *(_QWORD *)(v25 + 8240) = v26;
  }
  else
  {
    PoolTrackTableExpansionSize = v46;
    PoolTrackTableExpansion = v24;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v27 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v27 = EtwTracePool(3616, 512, 1819242320, (_DWORD)v24, Size + 4096);
  LODWORD(v27) = KeGetPcr()->Prcb.Number;
  v28 = PoolTrackTableMask;
  v44 = PoolTrackTableMask;
  v29 = PoolTrackTableMask & 0x40DEDA5;
  v30 = (size_t)*(&ExPoolTagTables + v27);
  v31 = PoolTrackTableMask & 0x40DEDA5;
  v47 = PoolTrackTableSize;
  v46 = v30;
  v53 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v32 = 56LL * v29;
    v45 = v32;
    v33 = *(_DWORD *)(v32 + v30);
    if ( v33 == 1819242320 )
      break;
    if ( v33 )
    {
LABEL_38:
      v29 = v28 & (v29 + 1);
      if ( v29 == v31 )
      {
        v34 = Size;
        ExpInsertPoolTrackerExpansion(1819242320LL, Size + 4096, 512LL);
        goto LABEL_41;
      }
    }
    else
    {
      v35 = *(_DWORD *)(v32 + PoolTrackTable);
      if ( v35 )
      {
        *(_DWORD *)(v32 + v30) = v35;
      }
      else
      {
        if ( v29 == v47 - 1 )
          goto LABEL_38;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v48);
        v36 = v45;
        if ( !*(_DWORD *)(v45 + PoolTrackTable) )
        {
          *(_DWORD *)(v45 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v36 + v46) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
        __writecr8(v48.OldIrql);
        v28 = v44;
        v31 = v53;
        v30 = v46;
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v32 + v30 + 16));
  v34 = Size;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + v30 + 8), Size + 4096);
LABEL_41:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v12 )
    ExPoolCleanupExpansionTable(v12, v34);
  return ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
