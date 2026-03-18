/*
 * XREFs of MiDecrementSubsection @ 0x1400833A4
 * Callers:
 *     MiTrimSharedPage @ 0x140081E44 (MiTrimSharedPage.c)
 *     MiTrimSection @ 0x140082194 (MiTrimSection.c)
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsections @ 0x1400E5350 (MiDecrementSubsections.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiDecrementSubsection(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // ecx

  v1 = *BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v4 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  __writecr8(v3);
  v5 = 0;
  if ( v4 )
  {
    LOBYTE(v5) = *(_QWORD *)(v1 + 64) != 0LL;
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF)), v5, v4);
  }
}
