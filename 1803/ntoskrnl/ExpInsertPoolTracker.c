/*
 * XREFs of ExpInsertPoolTracker @ 0x140153B90
 * Callers:
 *     ExDrainPoolLookasideList @ 0x1405ECFB8 (ExDrainPoolLookasideList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 */

__int64 __fastcall ExpInsertPoolTracker(unsigned int a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  int v8; // r13d
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  int v12; // ecx
  __int64 v13; // r12
  volatile signed __int32 *v14; // r14
  int v15; // eax
  __int64 result; // rax
  volatile signed __int32 v17; // ecx
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v5 = a1;
  if ( a1 == PoolHitTag )
    __debugbreak();
  v7 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v7 = EtwTracePool(3616, a3, a1, a4, a2);
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
  v18 = v9;
  v19 = v10;
  v11 = v8 & ((40543 * v5) ^ ((unsigned __int64)(40543 * v5) >> 32));
  v12 = v11;
  while ( 1 )
  {
    v13 = 56LL * v11;
    v14 = (volatile signed __int32 *)(v13 + v10);
    v15 = *(_DWORD *)(v13 + v10);
    if ( v15 == (_DWORD)v5 )
      break;
    if ( v15 )
    {
LABEL_10:
      v11 = v8 & (v11 + 1);
      if ( v11 == v12 )
        return ExpInsertPoolTrackerExpansion(v5, a2, a3);
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        v17 = *(_DWORD *)(v13 + PoolTrackTable);
        if ( v17 )
        {
          *v14 = v17;
          goto LABEL_20;
        }
        v12 = v8 & ((40543 * v5) ^ ((unsigned __int64)(40543 * v5) >> 32));
      }
      if ( v11 == v9 - 1 )
        goto LABEL_10;
      if ( (a3 & 0x20) != 0 )
      {
        _InterlockedCompareExchange(v14, v5, 0);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v13 + PoolTrackTable) )
        {
          *(_DWORD *)(v13 + PoolTrackTable) = v5;
          *v14 = v5;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v9 = v18;
        v10 = v19;
LABEL_20:
        v12 = v8 & ((40543 * v5) ^ ((unsigned __int64)(40543 * v5) >> 32));
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)((char *)v14 + ((a3 & 1) != 0 ? 0x18 : 0) + 16));
  result = (a3 & 1) != 0 ? 0x18 : 0;
  _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v14 + result + 8), a2);
  return result;
}
