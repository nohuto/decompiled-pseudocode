/*
 * XREFs of MiDeleteCachedSegment @ 0x14024EC98
 * Callers:
 *     MiDereferenceSegmentThread @ 0x14017CE40 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x14024FD3C (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiUnlinkUnusedControlArea @ 0x1400E4144 (MiUnlinkUnusedControlArea.c)
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDestroySection @ 0x14015E144 (MiDestroySection.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiDeleteCachedSegment(__int64 a1)
{
  volatile LONG *v1; // r12
  unsigned int v3; // ebx
  __int64 v4; // rsi
  volatile signed __int32 **v5; // r14
  KIRQL v6; // bp
  volatile signed __int32 *i; // rdi
  __int64 inserted; // rdi

  v1 = (volatile LONG *)(a1 + 1280);
  v3 = 1;
  v4 = 1LL;
  v5 = (volatile signed __int32 **)(a1 + 1632);
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
    if ( inserted )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
    return 0;
  }
  if ( ((*(_DWORD *)(v4 + 56) >> 5) & 1) != 0 || (unsigned int)MiFlushControlArea((PVOID)v4) == 1 )
    MiDestroySection(v4, v6, 0LL);
  else
    return 0;
  return v3;
}
