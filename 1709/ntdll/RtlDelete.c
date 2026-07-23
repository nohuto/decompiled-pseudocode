/*
 * XREFs of RtlDelete @ 0x1800693C0
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x180068EA0 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x18008FDD4 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800E49C0 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x180069508 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x180069650 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v2; // rax
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rdx
  _RTL_SPLAY_LINKS *Parent; // rcx
  __int64 v7; // rdx
  _RTL_SPLAY_LINKS *v8; // rcx

  if ( Links->LeftChild && Links->RightChild )
  {
    v2 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v2, Links);
  }
  result = Links->LeftChild;
  if ( result || (result = Links->RightChild) != 0LL )
  {
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      result->Parent = result;
    }
    else
    {
      v7 = 8LL;
      if ( Parent->LeftChild != Links )
        v7 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v7) = result;
      v8 = Links->Parent;
      result->Parent = Links->Parent;
      return RtlSplay(v8);
    }
  }
  else
  {
    v4 = Links->Parent;
    if ( Links->Parent == Links )
    {
      return 0LL;
    }
    else
    {
      v5 = 8LL;
      if ( v4->LeftChild != Links )
        v5 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&v4->Parent + v5) = 0LL;
      return RtlSplay(v4);
    }
  }
  return result;
}
