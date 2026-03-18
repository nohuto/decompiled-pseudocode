/*
 * XREFs of RtlDelete @ 0x14004DBB0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x14000CCB0 (FsRtlRemoveNodeFromTunnel.c)
 *     RtlDeleteElementGenericTable @ 0x140021CF0 (RtlDeleteElementGenericTable.c)
 *     FsRtlFastUnlockSingleShared @ 0x14004E064 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14004F150 (FsRtlFastUnlockSingleExclusive.c)
 *     RtlRemoveUnicodePrefix @ 0x140456D70 (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x1406E83E0 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x14004DF08 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x14004E040 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rax
  _RTL_SPLAY_LINKS *v5; // rcx
  _RTL_SPLAY_LINKS **p_RightChild; // rdx
  PRTL_SPLAY_LINKS v7; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v7 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v7, Links);
  }
  result = Links->LeftChild;
  if ( !result )
  {
    if ( !Links->RightChild )
    {
      Parent = Links->Parent;
      if ( Links->Parent != Links )
      {
        p_LeftChild = &Parent->LeftChild;
        if ( Parent->LeftChild != Links )
          p_LeftChild = &Parent->RightChild;
        *p_LeftChild = 0LL;
        return RtlSplay(Parent);
      }
      return 0LL;
    }
    result = Links->RightChild;
  }
  v5 = Links->Parent;
  if ( Links->Parent != Links )
  {
    p_RightChild = &v5->LeftChild;
    if ( v5->LeftChild != Links )
      p_RightChild = &v5->RightChild;
    *p_RightChild = result;
    Parent = Links->Parent;
    result->Parent = Links->Parent;
    return RtlSplay(Parent);
  }
  result->Parent = result;
  return result;
}
