/*
 * XREFs of ViAvlTableIndex @ 0x1400F9BF4
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1400F91F8 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F9AA4 (VfAvlInsertReservedTreeNode.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViAvlTableIndex(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v3 == 1 )
    return 0LL;
  else
    return (a2 >> 12) % v3;
}
