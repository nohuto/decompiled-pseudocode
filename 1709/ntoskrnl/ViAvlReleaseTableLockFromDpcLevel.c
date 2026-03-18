/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x1400F9B40
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1400F91F8 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1400F9A6C (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F9AA4 (VfAvlInsertReservedTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F9B74 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlEnumerateNodes @ 0x1407BDE78 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall ViAvlReleaseTableLockFromDpcLevel(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rcx

  v2 = (volatile LONG *)(a1 + 128);
  if ( (*(_BYTE *)(a2 + 9) & 4) != 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v2);
  *(_BYTE *)(a2 + 9) &= ~2u;
  *(_QWORD *)a2 = 0LL;
}
