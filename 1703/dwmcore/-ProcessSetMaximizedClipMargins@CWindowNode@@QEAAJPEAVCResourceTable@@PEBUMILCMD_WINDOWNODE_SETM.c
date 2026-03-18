/*
 * XREFs of ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x180053EC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetMaximizedClipMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS *a3)
{
  if ( *((_DWORD *)this + 220) != *((_DWORD *)a3 + 2)
    || *((_DWORD *)this + 221) != *((_DWORD *)a3 + 3)
    || *((_DWORD *)this + 222) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 223) != *((_DWORD *)a3 + 5) )
  {
    *((_OWORD *)this + 55) = *(_OWORD *)((char *)a3 + 8);
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
  }
  return 0LL;
}
