/*
 * XREFs of FsRtlRemoveNodeFromTunnel @ 0x140105118
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140565A70 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlPruneTunnelCache @ 0x140566074 (FsRtlPruneTunnelCache.c)
 * Callees:
 *     FsRtlFreeTunnelNode @ 0x140105254 (FsRtlFreeTunnelNode.c)
 *     RtlDeleteNoSplay @ 0x1401052A0 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x140106520 (RtlDelete.c)
 */

__int64 __fastcall FsRtlRemoveNodeFromTunnel(__int64 a1, _RTL_SPLAY_LINKS *a2, __int64 a3, _BYTE *a4)
{
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // rdx

  if ( a4 && *a4 )
  {
    *(_QWORD *)(a1 + 56) = RtlDelete(a2);
    *a4 = 0;
  }
  else
  {
    RtlDeleteNoSplay(a2, (PRTL_SPLAY_LINKS *)(a1 + 56));
  }
  Parent = a2[1].Parent;
  if ( Parent->LeftChild != &a2[1] || (LeftChild = a2[1].LeftChild, LeftChild->Parent != &a2[1]) )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --*(_WORD *)(a1 + 80);
  return FsRtlFreeTunnelNode(a2);
}
