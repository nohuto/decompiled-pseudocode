/*
 * XREFs of MiDeleteControlArea @ 0x14004B068
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x14004B034 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x14024F2A4 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 * Callees:
 *     MiDecrementControlAreaCount @ 0x14004B160 (MiDecrementControlAreaCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140268404 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiFreeRelocations @ 0x1405F09CC (MiFreeRelocations.c)
 *     SeReleaseImageValidationContext @ 0x140613E10 (SeReleaseImageValidationContext.c)
 */

void __fastcall MiDeleteControlArea(PVOID P)
{
  int v2; // ecx
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  ULONG_PTR v6; // rsi
  ULONG_PTR v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx

  v2 = *((_DWORD *)P + 14);
  v3 = 0LL;
  v4 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  v5 = v4 + 1288;
  if ( (v2 & 0x20) != 0 )
  {
    v8 = *((_QWORD *)P + 12);
    if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      SeReleaseImageValidationContext(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(P, *(_QWORD *)(v8 + 32));
  }
  else
  {
    if ( (v2 & 0x80u) != 0 )
    {
      v6 = *((_QWORD *)P + 18);
      if ( !v6 )
        goto LABEL_6;
      do
      {
        v7 = *(_QWORD *)(v6 + 16);
        if ( (*(_BYTE *)(v6 + 34) & 1) != 0 && (*(_DWORD *)(v6 + 48) & 0x3FFFFFFF) != 0 )
        {
          MiUpdateSubsectionCrossPartitionRefs(v6, 1LL);
          v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
          v3 += MiDecrementSubsectionViewCount(v6);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
          __writecr8(v9);
          *(_WORD *)(v6 + 34) &= ~1u;
        }
        ExFreePoolWithTag((PVOID)v6, 0);
        v6 = v7;
      }
      while ( v7 );
    }
    else
    {
      v5 = v4 + 1296;
    }
    if ( v3 )
      MiReturnCrossPartitionSectionCharges(v4, 1LL, v3);
  }
LABEL_6:
  MiDecrementControlAreaCount(v4, v5);
  ExFreePoolWithTag(P, 0);
}
