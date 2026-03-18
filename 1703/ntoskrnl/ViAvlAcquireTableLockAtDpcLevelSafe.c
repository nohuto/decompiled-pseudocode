/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14006E5C4
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14006E620 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1401489E0 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14077BF5C (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14006E6B8 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v4; // al
  volatile LONG *v5; // rcx

  if ( (*(_BYTE *)(a2 + 9) & 2) != 0 && *(_QWORD *)a2 != a1 )
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
  v4 = *(_BYTE *)(a2 + 9);
  if ( (v4 & 2) == 0 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v4 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
