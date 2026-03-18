/*
 * XREFs of MiDeleteCachedSegment @ 0x14021083C
 * Callers:
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x1402118EC (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     MiUnlinkUnusedControlArea @ 0x1400A4C8C (MiUnlinkUnusedControlArea.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x14010A894 (MiDestroySection.c)
 *     MiFlushControlArea @ 0x140210EB8 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiDeleteCachedSegment(__int64 a1)
{
  volatile LONG *v1; // r15
  unsigned int v3; // edi
  __int64 v4; // rsi
  volatile signed __int32 **v5; // r14
  KIRQL v6; // bp
  volatile signed __int32 *i; // rbx
  __int64 inserted; // rbx

  v1 = (volatile LONG *)(a1 + 1280);
  v3 = 1;
  v4 = 1LL;
  v5 = (volatile signed __int32 **)(a1 + 1624);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  for ( i = *v5; i != (volatile signed __int32 *)v5; i = *(volatile signed __int32 **)i )
  {
    v4 = (__int64)(i - 2);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      break;
  }
  if ( i == (volatile signed __int32 *)v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    __writecr8(v6);
    return 0;
  }
  MiUnlinkUnusedControlArea(v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( ((*(_DWORD *)(v4 + 56) >> 5) & 1) == 0 && *(_DWORD *)(v4 + 76) && (*(_DWORD *)(a1 + 4) & 1) == 0 )
  {
    inserted = MiInsertUnusedSegment(v4);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v6);
    MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
    return 0;
  }
  if ( ((*(_DWORD *)(v4 + 56) >> 5) & 1) != 0 || (unsigned int)MiFlushControlArea((PVOID)v4) == 1 )
    MiDestroySection(v4, v6, 0LL);
  else
    return 0;
  return v3;
}
