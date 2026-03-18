/*
 * XREFs of ?GetDwm3DRERenderTargetNoRef@CHwDisplayRenderTarget@@WNI@EAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1800DE030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetDwm3DRERenderTargetNoRef(
        __int64 a1,
        struct IDwm3DRECompositor *a2,
        struct IDwm3DRERenderTarget **a3)
{
  return CHwTextureRenderTarget::GetDwm3DRERenderTargetNoRef((CHwTextureRenderTarget *)(a1 - 216), a2, a3);
}
