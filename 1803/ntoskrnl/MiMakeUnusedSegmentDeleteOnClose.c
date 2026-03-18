/*
 * XREFs of MiMakeUnusedSegmentDeleteOnClose @ 0x14024F768
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x14026EF90 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkUnusedControlArea @ 0x1400E4144 (MiUnlinkUnusedControlArea.c)
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiMakeUnusedSegmentDeleteOnClose(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v3; // al
  _QWORD *v4; // r14
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  volatile LONG *v8; // r15
  __int64 inserted; // rbp

  v1 = (volatile LONG *)(a1 + 1280);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v4 = (_QWORD *)(a1 + 1632);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    v6 = v3;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = (__int64)(v5 - 1);
    v8 = (volatile LONG *)(v5 + 8);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8) )
    {
      MiUnlinkUnusedControlArea(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      inserted = MiInsertUnusedSegment(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      __writecr8(v6);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      __writecr8(v6);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  __writecr8(v6);
}
