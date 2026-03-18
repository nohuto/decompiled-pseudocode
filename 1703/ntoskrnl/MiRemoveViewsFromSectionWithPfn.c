/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x1400A8BD8
 * Callers:
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiReleaseReadListResources @ 0x140515B6C (MiReleaseReadListResources.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x1400A8D90 (MiRemoveViewsFromSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiRemoveViewsFromSectionWithPfn(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // ecx

  v3 = *a1;
  v7 = *(_QWORD *)(*a1 + 64);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 72));
  v9 = MiRemoveViewsFromSection(a1, a2, a3);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  __writecr8(v8);
  v10 = 0;
  if ( v9 )
  {
    LOBYTE(v10) = v7 != 0;
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), v10, v9);
  }
}
