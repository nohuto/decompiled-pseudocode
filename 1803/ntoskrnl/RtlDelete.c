/*
 * XREFs of RtlDelete @ 0x140069CC0
 * Callers:
 *     FsRtlFastUnlockSingleShared @ 0x140068480 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140068B20 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400B0904 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1400B0C88 (FsRtlRemoveNodeFromTunnel.c)
 *     RtlDeleteElementGenericTable @ 0x1400B9240 (RtlDeleteElementGenericTable.c)
 *     RtlRemoveUnicodePrefix @ 0x14057B830 (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x1407838B0 (PfxRemovePrefix.c)
 * Callees:
 *     RtlSplay @ 0x140069AC0 (RtlSplay.c)
 *     SwapSplayLinks @ 0x1400B0EA4 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x1400B1000 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v3; // rcx
  PRTL_SPLAY_LINKS v4; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx

  result = Links->LeftChild;
  if ( result )
  {
    if ( Links->RightChild )
    {
      v4 = RtlSubtreePredecessor(Links);
      SwapSplayLinks(v4, Links);
      result = Links->LeftChild;
    }
    if ( result )
      goto LABEL_8;
  }
  result = Links->RightChild;
  if ( result )
  {
LABEL_8:
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      result->Parent = result;
      return result;
    }
    v7 = 8LL;
    if ( Parent->LeftChild != Links )
      v7 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v7) = result;
    v3 = Links->Parent;
    result->Parent = Links->Parent;
    return RtlSplay(v3);
  }
  v3 = Links->Parent;
  if ( Links->Parent != Links )
  {
    v6 = 8LL;
    if ( v3->LeftChild != Links )
      v6 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&v3->Parent + v6) = 0LL;
    return RtlSplay(v3);
  }
  return result;
}
