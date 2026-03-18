/*
 * XREFs of ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x18009CB44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetMaximizedClipMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS *a3)
{
  if ( *((_DWORD *)this + 226) != *((_DWORD *)a3 + 2)
    || *((_DWORD *)this + 227) != *((_DWORD *)a3 + 3)
    || *((_DWORD *)this + 228) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 229) != *((_DWORD *)a3 + 5) )
  {
    *(_OWORD *)((char *)this + 904) = *(_OWORD *)((char *)a3 + 8);
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}
