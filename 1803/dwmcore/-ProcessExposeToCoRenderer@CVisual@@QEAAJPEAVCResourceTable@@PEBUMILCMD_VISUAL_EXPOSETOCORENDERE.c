/*
 * XREFs of ?ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERER@@@Z @ 0x1801A8384
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessExposeToCoRenderer(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_EXPOSETOCORENDERER *a3)
{
  return CoRenderHost::ExposeVisual(
           *(CoRenderHost **)(*((_QWORD *)this + 2) + 560LL),
           *((_DWORD *)a3 + 2),
           this,
           *((_DWORD *)a3 + 3) != 0);
}
