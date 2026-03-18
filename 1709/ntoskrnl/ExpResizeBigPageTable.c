/*
 * XREFs of ExpResizeBigPageTable @ 0x140143DE4
 * Callers:
 *     ExpAddTagForBigPages @ 0x1400C1690 (ExpAddTagForBigPages.c)
 *     ExpResizeBigPageTable @ 0x140143DE4 (ExpResizeBigPageTable.c)
 * Callees:
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 *     ExpResizeBigPageTable @ 0x140143DE4 (ExpResizeBigPageTable.c)
 *     EtwTracePool @ 0x14017D2D8 (EtwTracePool.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall ExpResizeBigPageTable(char a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  void *PoolPages; // rax
  ULONG_PTR v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  unsigned int v12; // r9d
  _QWORD *v13; // r10
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r9d
  __int64 v21; // r11
  __int64 Number; // rcx
  unsigned int v23; // ebp
  int v24; // r10d
  int *v25; // rcx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 result; // rax
  __int64 v31; // rax
  int v32; // edx
  _QWORD *v33; // [rsp+30h] [rbp-58h] BYREF
  int *v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]
  __int64 v36; // [rsp+48h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  int v38; // [rsp+90h] [rbp+8h]
  int v39; // [rsp+90h] [rbp+8h]
  _QWORD *v41; // [rsp+A8h] [rbp+20h]

  *a3 = 0LL;
  v38 = a1 & 0x20;
  v33 = 0LL;
  if ( (a1 & 0x20) != 0 )
  {
    v4 = *(_QWORD *)(qword_1403884B8 + 8136);
    v41 = *(_QWORD **)(qword_1403884B8 + 8128);
    v34 = (int *)(qword_1403884B8 + 7992);
    if ( !PoolBigPageTableSize )
      return 0LL;
  }
  else
  {
    v4 = PoolBigPageTableSize;
    v41 = (_QWORD *)PoolBigPageTable;
    v34 = &ExpPoolBigEntriesInUse;
  }
  if ( v4 )
  {
    v5 = 2 * v4;
    if ( 2 * v4 <= v4 || v5 > 0xAAAAAAAAAAAAAAALL )
      return 0LL;
    v6 = 48 * v4;
  }
  else
  {
    v5 = 512LL;
    v6 = 12288LL;
  }
  if ( v6 >= v6 + 4095 )
    return 0LL;
  v7 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  PoolPages = (void *)MiAllocatePoolPages(0x200u, v7, 512LL, a4);
  v9 = (ULONG_PTR)PoolPages;
  if ( !PoolPages )
    return 0LL;
  memset(PoolPages, 0, v7);
  v10 = (_QWORD *)v9;
  do
  {
    *v10 = 1LL;
    v10 += 3;
  }
  while ( v10 != (_QWORD *)(v9 + 24 * v5) );
  v11 = v41;
  v12 = v5 - 1;
  v13 = &v41[3 * v4];
  if ( v41 != v13 )
  {
    do
    {
      if ( (*v11 & 1) == 0 )
      {
        v14 = v12 & ((40543 * (unsigned int)(*v11 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(*v11 >> 12)) >> 32));
        if ( (*(_BYTE *)(v9 + 24 * v14) & 1) == 0 )
        {
          do
          {
            v28 = 0LL;
            if ( (int)v14 + 1 <= v12 )
              v28 = (unsigned int)(v14 + 1);
            LODWORD(v14) = v28;
          }
          while ( (*(_BYTE *)(v9 + 24 * v28) & 1) == 0 );
        }
        v15 = 3LL * (unsigned int)v14;
        *(_OWORD *)(v9 + 8 * v15) = *(_OWORD *)v11;
        *(_QWORD *)(v9 + 8 * v15 + 16) = v11[2];
      }
      v11 += 3;
    }
    while ( v11 != v13 );
  }
  if ( v34 != &ExpPoolBigEntriesInUse )
  {
    if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize || (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v33) )
    {
      v16 = PoolBigPageTable;
      v12 = PoolBigPageTableSize - 1;
      goto LABEL_18;
    }
    MiFreePoolPages(v9, v7);
    return 0LL;
  }
  v16 = v9;
LABEL_18:
  v17 = v12 & ((40543 * (unsigned int)(v9 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(v9 >> 12)) >> 32));
  if ( (*(_QWORD *)(v16 + 24 * v17) & 1) == 0 )
  {
    do
    {
      v31 = 0LL;
      if ( (int)v17 + 1 <= v12 )
        v31 = (unsigned int)(v17 + 1);
      v17 = (unsigned int)v31;
    }
    while ( (*(_QWORD *)(v16 + 24 * v31) & 1) == 0 );
  }
  v18 = 3 * v17;
  strcpy((char *)(v16 + 8 * v18 + 8), "Pool");
  *(_QWORD *)(v16 + 8 * v18) = v9;
  v19 = (unsigned __int8)*(_DWORD *)(v16 + 8 * v18 + 12) | 0x20000;
  *(_QWORD *)(v16 + 8 * v18 + 16) = v7;
  *(_DWORD *)(v16 + 8 * v18 + 12) = v19;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  _InterlockedIncrement(&dword_14039EA80);
  _InterlockedExchangeAdd64(&qword_14039EA90, (int)(v7 >> 12));
  _InterlockedExchangeAdd64(&qword_14039EA98, v7);
  if ( v38 )
  {
    *(_QWORD *)(qword_1403884B8 + 8128) = v9;
    *(_QWORD *)(qword_1403884B8 + 8136) = v5;
  }
  else
  {
    PoolBigPageTable = v9;
    PoolBigPageTableSize = v5;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 512, 1819242320, v9, v7);
  v20 = PoolTrackTableMask;
  v21 = PoolTrackTableSize;
  Number = KeGetPcr()->Prcb.Number;
  v23 = PoolTrackTableMask & 0x40DEDA5;
  v35 = PoolTrackTableMask;
  v36 = PoolTrackTableSize;
  v24 = PoolTrackTableMask & 0x40DEDA5;
  v39 = PoolTrackTableMask & 0x40DEDA5;
  v25 = (int *)*(&ExPoolTagTables + Number);
  v34 = v25;
  while ( 1 )
  {
    v26 = 14LL * v23;
    v27 = v25[v26];
    if ( v27 == 1819242320 )
      break;
    if ( v27 )
    {
LABEL_28:
      v23 = v20 & (v23 + 1);
      if ( v23 == v24 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v7, 0x200u);
        goto LABEL_35;
      }
    }
    else
    {
      v32 = *(_DWORD *)(v26 * 4 + PoolTrackTable);
      if ( v32 )
      {
        v25[v26] = v32;
      }
      else
      {
        if ( v23 == v21 - 1 )
          goto LABEL_28;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v26 * 4 + PoolTrackTable) )
        {
          *(_DWORD *)(v26 * 4 + PoolTrackTable) = 1819242320;
          v34[v26] = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v25 = v34;
        v20 = v35;
        v24 = v39;
        v21 = v36;
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v25[v26 + 4]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v25[v26 + 2], v7);
LABEL_35:
  v29 = v41;
  if ( v41 )
    *v41 = v33;
  else
    v29 = v33;
  result = 1LL;
  *a3 = v29;
  return result;
}
