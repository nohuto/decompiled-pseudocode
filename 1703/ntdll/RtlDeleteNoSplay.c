/*
 * XREFs of RtlDeleteNoSplay @ 0x180066000
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800660A8 @ 0x1800660A8 (sub_1800660A8.c)
 *     RtlSubtreePredecessor @ 0x1800661D0 (RtlSubtreePredecessor.c)
 */

void __cdecl RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *v6; // rcx
  _RTL_SPLAY_LINKS *v7; // rax
  _RTL_SPLAY_LINKS **p_LeftChild; // rdx
  _RTL_SPLAY_LINKS **p_RightChild; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v7 = RtlSubtreePredecessor(Links);
    if ( Links->Parent == Links )
      *Root = v7;
    sub_1800660A8(v7, Links);
  }
  LeftChild = Links->LeftChild;
  if ( LeftChild )
    goto LABEL_4;
  if ( Links->RightChild )
  {
    LeftChild = Links->RightChild;
LABEL_4:
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      LeftChild->Parent = LeftChild;
      *Root = LeftChild;
    }
    else
    {
      p_LeftChild = &Parent->LeftChild;
      if ( Parent->LeftChild != Links )
        p_LeftChild = &Parent->RightChild;
      *p_LeftChild = LeftChild;
      LeftChild->Parent = Links->Parent;
    }
    return;
  }
  v6 = Links->Parent;
  if ( Links->Parent == Links )
  {
    *Root = 0LL;
  }
  else
  {
    p_RightChild = &v6->LeftChild;
    if ( v6->LeftChild != Links )
      p_RightChild = &v6->RightChild;
    *p_RightChild = 0LL;
  }
}
