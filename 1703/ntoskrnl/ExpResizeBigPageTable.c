/*
 * XREFs of ExpResizeBigPageTable @ 0x140133984
 * Callers:
 *     ExpAddTagForBigPages @ 0x14008CCA0 (ExpAddTagForBigPages.c)
 *     ExpResizeBigPageTable @ 0x140133984 (ExpResizeBigPageTable.c)
 * Callees:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140133984 (ExpResizeBigPageTable.c)
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall ExpResizeBigPageTable(char a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  void *PoolPages; // rax
  ULONG_PTR v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  unsigned int v11; // r9d
  _QWORD *v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // r11
  __int64 Number; // rcx
  __int64 v22; // rbp
  int v23; // r10d
  int *v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 result; // rax
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r8d
  _QWORD *v32; // [rsp+30h] [rbp-58h] BYREF
  int *v33; // [rsp+38h] [rbp-50h]
  __int64 v34; // [rsp+40h] [rbp-48h]
  __int64 v35; // [rsp+48h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  int v37; // [rsp+90h] [rbp+8h]
  int v38; // [rsp+90h] [rbp+8h]
  _QWORD *v40; // [rsp+A8h] [rbp+20h]

  *a3 = 0LL;
  v37 = a1 & 0x20;
  v32 = 0LL;
  if ( (a1 & 0x20) != 0 )
  {
    v3 = *(_QWORD *)(qword_14036C178 + 8136);
    v40 = *(_QWORD **)(qword_14036C178 + 8128);
    v33 = (int *)(qword_14036C178 + 7992);
    if ( !PoolBigPageTableSize )
      return 0LL;
  }
  else
  {
    v3 = PoolBigPageTableSize;
    v40 = (_QWORD *)PoolBigPageTable;
    v33 = &ExpPoolBigEntriesInUse;
  }
  if ( v3 )
  {
    v4 = 2 * v3;
    if ( 2 * v3 <= v3 || v4 > 0xAAAAAAAAAAAAAAALL )
      return 0LL;
    v5 = 48 * v3;
  }
  else
  {
    v4 = 512LL;
    v5 = 12288LL;
  }
  if ( v5 >= v5 + 4095 )
    return 0LL;
  v6 = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  PoolPages = (void *)MiAllocatePoolPages(0x200u, v6);
  v8 = (ULONG_PTR)PoolPages;
  if ( !PoolPages )
    return 0LL;
  memset(PoolPages, 0, v6);
  v9 = (_QWORD *)v8;
  do
  {
    *v9 = 1LL;
    v9 += 3;
  }
  while ( v9 != (_QWORD *)(v8 + 24 * v4) );
  v10 = v40;
  v11 = v4 - 1;
  v12 = &v40[3 * v3];
  if ( v40 != v12 )
  {
    do
    {
      if ( (*v10 & 1) == 0 )
      {
        v13 = v11 & ((40543 * (unsigned int)(*v10 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(*v10 >> 12)) >> 32));
        if ( (*(_BYTE *)(v8 + 24 * v13) & 1) == 0 )
        {
          do
          {
            v26 = 0LL;
            if ( (int)v13 + 1 <= v11 )
              v26 = (unsigned int)(v13 + 1);
            LODWORD(v13) = v26;
          }
          while ( (*(_BYTE *)(v8 + 24 * v26) & 1) == 0 );
        }
        v14 = 3LL * (unsigned int)v13;
        *(_OWORD *)(v8 + 8 * v14) = *(_OWORD *)v10;
        *(_QWORD *)(v8 + 8 * v14 + 16) = v10[2];
      }
      v10 += 3;
    }
    while ( v10 != v12 );
  }
  if ( v33 != &ExpPoolBigEntriesInUse )
  {
    v30 = PoolBigPageTableSize;
    if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize )
    {
LABEL_47:
      v15 = PoolBigPageTable;
      v11 = v30 - 1;
      goto LABEL_18;
    }
    if ( (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v32) )
    {
      v30 = PoolBigPageTableSize;
      goto LABEL_47;
    }
    MiFreePoolPages(v8);
    return 0LL;
  }
  v15 = v8;
LABEL_18:
  v16 = v11 & ((40543 * (unsigned int)(v8 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(v8 >> 12)) >> 32));
  if ( (*(_QWORD *)(v15 + 24 * v16) & 1) == 0 )
  {
    do
    {
      v29 = 0LL;
      if ( (int)v16 + 1 <= v11 )
        v29 = (unsigned int)(v16 + 1);
      v16 = (unsigned int)v29;
    }
    while ( (*(_QWORD *)(v15 + 24 * v29) & 1) == 0 );
  }
  v17 = 3 * v16;
  strcpy((char *)(v15 + 8 * v17 + 8), "Pool");
  *(_QWORD *)(v15 + 8 * v17) = v8;
  v18 = (unsigned __int8)*(_DWORD *)(v15 + 8 * v17 + 12) | 0x20000;
  *(_QWORD *)(v15 + 8 * v17 + 16) = v6;
  *(_DWORD *)(v15 + 8 * v17 + 12) = v18;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  _InterlockedIncrement(&dword_140382D00);
  _InterlockedExchangeAdd64(&qword_140382D10, (int)(v6 >> 12));
  _InterlockedExchangeAdd64(&qword_140382D18, v6);
  if ( v37 )
  {
    *(_QWORD *)(qword_14036C178 + 8128) = v8;
    *(_QWORD *)(qword_14036C178 + 8136) = v4;
  }
  else
  {
    PoolBigPageTable = v8;
    PoolBigPageTableSize = v4;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 512, 1819242320, v8, v6);
  v19 = PoolTrackTableMask;
  v20 = PoolTrackTableSize;
  Number = KeGetPcr()->Prcb.Number;
  v22 = PoolTrackTableMask & 0x40DEDA5;
  v34 = PoolTrackTableMask;
  v35 = PoolTrackTableSize;
  v23 = PoolTrackTableMask & 0x40DEDA5;
  v38 = PoolTrackTableMask & 0x40DEDA5;
  v24 = (int *)*(&ExPoolTagTables + Number);
  v33 = v24;
  while ( 1 )
  {
    v25 = v24[10 * v22];
    if ( v25 == 1819242320 )
      break;
    if ( v25 )
    {
LABEL_28:
      v22 = v19 & (unsigned int)(v22 + 1);
      if ( (_DWORD)v22 == v23 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v6, 0x200u);
        goto LABEL_35;
      }
    }
    else
    {
      v31 = *(_DWORD *)(PoolTrackTable + 40 * v22);
      if ( v31 )
      {
        v24[10 * v22] = v31;
      }
      else
      {
        if ( (unsigned int)v22 == v20 - 1 )
          goto LABEL_28;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 40 * v22) )
        {
          *(_DWORD *)(PoolTrackTable + 40 * v22) = 1819242320;
          v33[10 * v22] = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v24 = v33;
        v19 = v34;
        v23 = v38;
        v20 = v35;
      }
    }
  }
  _InterlockedIncrement(&v24[10 * v22 + 1]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v24[10 * v22 + 4], v6);
LABEL_35:
  v27 = v40;
  if ( v40 )
    *v40 = v32;
  else
    v27 = v32;
  result = 1LL;
  *a3 = v27;
  return result;
}
