/*
 * XREFs of ExpResizeBigPageTable @ 0x14014A110
 * Callers:
 *     ExpAddTagForBigPages @ 0x1400D9480 (ExpAddTagForBigPages.c)
 *     ExpResizeBigPageTable @ 0x14014A110 (ExpResizeBigPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPages @ 0x1400E17DC (ExFreeHeapPages.c)
 *     ExpResizeBigPageTable @ 0x14014A110 (ExpResizeBigPageTable.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall ExpResizeBigPageTable(char a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  void *HeapPages; // rax
  ULONG_PTR v7; // rdi
  __int64 v8; // r9
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  unsigned int v11; // r11d
  _QWORD *v12; // rbx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  int v18; // r9d
  unsigned int v19; // ecx
  __int64 v20; // rdi
  int v21; // r11d
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 result; // rax
  __int64 v29; // rax
  int v30; // edx
  _QWORD *v31; // [rsp+30h] [rbp-48h]
  _QWORD *v32; // [rsp+38h] [rbp-40h] BYREF
  int *v33; // [rsp+40h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-30h] BYREF
  int v35; // [rsp+80h] [rbp+8h]
  unsigned int v36; // [rsp+80h] [rbp+8h]
  int v37; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+98h] [rbp+20h]
  __int64 v40; // [rsp+98h] [rbp+20h]

  *a3 = 0LL;
  v35 = a1 & 0x20;
  v32 = 0LL;
  if ( (a1 & 0x20) != 0 )
  {
    v3 = *(_QWORD *)(qword_1403CB640 + 8256);
    v31 = *(_QWORD **)(qword_1403CB640 + 8248);
    v33 = (int *)(qword_1403CB640 + 8120);
    if ( !PoolBigPageTableSize )
      return 0LL;
  }
  else
  {
    v3 = PoolBigPageTableSize;
    v31 = (_QWORD *)PoolBigPageTable;
    v33 = &ExpPoolBigEntriesInUse;
  }
  if ( v3 )
  {
    v39 = 2 * v3;
    if ( 2 * v3 <= v3 || 2 * v3 > 0xAAAAAAAAAAAAAAALL )
      return 0LL;
    v4 = 48 * v3;
  }
  else
  {
    v39 = 512LL;
    v4 = 12288LL;
  }
  if ( v4 >= v4 + 4095 )
    return 0LL;
  v5 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = (void *)ExAllocateHeapPages(512LL, v5);
  v7 = (ULONG_PTR)HeapPages;
  if ( !HeapPages )
    return 0LL;
  memset(HeapPages, 0, v5);
  v8 = v39;
  v9 = (_QWORD *)v7;
  do
  {
    *v9 = 1LL;
    v9 += 3;
  }
  while ( v9 != (_QWORD *)(v7 + 24 * v39) );
  v10 = v31;
  v11 = v39 - 1;
  v12 = &v31[3 * v3];
  if ( v31 != v12 )
  {
    do
    {
      if ( (*v10 & 1) == 0 )
      {
        v24 = v11 & ((40543 * (unsigned int)(*v10 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(*v10 >> 12)) >> 32));
        if ( (*(_BYTE *)(v7 + 24 * v24) & 1) == 0 )
        {
          do
          {
            v26 = 0LL;
            if ( (int)v24 + 1 <= v11 )
              v26 = (unsigned int)(v24 + 1);
            LODWORD(v24) = v26;
          }
          while ( (*(_BYTE *)(v7 + 24 * v26) & 1) == 0 );
          LODWORD(v24) = v26;
        }
        v25 = 3LL * (unsigned int)v24;
        *(_OWORD *)(v7 + 8 * v25) = *(_OWORD *)v10;
        *(_QWORD *)(v7 + 8 * v25 + 16) = v10[2];
      }
      v10 += 3;
    }
    while ( v10 != v12 );
  }
  if ( v33 != &ExpPoolBigEntriesInUse )
  {
    if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize )
    {
LABEL_41:
      v13 = PoolBigPageTable;
      v11 = PoolBigPageTableSize - 1;
      goto LABEL_16;
    }
    if ( (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v32) )
    {
      v8 = v39;
      goto LABEL_41;
    }
    ExFreeHeapPages(v7);
    return 0LL;
  }
  v13 = v7;
LABEL_16:
  v14 = v11 & ((40543 * (unsigned int)(v7 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(v7 >> 12)) >> 32));
  if ( (*(_QWORD *)(v13 + 24 * v14) & 1) == 0 )
  {
    do
    {
      v29 = 0LL;
      if ( (int)v14 + 1 <= v11 )
        v29 = (unsigned int)(v14 + 1);
      LODWORD(v14) = v29;
    }
    while ( (*(_QWORD *)(v13 + 24 * v29) & 1) == 0 );
  }
  v15 = 3LL * (unsigned int)v14;
  strcpy((char *)(v13 + 8 * v15 + 8), "Pool");
  *(_QWORD *)(v13 + 8 * v15) = v7;
  v16 = (unsigned __int8)*(_DWORD *)(v13 + 8 * v15 + 12) | 0x20000;
  *(_QWORD *)(v13 + 8 * v15 + 16) = v5;
  *(_DWORD *)(v13 + 8 * v15 + 12) = v16;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  _InterlockedIncrement(&dword_1403E28C0);
  _InterlockedExchangeAdd64(&qword_1403E28D0, (int)(v5 >> 12));
  _InterlockedExchangeAdd64(&qword_1403E28D8, v5);
  if ( v35 )
  {
    *(_QWORD *)(qword_1403CB640 + 8248) = v7;
    *(_QWORD *)(qword_1403CB640 + 8256) = v8;
  }
  else
  {
    PoolBigPageTable = v7;
    PoolBigPageTableSize = v8;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v17 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v17 = EtwTracePool(3616, 512, 1819242320, v7, v5);
  LODWORD(v17) = KeGetPcr()->Prcb.Number;
  v18 = PoolTrackTableMask;
  v33 = (int *)PoolTrackTableMask;
  v19 = PoolTrackTableMask & 0x40DEDA5;
  v20 = (__int64)*(&ExPoolTagTables + v17);
  v21 = PoolTrackTableMask & 0x40DEDA5;
  v40 = PoolTrackTableSize;
  v36 = PoolTrackTableMask & 0x40DEDA5;
  v37 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v22 = 56LL * v19;
    v23 = *(_DWORD *)(v22 + v20);
    if ( v23 == 1819242320 )
      break;
    if ( v23 )
    {
LABEL_26:
      v19 = v18 & (v19 + 1);
      v36 = v19;
      if ( v19 == v21 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v5, 0x200u);
        goto LABEL_35;
      }
    }
    else
    {
      v30 = *(_DWORD *)(v22 + PoolTrackTable);
      if ( v30 )
      {
        *(_DWORD *)(v22 + v20) = v30;
      }
      else
      {
        if ( v19 == v40 - 1 )
          goto LABEL_26;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v22 + PoolTrackTable) )
        {
          *(_DWORD *)(v22 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v22 + v20) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v19 = v36;
        v18 = (int)v33;
        v21 = v37;
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v22 + v20 + 16));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + v20 + 8), v5);
LABEL_35:
  v27 = v31;
  if ( v31 )
    *v31 = v32;
  else
    v27 = v32;
  result = 1LL;
  *a3 = v27;
  return result;
}
