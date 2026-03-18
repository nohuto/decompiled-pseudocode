/*
 * XREFs of ExAllocateHeapPool @ 0x1402BCFE4
 * Callers:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpAddTagForBigPages @ 0x1400D9480 (ExpAddTagForBigPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     RtlpHpAllocateHeap @ 0x1402945C8 (RtlpHpAllocateHeap.c)
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     ExpSplitCacheAlignedAllocation @ 0x1402B9170 (ExpSplitCacheAlignedAllocation.c)
 *     ExGetHeapFromType @ 0x1402BD650 (ExGetHeapFromType.c)
 */

void *__fastcall ExAllocateHeapPool(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // r14
  unsigned int v5; // ebx
  _DWORD *HeapFromType; // rax
  __int16 v7; // r9
  ULONG_PTR v8; // rsi
  void *v9; // rbp
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned int v14; // esi
  unsigned int v15; // ecx
  volatile signed __int32 *v16; // r15
  volatile signed __int32 v17; // ecx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbp
  _DWORD *Heap; // rax
  __int64 v21; // rsi
  int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // r10
  unsigned int v25; // r14d
  unsigned int v26; // ecx
  volatile signed __int32 *v27; // r15
  volatile signed __int32 v28; // ecx
  __int64 v30; // [rsp+30h] [rbp-88h]
  __int64 v31; // [rsp+30h] [rbp-88h]
  __int64 v32; // [rsp+38h] [rbp-80h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  _DWORD *v34; // [rsp+40h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+D0h] [rbp+18h]
  unsigned int v38; // [rsp+D0h] [rbp+18h]
  int v39; // [rsp+D8h] [rbp+20h]
  int v40; // [rsp+D8h] [rbp+20h]

  v3 = a3 & 0x7FFFFFFF;
  v4 = 1LL;
  v5 = a1;
  if ( (a3 & 0x7FFFFFFF) == 0 )
    v3 = 811884866;
  if ( a2 )
    v4 = a2;
  HeapFromType = (_DWORD *)ExGetHeapFromType(a1, a2, a3);
  v34 = HeapFromType;
  v8 = (ULONG_PTR)HeapFromType;
  if ( v4 <= 0xFE0 )
  {
    v18 = v4 + 16;
    if ( (v5 & 4) != 0 )
    {
      v18 += (unsigned int)ExpCacheLineSize;
      if ( v18 > 0xFE0 )
      {
        v18 = v4 + 16;
        v5 &= ~4u;
      }
    }
    v19 = (v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    Heap = RtlpHpAllocateHeap(HeapFromType, v19, 0, v7);
    v21 = (__int64)Heap;
    if ( !Heap )
      return 0LL;
    Heap[1] = v3;
    *(_BYTE *)Heap = 0;
    *((_BYTE *)Heap + 2) = v19 >> 4;
    *((_BYTE *)Heap + 3) = v5 & 0x6D | 2;
    if ( v3 == PoolHitTag )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      EtwTracePool(0xE20u, v5, v3, (unsigned __int64)(Heap + 4), v19);
    if ( (v5 & 0x20) != 0 )
    {
      v24 = ExpSessionPoolTrackTable;
      v22 = ExpSessionPoolTrackTableMask;
      v23 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      v22 = PoolTrackTableMask;
      v23 = PoolTrackTableSize;
      v24 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    }
    v33 = v23;
    v40 = v22;
    v31 = v24;
    v25 = v22 & ((40543 * v3) ^ ((40543 * (unsigned __int64)v3) >> 32));
    v26 = v25;
    v38 = v25;
    while ( 1 )
    {
      v27 = (volatile signed __int32 *)(v24 + 56LL * v25);
      if ( *v27 == v3 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)((char *)v27 + ((v5 & 1) != 0 ? 0x18 : 0) + 16));
        _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v27 + ((v5 & 1) != 0 ? 0x18 : 0) + 8), v19);
LABEL_62:
        if ( (v5 & 4) != 0 )
          v21 = ExpSplitCacheAlignedAllocation(v21);
        v10 = v21 + 16;
        v8 = (ULONG_PTR)v34;
        v9 = 0LL;
LABEL_65:
        if ( v9 )
          RtlpHpFreeHeap(v8, (ULONG_PTR)v9, 0, 0LL);
        return (void *)v10;
      }
      if ( *v27 )
        goto LABEL_59;
      if ( (v5 & 0x20) == 0 )
      {
        v28 = *(_DWORD *)(PoolTrackTable + 56LL * v25);
        if ( v28 )
        {
          *v27 = v28;
          goto LABEL_51;
        }
        v26 = v38;
      }
      if ( v25 == v23 - 1 )
      {
LABEL_59:
        v25 = v22 & (v25 + 1);
        if ( v25 == v26 )
        {
          ExpInsertPoolTrackerExpansion(v3, v19, v5);
          goto LABEL_62;
        }
      }
      else if ( (v5 & 0x20) != 0 )
      {
        _InterlockedCompareExchange(v27, v3, 0);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v36);
        if ( !*(_DWORD *)(PoolTrackTable + 56LL * v25) )
        {
          *(_DWORD *)(PoolTrackTable + 56LL * v25) = v3;
          *v27 = v3;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
        __writecr8(v36.OldIrql);
        v22 = v40;
        v23 = v33;
        v24 = v31;
LABEL_51:
        v26 = v38;
      }
    }
  }
  v9 = RtlpHpAllocateHeap(HeapFromType, v4, 0, v7);
  if ( !(unsigned int)ExpAddTagForBigPages((unsigned __int64)v9, v3, v4, v5, 0, 0) )
  {
    v10 = 0LL;
    goto LABEL_65;
  }
  if ( v3 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v5, v3, (unsigned __int64)v9, v4);
  if ( (v5 & 0x20) != 0 )
  {
    v13 = ExpSessionPoolTrackTable;
    v11 = ExpSessionPoolTrackTableMask;
    v12 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    v11 = PoolTrackTableMask;
    v12 = PoolTrackTableSize;
    v13 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v30 = v12;
  v39 = v11;
  v32 = v13;
  v14 = v11 & ((40543 * v3) ^ ((40543 * (unsigned __int64)v3) >> 32));
  v15 = v14;
  v37 = v14;
  while ( 1 )
  {
    v16 = (volatile signed __int32 *)(v13 + 56LL * v14);
    if ( *v16 == v3 )
      break;
    if ( *v16 )
      goto LABEL_29;
    if ( (v5 & 0x20) == 0 )
    {
      v17 = *(_DWORD *)(PoolTrackTable + 56LL * v14);
      if ( v17 )
      {
        *v16 = v17;
        goto LABEL_21;
      }
      v15 = v37;
    }
    if ( v14 == v12 - 1 )
    {
LABEL_29:
      v14 = v11 & (v14 + 1);
      if ( v14 == v15 )
      {
        ExpInsertPoolTrackerExpansion(v3, v4, v5);
        return v9;
      }
    }
    else if ( (v5 & 0x20) != 0 )
    {
      _InterlockedCompareExchange(v16, v3, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      if ( !*(_DWORD *)(PoolTrackTable + 56LL * v14) )
      {
        *(_DWORD *)(PoolTrackTable + 56LL * v14) = v3;
        *v16 = v3;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v11 = v39;
      v12 = v30;
      v13 = v32;
LABEL_21:
      v15 = v37;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)((char *)v16 + ((v5 & 1) != 0 ? 0x18 : 0) + 16));
  _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v16 + ((v5 & 1) != 0 ? 0x18 : 0) + 8), v4);
  return v9;
}
