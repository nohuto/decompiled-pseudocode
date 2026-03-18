/*
 * XREFs of ?GetDwm3DRERenderTargetNoRef@CHwTextureRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1801E6740
 * Callers:
 *     ?GetDwm3DRERenderTargetNoRef@CHwDisplayRenderTarget@@WNI@EAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1800DE030 (-GetDwm3DRERenderTargetNoRef@CHwDisplayRenderTarget@@WNI@EAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetDwm3DRERenderTargetNoRef(
        CHwTextureRenderTarget *this,
        struct IDwm3DRECompositor *a2,
        struct IDwm3DRERenderTarget **a3)
{
  return CHwSurfaceRenderTarget::GetDwm3DRERenderTargetNoRef(this, a2, a3);
}
