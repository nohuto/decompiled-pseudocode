/*
 * XREFs of MiFreeContiguousPages @ 0x1400C98C4
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400BE350 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1400C9790 (MmFreeContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x14074B3E0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14074B900 (MiRemoveMdlPages.c)
 *     MiUnmapLargeDriver @ 0x140755F38 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
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
      v5 += MiFreeLargePageMemory(v4, 1LL);
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
      MiReturnResidentAvailable(v5, v10);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), v5);
    return MiReturnCommit(a1, v5);
  }
  return result;
}
