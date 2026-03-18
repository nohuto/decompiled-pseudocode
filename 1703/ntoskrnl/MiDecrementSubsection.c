/*
 * XREFs of MiDecrementSubsection @ 0x1400151F8
 * Callers:
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsections @ 0x1400A8D04 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiDecrementSubsection(__int64 *a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx

  v1 = *a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 72));
  v4 = MiDecrementSubsections(a1, a1, 0LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  __writecr8(v3);
  v5 = 0LL;
  if ( v4 )
  {
    LOBYTE(v5) = *(_QWORD *)(v1 + 64) != 0LL;
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF)), v5, v4);
  }
}
