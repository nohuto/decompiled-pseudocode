/*
 * XREFs of VrpFindExactNamespaceNode @ 0x1406A5D80
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x1406A5394 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x1406A5A34 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x1406A823C (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1406A5DA0 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
