/*
 * XREFs of MmGetControlAreaPartition @ 0x1400F2D5C
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x14000DA50 (CcNotifyOfMappedWriteComplete.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1400F2BA0 (CcGetFlushedValidData.c)
 *     CcDeleteSectionsForPartition @ 0x1401E22D8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

ULONG_PTR __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // di
  ULONG_PTR *v3; // rbx

  v2 = ExAcquireSpinLockExclusive(&dword_140388100);
  if ( *(_QWORD *)a1 )
    v3 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  __writecr8(v2);
  return v3[21];
}
