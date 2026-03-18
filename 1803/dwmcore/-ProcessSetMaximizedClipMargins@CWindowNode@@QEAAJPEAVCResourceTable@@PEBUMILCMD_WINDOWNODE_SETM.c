/*
 * XREFs of ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x1800933FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetMaximizedClipMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS *a3)
{
  if ( *((_DWORD *)this + 210) != *((_DWORD *)a3 + 2)
    || *((_DWORD *)this + 211) != *((_DWORD *)a3 + 3)
    || *((_DWORD *)this + 212) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 213) != *((_DWORD *)a3 + 5) )
  {
    *(_OWORD *)((char *)this + 840) = *(_OWORD *)((char *)a3 + 8);
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}
