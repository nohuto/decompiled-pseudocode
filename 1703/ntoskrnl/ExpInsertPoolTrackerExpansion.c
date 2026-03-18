/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x14012BA70
 * Callers:
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140133984 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTracker @ 0x14013E26C (ExpInsertPoolTracker.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     InitializePagedPool @ 0x140814FA8 (InitializePagedPool.c)
 * Callees:
 *     ExpRemovePoolTrackerExpansion @ 0x14001E140 (ExpRemovePoolTrackerExpansion.c)
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  char v4; // si
  unsigned __int8 CurrentIrql; // al
  _QWORD *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned __int64 v10; // rax
  _DWORD *v11; // rbx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  unsigned int i; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 Next; // rax
  __int64 result; // rax
  char *PoolPages; // rax
  char *v20; // rsi
  unsigned __int64 v21; // rax
  size_t v22; // rcx
  int v23; // r9d
  __int64 v24; // r11
  __int64 Number; // rcx
  __int64 v26; // rsi
  int v27; // r10d
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  size_t v31; // rsi
  __int64 v32; // rax
  int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // r11
  int v36; // r10d
  __int64 v37; // r8
  int v38; // eax
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rbx
  __int64 v44; // [rsp+30h] [rbp-19h]
  __int64 v45; // [rsp+30h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-11h] BYREF
  size_t Size; // [rsp+50h] [rbp+7h]
  __int64 v48; // [rsp+58h] [rbp+Fh]
  size_t v49; // [rsp+60h] [rbp+17h]
  __int64 v50; // [rsp+68h] [rbp+1Fh]
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+70h] [rbp+27h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v55; // [rsp+C8h] [rbp+7Fh]
  int v56; // [rsp+C8h] [rbp+7Fh]

  v3 = a2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  v4 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
    goto LABEL_21;
  }
  v7 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
  if ( v7 )
  {
    KxWaitForLockOwnerShip((__int64)&LockHandle, v7);
LABEL_21:
    v3 = a2;
  }
  v55 = v4 & 0x20;
  if ( (v4 & 0x20) != 0 )
  {
    v8 = ExpSessionPoolTrackTable;
    v9 = ExpSessionPoolTrackTableSize;
    v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v11 = *(_DWORD **)(v10 + 8112);
    v12 = *(_QWORD *)(v10 + 8120);
  }
  else
  {
    v8 = PoolTrackTable;
    v9 = PoolTrackTableSize;
    v12 = PoolTrackTableExpansionSize;
    v11 = PoolTrackTableExpansion;
  }
  v13 = 0LL;
  v48 = v9;
  v44 = v8;
  for ( i = 0; i < v12; v13 = ++i )
  {
    v15 = 10 * v13;
    v16 = v11[10 * v13];
    if ( v16 == a1 )
      break;
    if ( !v16 )
    {
      v11[v15] = a1;
      break;
    }
  }
  if ( i != v12 )
  {
    if ( (v4 & 1) != 0 )
    {
      ++v11[10 * i + 6];
      *(_QWORD *)&v11[10 * i + 8] += v3;
    }
    else
    {
      ++v11[10 * i + 1];
      *(_QWORD *)&v11[10 * i + 4] += v3;
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
  if ( *(_DWORD *)(v8 + 40 * v9 - 40) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v41 = 5LL * (unsigned int)(v48 - 1);
    if ( (v4 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 40LL * (unsigned int)(v48 - 1) + 24));
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 8 * v41 + 32), a2);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 40LL * (unsigned int)(v48 - 1) + 4));
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 8 * v41 + 16), a2);
    }
  }
  v50 = 40 * v12;
  Size = (40 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v49 = (Size + 4096) / 0x28;
  PoolPages = (char *)MiAllocatePoolPages(0x200u, Size + 4096);
  v20 = PoolPages;
  if ( !PoolPages )
  {
    v43 = v44 + 40LL * (unsigned int)(v48 - 1);
    *(_DWORD *)v43 = 1818654287;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v43 + 24));
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 32), a2);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v43 + 4));
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 16), a2);
    }
  }
  if ( v11 )
    memmove(PoolPages, v11, Size);
  memset(&v20[v50], 0, Size + 4096 - v50);
  if ( v55 )
  {
    v21 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v22 = v49;
    *(_QWORD *)(v21 + 8112) = v20;
    *(_QWORD *)(v21 + 8120) = v22;
  }
  else
  {
    PoolTrackTableExpansionSize = v49;
    PoolTrackTableExpansion = v20;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 512, 1819242320, (_DWORD)v20, Size + 4096);
  v23 = PoolTrackTableMask;
  v24 = PoolTrackTableSize;
  Number = KeGetPcr()->Prcb.Number;
  v26 = PoolTrackTableMask & 0x40DEDA5;
  v49 = PoolTrackTableMask;
  v48 = PoolTrackTableSize;
  v27 = PoolTrackTableMask & 0x40DEDA5;
  v56 = PoolTrackTableMask & 0x40DEDA5;
  v28 = (__int64)*(&ExPoolTagTables + Number);
  v45 = v28;
  while ( 1 )
  {
    v29 = 40 * v26;
    v30 = *(_DWORD *)(40 * v26 + v28);
    v50 = 40 * v26;
    if ( v30 == 1819242320 )
      break;
    if ( v30 )
    {
LABEL_36:
      v26 = v23 & (unsigned int)(v26 + 1);
      if ( (_DWORD)v26 == v27 )
      {
        v31 = Size;
        ExpInsertPoolTrackerExpansion(1819242320LL, Size + 4096, 512LL);
        goto LABEL_39;
      }
    }
    else
    {
      v39 = *(_DWORD *)(v29 + PoolTrackTable);
      if ( v39 )
      {
        *(_DWORD *)(v29 + v45) = v39;
        v28 = v45;
      }
      else
      {
        if ( (unsigned int)v26 == v24 - 1 )
        {
          v28 = v45;
          goto LABEL_36;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v51);
        v40 = v50;
        if ( !*(_DWORD *)(v50 + PoolTrackTable) )
        {
          *(_DWORD *)(v50 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v40 + v45) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v51);
        __writecr8(v51.OldIrql);
        v23 = v49;
        v27 = v56;
        v24 = v48;
        v28 = v45;
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(v29 + v28 + 4));
  v31 = Size;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + v28 + 16), Size + 4096);
