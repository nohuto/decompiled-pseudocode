/*
 * XREFs of MiDecrementSubsection @ 0x14012AE30
 * Callers:
 *     MiTrimSharedPage @ 0x1400F1EDC (MiTrimSharedPage.c)
 *     MiTrimSection @ 0x1400F23D8 (MiTrimSection.c)
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiDecrementSubsection(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // ecx

  v1 = *BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v4 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, (__int64)BugCheckParameter2, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  __writecr8(v3);
  v5 = 0;
  if ( v4 )
  {
    LOBYTE(v5) = *(_QWORD *)(v1 + 64) != 0LL;
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF)), v5, v4);
  }
}
