/*
 * XREFs of ?ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDWINDOW@@@Z @ 0x1800933CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetLayeredWindow(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETLAYEREDWINDOW *a3)
{
  char v3; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 921) != v3 )
  {
    *((_BYTE *)this + 921) = v3;
    CVisual::PropagateFlags((__int64)this, 4u, 0);
  }
  return 0LL;
}
