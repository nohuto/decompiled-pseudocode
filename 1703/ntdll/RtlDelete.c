/*
 * XREFs of RtlDelete @ 0x180065F60
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x180065A20 (RtlDeleteElementGenericTable.c)
 *     PfxRemovePrefix @ 0x1800E4FE0 (PfxRemovePrefix.c)
 *     sub_180105FE8 @ 0x180105FE8 (sub_180105FE8.c)
 * Callees:
 *     sub_1800660A8 @ 0x1800660A8 (sub_1800660A8.c)
 *     RtlSubtreePredecessor @ 0x1800661D0 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v2; // rax
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rax
  _RTL_SPLAY_LINKS *v6; // rcx
  _RTL_SPLAY_LINKS **p_RightChild; // rdx
  _RTL_SPLAY_LINKS *v8; // rcx

  if ( Links->LeftChild && Links->RightChild )
  {
    v2 = RtlSubtreePredecessor(Links);
    sub_1800660A8(v2, Links);
  }
  result = Links->LeftChild;
  if ( !result )
  {
    if ( !Links->RightChild )
    {
      Parent = Links->Parent;
      if ( Links->Parent == Links )
        return 0LL;
      p_LeftChild = &Parent->LeftChild;
      if ( Parent->LeftChild != Links )
        p_LeftChild = &Parent->RightChild;
      *p_LeftChild = 0LL;
      return RtlSplay(Parent);
    }
    result = Links->RightChild;
  }
  v6 = Links->Parent;
  if ( Links->Parent == Links )
  {
    result->Parent = result;
  }
  else
  {
    p_RightChild = &v6->LeftChild;
    if ( v6->LeftChild != Links )
      p_RightChild = &v6->RightChild;
    *p_RightChild = result;
    v8 = Links->Parent;
    result->Parent = Links->Parent;
    return RtlSplay(v8);
  }
  return result;
}
