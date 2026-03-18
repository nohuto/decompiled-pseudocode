/*
 * XREFs of MiRemoveFaultNode @ 0x14010FE68
 * Callers:
 *     MiLargePageFreeToZero @ 0x14010FA20 (MiLargePageFreeToZero.c)
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 69) )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140388A98);
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140388AA0, a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388A98);
  }
}
