/*
 * XREFs of ?AddOcclusionInformation@CPlaneCaptureRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18016EF50
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDstRects@CPlaneCaptureRenderTargetEngine@@QEAAXPEAVCOcclusionContext@@@Z @ 0x18015C220 (-UpdateDstRects@CPlaneCaptureRenderTargetEngine@@QEAAXPEAVCOcclusionContext@@@Z.c)
 */

__int64 __fastcall CPlaneCaptureRenderTarget::AddOcclusionInformation(
        CPlaneCaptureRenderTargetEngine **this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  CPlaneCaptureRenderTargetEngine::UpdateDstRects(this[7], a2);
  return 0LL;
}
