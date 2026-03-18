/*
 * XREFs of ExpInsertPoolTracker @ 0x140284990
 * Callers:
 *     ExDrainPoolLookasideList @ 0x140757D88 (ExDrainPoolLookasideList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017D2D8 (EtwTracePool.c)
 */

__int64 __fastcall ExpInsertPoolTracker(unsigned int a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v5; // rbp
  __int64 v7; // rax
  int v8; // r13d
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned int v11; // r14d
  int v12; // ecx
  __int64 v13; // rbx
  __int64 result; // rax
  int v15; // ecx
  __int64 v16; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF

  v5 = a1;
  if ( a1 == PoolHitTag )
    __debugbreak();
  v7 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, a3, a1, a4, a2);
  if ( (a3 & 0x20) != 0 )
  {
    v10 = ExpSessionPoolTrackTable;
    v8 = ExpSessionPoolTrackTableMask;
    v9 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    v8 = PoolTrackTableMask;
    v9 = PoolTrackTableSize;
    v10 = (__int64)*(&ExPoolTagTables + v7);
  }
  v16 = v9;
  v11 = v8 & ((40543 * v5) ^ ((unsigned __int64)(40543 * v5) >> 32));
  v12 = v11;
  while ( 1 )
  {
    v13 = 56LL * v11;
    result = *(unsigned int *)(v13 + v10);
    if ( (_DWORD)result == (_DWORD)v5 )
      break;
    if ( (_DWORD)result )
      goto LABEL_22;
    if ( (a3 & 0x20) == 0 )
    {
      v15 = *(_DWORD *)(v13 + PoolTrackTable);
      if ( v15 )
      {
        *(_DWORD *)(v13 + v10) = v15;
        goto LABEL_14;
      }
      v12 = v8 & ((40543 * v5) ^ ((unsigned __int64)(40543 * v5) >> 32));
    }
    if ( v11 == v9 - 1 )
    {
LABEL_22:
      v11 = v8 & (v11 + 1);
      if ( v11 == v12 )
        return ExpInsertPoolTrackerExpansion(v5, a2, a3);
    }
    else if ( (a3 & 0x20) != 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v13 + v10), v5, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      if ( !*(_DWORD *)(v13 + PoolTrackTable) )
      {
        *(_DWORD *)(v13 + PoolTrackTable) = v5;
        *(_DWORD *)(v13 + v10) = v5;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v9 = v16;
LABEL_14:
      v12 = v8 & ((40543 * v5) ^ ((unsigned __int64)(40543 * v5) >> 32));
    }
  }
  if ( (a3 & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v13 + v10 + 40));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + v10 + 32), a2);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v13 + v10 + 16));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + v10 + 8), a2);
  }
  return result;
}
