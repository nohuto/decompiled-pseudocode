/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x1400A4E10
 * Callers:
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiReleaseReadListResources @ 0x1404D1DC8 (MiReleaseReadListResources.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x1400A23B4 (MiRemoveViewsFromSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiRemoveViewsFromSectionWithPfn(__int64 *BugCheckParameter2, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // ecx

  v3 = *BugCheckParameter2;
  v7 = *(_QWORD *)(*BugCheckParameter2 + 64);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v9 = MiRemoveViewsFromSection((ULONG_PTR)BugCheckParameter2, a2, a3);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  __writecr8(v8);
  v10 = 0;
  if ( v9 )
  {
    LOBYTE(v10) = v7 != 0;
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), v10, v9);
  }
}
