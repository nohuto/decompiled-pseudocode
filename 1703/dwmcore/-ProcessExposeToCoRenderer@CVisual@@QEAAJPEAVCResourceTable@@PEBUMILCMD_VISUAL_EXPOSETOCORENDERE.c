/*
 * XREFs of ?ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERER@@@Z @ 0x18012B2D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessExposeToCoRenderer(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_EXPOSETOCORENDERER *a3)
{
  return CoRenderHost::ExposeVisual(
           *(CoRenderHost **)(*((_QWORD *)this + 2) + 568LL),
           *((_DWORD *)a3 + 2),
           this,
           *((_DWORD *)a3 + 3) != 0);
}
