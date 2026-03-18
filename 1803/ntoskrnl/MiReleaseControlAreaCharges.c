/*
 * XREFs of MiReleaseControlAreaCharges @ 0x1400E6C48
 * Callers:
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiIncludeSharedCommit @ 0x1400E6C10 (MiIncludeSharedCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140267E2C (MiComputeCrossPartitionSectionCharges.c)
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
          goto LABEL_20;
        if ( (v10 & *(_DWORD *)(v9 + 48)) == v10 || v8 )
          break;
LABEL_21:
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
          goto LABEL_6;
      }
      v5 += MiComputeCrossPartitionSectionCharges(v9);
LABEL_20:
      if ( v8 )
        goto LABEL_6;
      goto LABEL_21;
    }
  }
LABEL_6:
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v6);
  }
  return v5;
}
