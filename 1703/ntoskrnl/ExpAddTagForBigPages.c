/*
 * XREFs of ExpAddTagForBigPages @ 0x14008CCA0
 * Callers:
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x14001C3D0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpResizeBigPageTable @ 0x140133984 (ExpResizeBigPageTable.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  unsigned __int64 v7; // rsi
  int v8; // edi
  int v12; // ebx
  unsigned __int8 CurrentIrql; // r14
  int v14; // ett
  __int64 v15; // rdx
  volatile signed __int32 *v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rcx
  volatile signed __int64 v19; // rtt
  int v20; // r8d
  __int64 v22; // rdx
  int v23; // ebx
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  void *v27; // rcx
  void *v28; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  int v31; // [rsp+68h] [rbp+10h]

  v31 = a2;
  v6 = 0;
  v7 = a1 >> 12;
  v8 = a4 & 0x20;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = (40543 * v7) ^ ((40543 * (unsigned __int64)(unsigned int)v7) >> 32);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
      }
      else
      {
        _m_prefetchw(&ExpLargePoolTableLock);
        v14 = ExpLargePoolTableLock & 0x7FFFFFFF;
        if ( v14 != _InterlockedCompareExchange(
                      &ExpLargePoolTableLock,
                      (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                      ExpLargePoolTableLock & 0x7FFFFFFF) )
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
      }
      if ( v8 )
      {
        v15 = *(_QWORD *)(qword_14036C178 + 8128);
        v16 = (volatile signed __int32 *)(qword_14036C178 + 7992);
        v17 = *(_QWORD *)(qword_14036C178 + 8136);
      }
      else
      {
        v15 = PoolBigPageTable;
        v16 = &ExpPoolBigEntriesInUse;
        v17 = PoolBigPageTableSize;
      }
      if ( v15 && *v16 != v17 )
      {
        v18 = v15 + 24LL * (v12 & (unsigned int)(v17 - 1));
        while ( 1 )
        {
          if ( (*(_QWORD *)v18 & 1) != 0 )
          {
            v19 = *(_QWORD *)v18;
            if ( v19 == _InterlockedCompareExchange64((volatile signed __int64 *)v18, a1, *(_QWORD *)v18) )
              break;
          }
          ++v6;
          v18 += 24LL;
          if ( v18 >= v15 + 24 * v17 )
            v18 = v15;
          if ( v18 == v15 + 24LL * (v12 & (unsigned int)(v17 - 1)) )
            goto LABEL_20;
        }
        v20 = a5;
        *(_DWORD *)(v18 + 8) = v31;
        *(_BYTE *)(v18 + 12) = a6;
        *(_QWORD *)(v18 + 16) = a3;
        *(_DWORD *)(v18 + 12) = (unsigned __int8)*(_DWORD *)(v18 + 12) | ((a4 & 0xFFF | (v20 << 12)) << 8);
        _InterlockedIncrement(v16);
        if ( v6 < 0x10 || *v16 <= (unsigned int)(v17 >> 2) )
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
            ExpResizeBigPageTable(a4, v25, &P);
            ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
            __writecr8(CurrentIrql);
            v26 = P;
            if ( P )
            {
              do
              {
                v27 = v26;
                v26 = (_QWORD *)*v26;
                ExFreePoolWithTag(v27, 0);
              }
              while ( v26 );
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
    v23 = ExpResizeBigPageTable(a4, v22, &P);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(CurrentIrql);
    if ( !v23 )
      break;
    v24 = P;
    if ( P )
    {
      do
      {
        v28 = v24;
        v24 = (_QWORD *)*v24;
        ExFreePoolWithTag(v28, 0);
      }
      while ( v24 );
      P = 0LL;
    }
  }
  ++ExpBigTableExpansionFailed;
  return 0LL;
}
