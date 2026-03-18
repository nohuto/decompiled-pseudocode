/*
 * XREFs of MiUnlockPageTableCharges @ 0x14004ECC4
 * Callers:
 *     MiUnlockWsle @ 0x14004EB38 (MiUnlockWsle.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTableRange @ 0x1400CE14C (MiUnlockPageTableRange.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiIsLowestPageTablePage @ 0x14004EE70 (MiIsLowestPageTablePage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiUnlockPageTableCharges(__int64 BugCheckParameter2, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rsi
  int IsLowestPageTablePage; // eax
  int v6; // r14d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx

  v2 = BugCheckParameter2;
  result = 0x2FFFFFFFFD0LL;
  if ( (unsigned __int64)(BugCheckParameter2 + 0x28000000030LL) < 0x30 )
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
    v10 = result ^ (result ^ (result - 0x10000)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v2 + 24) = v10;
    v11 = v10 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v11 >= 0x10000 )
      break;
    if ( !v4 )
    {
      result = qword_1403CBD88;
      v4 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v2 + 40) >> 40) & 0x3FFLL));
    }
    ++v7;
    if ( !v11 )
    {
      result = MiPfnShareCountIsZero(v2, 0LL);
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
    result = (unsigned __int64)&MiSystemPartition;
    if ( (ULONG_PTR *)v4 == &MiSystemPartition )
      result = MiReturnResidentAvailable(v7, v11);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7104), v7);
  }
  if ( v8 )
    return MiReturnCommit(v4, v8);
  return result;
}
