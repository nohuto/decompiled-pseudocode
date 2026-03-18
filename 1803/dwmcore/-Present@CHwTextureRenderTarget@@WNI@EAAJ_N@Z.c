/*
 * XREFs of ?Present@CHwTextureRenderTarget@@WNI@EAAJ_N@Z @ 0x1800DE0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Present(
        __int64 a1,
        struct IDwm3DRECompositor *a2,
        struct IDwm3DRERenderTarget **a3)
{
  return CSwRenderTargetGetBounds::GetDwm3DRERenderTargetNoRef((CSwRenderTargetGetBounds *)(a1 - 216), a2, a3);
}
