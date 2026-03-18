/*
 * XREFs of MiReleaseControlAreaCharges @ 0x1400A2C24
 * Callers:
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncludeSharedCommit @ 0x1400A26D0 (MiIncludeSharedCommit.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14022DCA0 (MiComputeCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v5; // rsi
  KIRQL v6; // di
  char v7; // cl
  BOOL v8; // r9d
  __int64 v9; // r8
  int v10; // r10d

  if ( !MiIncludeSharedCommit(a1) )
    return 0LL;
  v5 = 0LL;
  if ( v2 == 1 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v7 = *(_BYTE *)(a1 + 62);
  if ( (v7 & 2) != 0 )
  {
    *(_BYTE *)(a1 + 62) = v7 & 0xFD;
    v8 = (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64);
    v9 = a1 + 128;
    if ( a1 != -128 )
    {
      v10 = 0x3FFFFFFF;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v9 + 34) & 1) != 0 )
          goto LABEL_17;
        if ( (v10 & *(_DWORD *)(v9 + 48)) == v10 || v8 )
          break;
LABEL_18:
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
          goto LABEL_19;
      }
      v5 += MiComputeCrossPartitionSectionCharges(v9);
LABEL_17:
      if ( v8 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v6);
  }
  return v5;
}
