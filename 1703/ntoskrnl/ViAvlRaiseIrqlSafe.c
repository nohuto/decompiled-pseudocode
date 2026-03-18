/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x14006E5A0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14006E620 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1401489E0 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14077BF5C (VfAvlEnumerateNodes.c)
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
