/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x1400C32F0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140143DE4 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTracker @ 0x140284990 (ExpInsertPoolTracker.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     InitializePagedPool @ 0x14082DD0C (InitializePagedPool.c)
 * Callees:
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140103540 (ExpRemovePoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017D2D8 (EtwTracePool.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // si
  unsigned __int8 CurrentIrql; // al
  _QWORD *v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  _DWORD *v10; // rbx
  unsigned __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rax
  __int64 Next; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  char *PoolPages; // rax
  char *v21; // rsi
  unsigned __int64 v22; // rax
  size_t v23; // rcx
  int v24; // r9d
  __int64 v25; // r11
  __int64 Number; // rcx
  unsigned int v27; // esi
  int v28; // r10d
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  size_t v32; // rsi
  __int64 v33; // rax
  int v34; // r9d
  unsigned int v35; // ecx
  __int64 v36; // r11
  int v37; // r10d
  __int64 v38; // r8
  int v39; // eax
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // rbx
  __int64 v45; // [rsp+30h] [rbp-19h]
  __int64 v46; // [rsp+30h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-11h] BYREF
  size_t Size; // [rsp+50h] [rbp+7h]
  __int64 v49; // [rsp+58h] [rbp+Fh]
  size_t v50; // [rsp+60h] [rbp+17h]
  __int64 v51; // [rsp+68h] [rbp+1Fh]
  struct _KLOCK_QUEUE_HANDLE v52; // [rsp+70h] [rbp+27h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v56; // [rsp+C8h] [rbp+7Fh]
  int v57; // [rsp+C8h] [rbp+7Fh]

  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  v3 = a3;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v6);
  }
  v56 = v3 & 0x20;
  if ( (v3 & 0x20) != 0 )
  {
    v7 = ExpSessionPoolTrackTable;
    v8 = ExpSessionPoolTrackTableSize;
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v10 = *(_DWORD **)(v9 + 8112);
    v11 = *(_QWORD *)(v9 + 8120);
  }
  else
  {
    v7 = PoolTrackTable;
    v8 = PoolTrackTableSize;
    v11 = PoolTrackTableExpansionSize;
    v10 = PoolTrackTableExpansion;
  }
  v49 = v8;
  v45 = v7;
  v12 = 0;
  if ( v11 )
  {
    v13 = 0LL;
    do
    {
      v14 = 14 * v13;
      v15 = v10[14 * v13];
      if ( v15 == a1 )
        break;
      if ( !v15 )
      {
        v10[v14] = a1;
        break;
      }
      v13 = ++v12;
    }
    while ( v12 < v11 );
  }
  if ( v12 != v11 )
  {
    v16 = 14LL * v12;
    if ( (v3 & 1) != 0 )
    {
      ++*(_QWORD *)&v10[v16 + 10];
      *(_QWORD *)&v10[v16 + 8] += a2;
    }
    else
    {
      ++*(_QWORD *)&v10[v16 + 4];
      *(_QWORD *)&v10[v16 + 2] += a2;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_19;
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
LABEL_19:
        result = LockHandle.OldIrql;
        __writecr8(LockHandle.OldIrql);
        return result;
      }
      Next = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_19;
  }
  if ( *(_DWORD *)(56 * v8 + v7 - 56) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    result = (unsigned int)(v49 - 1);
    v42 = 56 * result;
    if ( (v3 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v42 + v45 + 40));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + v45 + 32), a2);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v42 + v45 + 16));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + v45 + 8), a2);
    }
    return result;
  }
  v51 = 56 * v11;
  Size = (56 * v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v19 = ((Size + 4096) * (unsigned __int128)0x2492492492492493uLL) >> 64;
  v50 = (v19 + ((Size + 4096 - v19) >> 1)) >> 5;
  PoolPages = (char *)MiAllocatePoolPages(512LL, Size + 4096);
  v21 = PoolPages;
  if ( !PoolPages )
  {
    v44 = v45 + 56LL * (unsigned int)(v49 - 1);
    *(_DWORD *)v44 = 1818654287;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v44 + 40));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 32), a2);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v44 + 16));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 8), a2);
    }
    return result;
  }
  if ( v10 )
    memmove(PoolPages, v10, Size);
  memset(&v21[v51], 0, Size + 4096 - v51);
  if ( v56 )
  {
    v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v23 = v50;
    *(_QWORD *)(v22 + 8112) = v21;
    *(_QWORD *)(v22 + 8120) = v23;
  }
  else
  {
    PoolTrackTableExpansionSize = v50;
    PoolTrackTableExpansion = v21;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 512, 1819242320, (_DWORD)v21, Size + 4096);
  v24 = PoolTrackTableMask;
  v25 = PoolTrackTableSize;
  Number = KeGetPcr()->Prcb.Number;
  v27 = PoolTrackTableMask & 0x40DEDA5;
  v50 = PoolTrackTableMask;
  v49 = PoolTrackTableSize;
  v28 = PoolTrackTableMask & 0x40DEDA5;
  v57 = PoolTrackTableMask & 0x40DEDA5;
  v29 = (__int64)*(&ExPoolTagTables + Number);
  v46 = v29;
  while ( 1 )
  {
    v30 = 56LL * v27;
    v51 = v30;
    v31 = *(_DWORD *)(v29 + v30);
    if ( v31 == 1819242320 )
      break;
    if ( v31 )
    {
LABEL_36:
      v27 = v24 & (v27 + 1);
      if ( v27 == v28 )
      {
        v32 = Size;
        ExpInsertPoolTrackerExpansion(1819242320LL, Size + 4096, 512LL);
        goto LABEL_39;
      }
    }
    else
    {
      v40 = *(_DWORD *)(v30 + PoolTrackTable);
      if ( v40 )
      {
        *(_DWORD *)(v46 + 56LL * v27) = v40;
        v29 = v46;
      }
      else
      {
        if ( v27 == v25 - 1 )
        {
          v29 = v46;
          goto LABEL_36;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v52);
        v41 = v51;
        if ( !*(_DWORD *)(v51 + PoolTrackTable) )
        {
          *(_DWORD *)(v51 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v46 + v41) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v52);
        __writecr8(v52.OldIrql);
        v24 = v50;
        v28 = v57;
        v25 = v49;
        v29 = v46;
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v29 + v30 + 16));
  v32 = Size;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + v30 + 8), Size + 4096);
LABEL_39:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v10 )
  {
    if ( PoolHitTag == 1819242320 )
      __debugbreak();
    v33 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      v33 = EtwTracePool(3618, 512, 1819242320, (_DWORD)v10, v32);
    LODWORD(v33) = KeGetPcr()->Prcb.Number;
    v34 = PoolTrackTableMask;
    v35 = PoolTrackTableMask & 0x40DEDA5;
    v36 = (__int64)*(&ExPoolTagTables + v33);
    v37 = PoolTrackTableMask & 0x40DEDA5;
    do
    {
      while ( 1 )
      {
        v38 = 56LL * v35;
        v39 = *(_DWORD *)(v36 + v38);
        if ( v39 == 1819242320 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v36 + v38 + 24));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + v38 + 8), -(__int64)v32);
          goto LABEL_47;
        }
        if ( v39 )
          break;
        v43 = *(_DWORD *)(v38 + PoolTrackTable);
        if ( !v43 )
          break;
        *(_DWORD *)(v36 + 56LL * v35) = v43;
      }
      v35 = v34 & (v35 + 1);
    }
    while ( v35 != v37 );
    ExpRemovePoolTrackerExpansion(1819242320LL, v32, 512LL);
LABEL_47:
    MiFreePoolPages((ULONG_PTR)v10, v32);
  }
  return ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
