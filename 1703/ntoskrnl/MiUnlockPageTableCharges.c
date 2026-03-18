/*
 * XREFs of MiUnlockPageTableCharges @ 0x14001769C
 * Callers:
 *     MiUnlockPageTableRange @ 0x140017450 (MiUnlockPageTableRange.c)
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 * Callees:
 *     MiIsLowestPageTablePage @ 0x140017828 (MiIsLowestPageTablePage.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  __int64 result; // rax
  __int64 v4; // rsi
  int IsLowestPageTablePage; // eax
  int v6; // r14d
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx

  v2 = BugCheckParameter2;
  result = 0x2FFFFFFFFD0LL;
  if ( BugCheckParameter2 + 0x28000000030LL < 0x30 )
    return result;
  v4 = 0LL;
  if ( a2 == 2 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage();
    v6 = 3;
  }
  else
  {
    if ( !a2 )
    {
      v6 = 4;
      goto LABEL_5;
    }
    IsLowestPageTablePage = 1;
    v6 = 1;
  }
  if ( !IsLowestPageTablePage )
    goto LABEL_26;
LABEL_5:
  if ( (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_26:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      v2,
      *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v7 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL;
    MiLockPageAtDpcInline(v2);
    result = *(_QWORD *)(v2 + 24);
    v11 = result ^ (result ^ (result - 0x10000)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v2 + 24) = v11;
    v12 = v11 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v12 >= 0x10000 )
      break;
    if ( !v4 )
    {
      result = qword_14036C8F8;
      v4 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v2 + 40) >> 40) & 0x3FFLL));
    }
    ++v7;
    if ( !v12 )
    {
      result = MiPfnShareCountIsZero(v2);
      if ( (_DWORD)result != 3 )
        ++v8;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v6 )
      goto LABEL_9;
    v2 = 48 * v9 - 0x58000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_9:
  if ( v7 )
  {
    result = (__int64)&MiSystemPartition;
    if ( (ULONG_PTR *)v4 == &MiSystemPartition )
      result = MiReturnResidentAvailable(v7, v12, v10);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 5824), v7);
  }
  if ( v8 )
    return MiReturnCommit(v4, v8);
  return result;
}
