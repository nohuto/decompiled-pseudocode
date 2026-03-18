/*
 * XREFs of ExpAddTagForBigPages @ 0x1400C1690
 * Callers:
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x140113D90 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpResizeBigPageTable @ 0x140143DE4 (ExpResizeBigPageTable.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // ebp
  int v10; // edi
  int v11; // esi
  unsigned __int8 CurrentIrql; // r14
  int v13; // ett
  __int64 v14; // rdx
  volatile signed __int32 *v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  volatile signed __int64 v18; // rtt
  int v19; // r8d
  __int64 v21; // rdx
  int v22; // ebx
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  _QWORD *v25; // rbx
  void *v26; // rcx
  void *v27; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  int v30; // [rsp+68h] [rbp+10h]

  v30 = a2;
  v6 = 0;
  v10 = (40543 * (a1 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32);
  v11 = a4 & 0x20;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
      }
      else
      {
        _m_prefetchw(&ExpLargePoolTableLock);
        v13 = ExpLargePoolTableLock & 0x7FFFFFFF;
        if ( v13 != _InterlockedCompareExchange(
                      &ExpLargePoolTableLock,
                      (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                      ExpLargePoolTableLock & 0x7FFFFFFF) )
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
      }
      if ( v11 )
      {
        v14 = *(_QWORD *)(qword_1403884B8 + 8128);
        v15 = (volatile signed __int32 *)(qword_1403884B8 + 7992);
        v16 = *(_QWORD *)(qword_1403884B8 + 8136);
      }
      else
      {
        v14 = PoolBigPageTable;
        v15 = &ExpPoolBigEntriesInUse;
        v16 = PoolBigPageTableSize;
      }
      if ( v14 && *v15 != v16 )
      {
        v17 = v14 + 24LL * (v10 & (unsigned int)(v16 - 1));
        while ( 1 )
        {
          if ( (*(_QWORD *)v17 & 1) != 0 )
          {
            v18 = *(_QWORD *)v17;
            if ( v18 == _InterlockedCompareExchange64((volatile signed __int64 *)v17, a1, *(_QWORD *)v17) )
              break;
          }
          ++v6;
          v17 += 24LL;
          if ( v17 >= v14 + 24 * v16 )
            v17 = v14;
          if ( v17 == v14 + 24LL * (v10 & (unsigned int)(v16 - 1)) )
            goto LABEL_20;
        }
        v19 = a5;
        *(_DWORD *)(v17 + 8) = v30;
        *(_BYTE *)(v17 + 12) = a6;
        *(_QWORD *)(v17 + 16) = a3;
        *(_DWORD *)(v17 + 12) = (unsigned __int8)*(_DWORD *)(v17 + 12) | ((a4 & 0xFFF | (v19 << 12)) << 8);
        _InterlockedIncrement(v15);
        if ( v6 < 0x10 || *v15 <= (unsigned int)(v16 >> 2) )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
          }
          else
          {
            _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
            _InterlockedDecrement(&ExpLargePoolTableLock);
          }
        }
        else
        {
          if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) == 1 )
          {
            ExpResizeBigPageTable(a4, v24, &P);
            ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
            __writecr8(CurrentIrql);
            v25 = P;
            if ( P )
            {
              do
              {
                v26 = v25;
                v25 = (_QWORD *)*v25;
                ExFreePoolWithTag(v26, 0);
              }
              while ( v25 );
            }
            return 1LL;
          }
          ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
        }
        __writecr8(CurrentIrql);
        return 1LL;
      }
LABEL_20:
      if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
      __writecr8(CurrentIrql);
    }
    v22 = ExpResizeBigPageTable(a4, v21, &P);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(CurrentIrql);
    if ( !v22 )
      break;
    v23 = P;
    if ( P )
    {
      do
      {
        v27 = v23;
        v23 = (_QWORD *)*v23;
        ExFreePoolWithTag(v27, 0);
      }
      while ( v23 );
      P = 0LL;
    }
  }
  ++ExpBigTableExpansionFailed;
  return 0LL;
}
