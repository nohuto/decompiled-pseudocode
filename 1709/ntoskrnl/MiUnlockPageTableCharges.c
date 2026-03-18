/*
 * XREFs of MiUnlockPageTableCharges @ 0x14010CA64
 * Callers:
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     MiUnlockPageTableRange @ 0x14022A048 (MiUnlockPageTableRange.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiIsLowestPageTablePage @ 0x14010CBEC (MiIsLowestPageTablePage.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableCharges(__int64 BugCheckParameter2, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  int IsLowestPageTablePage; // eax
  int v5; // r14d
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx

  v2 = BugCheckParameter2;
  if ( (unsigned __int64)(BugCheckParameter2 + 0x28000000030LL) < 0x30 )
    return;
  v3 = 0LL;
  if ( a2 == 2 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage();
    v5 = 3;
  }
  else
  {
    if ( !a2 )
    {
      v5 = 4;
      goto LABEL_5;
    }
    IsLowestPageTablePage = 1;
    v5 = 1;
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
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL;
    MiLockPageAtDpcInline(v2);
    v9 = *(_QWORD *)(v2 + 24) ^ (*(_QWORD *)(v2 + 24) ^ (*(_QWORD *)(v2 + 24) - 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v2 + 24) = v9;
    v10 = v9 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v10 >= 0x10000 )
      break;
    if ( !v3 )
      v3 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v2 + 40) >> 40) & 0x3FFLL));
    ++v6;
    if ( !v10 && (unsigned int)MiPfnShareCountIsZero(v2, 0LL) != 3 )
      ++v7;
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v5 )
      goto LABEL_9;
    v2 = 48 * v8 - 0x58000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_9:
  if ( v6 )
  {
    if ( (ULONG_PTR *)v3 == &MiSystemPartition )
      MiReturnResidentAvailable(v6);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 6016), v6);
  }
  if ( v7 )
    MiReturnCommit(v3, v7);
}
