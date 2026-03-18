/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x140048408
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x1404BBF28 (MiReleaseReadListResources.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveViewsFromSection @ 0x1400E503C (MiRemoveViewsFromSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiRemoveViewsFromSectionWithPfn(__int64 *BugCheckParameter2)
{
  __int64 v1; // r15
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // ecx

  v1 = *BugCheckParameter2;
  v3 = *(_QWORD *)(*BugCheckParameter2 + 64);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v5 = MiRemoveViewsFromSection((ULONG_PTR)BugCheckParameter2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  __writecr8(v4);
  v6 = 0;
  if ( v5 )
  {
    LOBYTE(v6) = v3 != 0;
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF)), v6, v5);
  }
}
