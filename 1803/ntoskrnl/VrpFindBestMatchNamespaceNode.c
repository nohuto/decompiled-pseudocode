/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x14070A3EC
 * Callers:
 *     VrpCreateNamespaceNode @ 0x140709D4C (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14070A42C (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
