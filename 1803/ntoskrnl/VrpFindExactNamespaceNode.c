/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14070A40C
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x140709A0C (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14070A514 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x14070C8C8 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14070A42C (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
