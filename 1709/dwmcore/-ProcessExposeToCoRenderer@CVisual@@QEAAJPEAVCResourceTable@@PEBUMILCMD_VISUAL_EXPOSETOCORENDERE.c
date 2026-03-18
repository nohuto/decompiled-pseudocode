/*
 * XREFs of ?ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERER@@@Z @ 0x1801778B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessExposeToCoRenderer(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_EXPOSETOCORENDERER *a3)
{
  return CoRenderHost::ExposeVisual(
           *(CoRenderHost **)(*((_QWORD *)this + 2) + 536LL),
           *((_DWORD *)a3 + 2),
           this,
           *((_DWORD *)a3 + 3) != 0);
}
