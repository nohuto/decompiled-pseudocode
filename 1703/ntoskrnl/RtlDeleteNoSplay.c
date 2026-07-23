/*
 * XREFs of RtlDeleteNoSplay @ 0x14000CE30
 * Callers:
 *     FsRtlRemoveNodeFromTunnel @ 0x14000CCB0 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlUninitializeFileLock @ 0x14003B1D0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140051A14 (FsRtlPrivateInsertSharedLock.c)
 * Callees:
 *     SwapSplayLinks @ 0x14004DF08 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x14004E040 (RtlSubtreePredecessor.c)
 */

void __stdcall RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rax
  _RTL_SPLAY_LINKS *v7; // rax
  _RTL_SPLAY_LINKS **p_RightChild; // rdx
  _RTL_SPLAY_LINKS *v9; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v9 = RtlSubtreePredecessor(Links);
    if ( Links->Parent == Links )
      *Root = v9;
    SwapSplayLinks(v9, Links);
  }
  LeftChild = Links->LeftChild;
  if ( !LeftChild )
  {
    if ( !Links->RightChild )
    {
      Parent = Links->Parent;
      if ( Links->Parent == Links )
      {
        *Root = 0LL;
      }
      else
      {
        p_LeftChild = &Parent->LeftChild;
        if ( Parent->LeftChild != Links )
          p_LeftChild = &Parent->RightChild;
        *p_LeftChild = 0LL;
      }
      return;
    }
    LeftChild = Links->RightChild;
  }
  v7 = Links->Parent;
  if ( Links->Parent == Links )
  {
    LeftChild->Parent = LeftChild;
    *Root = LeftChild;
  }
  else
  {
    p_RightChild = &v7->LeftChild;
    if ( v7->LeftChild != Links )
      p_RightChild = &v7->RightChild;
    *p_RightChild = LeftChild;
    LeftChild->Parent = Links->Parent;
  }
}
