/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x14067B594
 * Callers:
 *     VrpCreateNamespaceNode @ 0x14067AF54 (VrpCreateNamespaceNode.c)
 *     VrpTranslatePath @ 0x14067D470 (VrpTranslatePath.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14067B5D4 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
