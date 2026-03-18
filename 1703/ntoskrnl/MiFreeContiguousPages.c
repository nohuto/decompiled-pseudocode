/*
 * XREFs of MiFreeContiguousPages @ 0x1401233D4
 * Callers:
 *     MmFreeContiguousMemory @ 0x140123200 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140123DD8 (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14020DC20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1406B44B0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1406B49B8 (MiRemoveMdlPages.c)
 *     MiUnmapLargeDriver @ 0x1406BF148 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 */

unsigned __int64 __fastcall MiFreeContiguousPages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  __int16 v8; // di
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // rcx

  v4 = a2;
  v5 = 0LL;
  v6 = 48 * a2 - 0x58000000000LL;
  do
  {
    if ( (v4 & 0x1FF) != 0 || a3 < 0x200 )
    {
      v7 = (unsigned __int8)MiLockPageInline(v6);
      --*(_WORD *)(v6 + 32);
      *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
      v8 = *(_WORD *)(v6 + 32);
      MiDecrementShareCount(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v7);
      v9 = v5 + 1;
      v10 = 1LL;
      if ( v8 != 1 )
        v9 = v5;
      v5 = v9;
      result = -1LL;
      v12 = 48LL;
    }
    else
    {
      v5 += MiFreeLargePageMemory(v4, 1LL, 0LL);
      v12 = 24576LL;
      result = -512LL;
      v10 = 512LL;
    }
    v6 += v12;
    v4 += v10;
    a3 += result;
  }
  while ( a3 );
  if ( v5 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(v5);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), v5);
    return MiReturnCommit(a1, v5);
  }
  return result;
}
