/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x140161680
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140160AE8 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x140161558 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14082B250 (VfAvlEnumerateNodes.c)
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
