/*
 * XREFs of RtlDelete @ 0x140106520
 * Callers:
 *     FsRtlRemoveNodeFromTunnel @ 0x140105118 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1401053A4 (FsRtlPrivateFastUnlockAll.c)
 *     RtlDeleteElementGenericTable @ 0x140105750 (RtlDeleteElementGenericTable.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140106010 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x140106170 (FsRtlFastUnlockSingleShared.c)
 *     RtlRemoveUnicodePrefix @ 0x140565B40 (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x1407201C0 (PfxRemovePrefix.c)
 * Callees:
 *     RtlSplay @ 0x1401065D0 (RtlSplay.c)
 *     SwapSplayLinks @ 0x1401067F8 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x140106940 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rdx
  PRTL_SPLAY_LINKS v6; // rax
  __int64 v7; // rdx

  if ( Links->LeftChild && Links->RightChild )
  {
    v6 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v6, Links);
  }
  result = Links->LeftChild;
  if ( result || (result = Links->RightChild) != 0LL )
  {
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
    v4 = Links->Parent;
    result->Parent = Links->Parent;
    return RtlSplay(v4);
  }
  v4 = Links->Parent;
  if ( Links->Parent != Links )
  {
    v5 = 8LL;
    if ( v4->LeftChild != Links )
      v5 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&v4->Parent + v5) = 0LL;
    return RtlSplay(v4);
  }
  return 0LL;
}
