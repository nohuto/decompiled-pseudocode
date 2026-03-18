/*
 * XREFs of MiFlushRelease @ 0x1400A8C60
 * Callers:
 *     MmTrimSection @ 0x140014470 (MmTrimSection.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x140216410 (MiFreeOverlappedFlushEntry.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400A8D04 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  KIRQL v9; // r14
  __int64 v10; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v10 = MiDecrementSubsections(a2, a2, 0LL);
    v6 = MiDecrementSubsections(a3, a3, 0LL) + v10;
  }
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v8) = v9;
  result = MiCheckControlArea(a1, v8);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
