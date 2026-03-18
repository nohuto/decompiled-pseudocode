/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14067B5B4
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x14067AC20 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x14067D3BC (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14067B5D4 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
