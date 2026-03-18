/*
 * XREFs of MmGetControlAreaPartition @ 0x14004DD2C
 * Callers:
 *     CcGetFlushedValidData @ 0x14004DC70 (CcGetFlushedValidData.c)
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400D0618 (CcNotifyOfMappedWriteComplete.c)
 *     CcDeleteSectionsForPartition @ 0x140220EE8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

ULONG_PTR __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // di
  ULONG_PTR *v3; // rbx

  v2 = ExAcquireSpinLockExclusive(&dword_1403CB280);
  if ( *(_QWORD *)a1 )
    v3 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
  __writecr8(v2);
  return v3[21];
}
