/*
 * XREFs of MiFlushRelease @ 0x1400A2708
 * Callers:
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     MmTrimSection @ 0x1400F2370 (MmTrimSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x14021FBC0 (MiFreeOverlappedFlushEntry.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  KIRQL v8; // r14
  __int64 v9; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v9 = MiDecrementSubsections(a2, a2, 0);
    v6 = MiDecrementSubsections(a3, a3, 0) + v9;
  }
  --*(_QWORD *)(a1 + 40);
  result = MiCheckControlArea(a1, v8);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
