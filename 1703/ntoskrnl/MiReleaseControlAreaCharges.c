/*
 * XREFs of MiReleaseControlAreaCharges @ 0x1400990E0
 * Callers:
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncludeSharedCommit @ 0x140099540 (MiIncludeSharedCommit.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140221020 (MiComputeCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v5; // rbp
  int v6; // esi
  KIRQL v7; // di
  char v8; // al
  int v9; // ecx
  __int64 i; // r8
  __int64 v11; // r8

  if ( !(unsigned int)MiIncludeSharedCommit() )
    return 0LL;
  v5 = 0LL;
  v6 = 1;
  if ( v2 == 1 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v8 = *(_BYTE *)(a1 + 62);
  if ( (v8 & 2) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 62) = v8 & 0xFD;
    if ( (v9 & 0x20) == 0 && *(_QWORD *)(a1 + 64) )
      v6 = 0;
    for ( i = a1 + 128; i; i = *(_QWORD *)(v11 + 16) )
    {
      v5 += MiComputeCrossPartitionSectionCharges(i);
      if ( v6 )
        break;
    }
  }
  if ( v7 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v7);
  }
  return v5;
}