LABEL_39:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v11 )
  {
    if ( PoolHitTag == 1819242320 )
      __debugbreak();
    v32 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      v32 = EtwTracePool(3618, 512, 1819242320, (_DWORD)v11, v31);
    LODWORD(v32) = KeGetPcr()->Prcb.Number;
    v33 = PoolTrackTableMask;
    v34 = PoolTrackTableMask & 0x40DEDA5;
    v35 = (__int64)*(&ExPoolTagTables + v32);
    v36 = PoolTrackTableMask & 0x40DEDA5;
    do
    {
      while ( 1 )
      {
        v37 = 40 * v34;
        v38 = *(_DWORD *)(40 * v34 + v35);
        if ( v38 == 1819242320 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v37 + v35 + 8));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + v35 + 16), -(__int64)v31);
          goto LABEL_48;
        }
        if ( v38 )
          break;
        v42 = *(_DWORD *)(v37 + PoolTrackTable);
        if ( !v42 )
          break;
        *(_DWORD *)(v37 + v35) = v42;
      }
      v34 = v33 & (unsigned int)(v34 + 1);
    }
    while ( (_DWORD)v34 != v36 );
    ExpRemovePoolTrackerExpansion(1819242320, v31, 0);
LABEL_48:
    MiFreePoolPages((ULONG_PTR)v11);
  }
  return ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
