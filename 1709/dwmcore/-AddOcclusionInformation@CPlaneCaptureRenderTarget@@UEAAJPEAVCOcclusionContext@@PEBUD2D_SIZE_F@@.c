/*
 * XREFs of ?AddOcclusionInformation@CPlaneCaptureRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180146E60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDstRects@CPlaneCaptureRenderTargetEngine@@QEAAXPEAVCOcclusionContext@@@Z @ 0x180139E10 (-UpdateDstRects@CPlaneCaptureRenderTargetEngine@@QEAAXPEAVCOcclusionContext@@@Z.c)
 */

__int64 __fastcall CPlaneCaptureRenderTarget::AddOcclusionInformation(
        CPlaneCaptureRenderTarget *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  CPlaneCaptureRenderTargetEngine::UpdateDstRects((CPlaneCaptureRenderTarget *)((char *)this + 56), a2);
  return 0LL;
}
