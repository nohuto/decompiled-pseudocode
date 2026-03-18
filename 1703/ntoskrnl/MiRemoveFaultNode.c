/*
 * XREFs of MiRemoveFaultNode @ 0x1400B3758
 * Callers:
 *     MiLargePageFreeToZero @ 0x1400B3450 (MiLargePageFreeToZero.c)
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 69) )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14036C8A0);
    RtlAvlRemoveNode(&qword_14036C8A8, a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036C8A0);
  }
}
