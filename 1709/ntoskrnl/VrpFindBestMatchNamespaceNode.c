/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x1406A5D60
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1406A56CC (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1406A5DA0 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
