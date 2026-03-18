/*
 * XREFs of ?GetTargetSurfaceNoRef@CHwDisplayRenderTarget@@UEAAPEAVCD3DSurface@@XZ @ 0x1800CCA70
 * Callers:
 *     ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WLA@EAAPEAVCD3DSurface@@XZ @ 0x1800D6240 (-GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WLA@EAAPEAVCD3DSurface@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DSurface *__fastcall CHwDisplayRenderTarget::GetTargetSurfaceNoRef(CHwDisplayRenderTarget *this)
{
  return (struct CD3DSurface *)*((_QWORD *)this + 21);
}
