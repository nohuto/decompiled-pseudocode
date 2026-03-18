/*
 * XREFs of MiUpdateControlAreaCommitCount @ 0x14001FCD0
 * Callers:
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiChargeSegmentCommit @ 0x140460540 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400148C4 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiUpdateControlAreaCommitCount(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx

  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 6472LL),
    a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 16LL) += a2;
    return 0LL;
  }
  else
  {
    v4 = (volatile LONG *)(a1 + 72);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_QWORD *)(a1 + 120) ^= (*(_QWORD *)(a1 + 120) ^ (*(_QWORD *)(a1 + 120) + a2)) & 0xFFFFFFFFFLL;
    v6 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(a1 + 128) + 48) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    __writecr8(v5);
    return v6;
  }
}
