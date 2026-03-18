/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x1400F9BD0
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1400F91F8 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F9AA4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1407BDE78 (VfAvlEnumerateNodes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViAvlRaiseIrqlSafe(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    result = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = result;
  }
  return result;
}
