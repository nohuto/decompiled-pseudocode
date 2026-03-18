/*
 * XREFs of ?GetTargetSurfaceNoRef@CHwDisplayRenderTarget@@UEAAPEAVCD3DSurface@@XZ @ 0x1800C1930
 * Callers:
 *     ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WMA@EAAPEAVCD3DSurface@@XZ @ 0x1800C6A20 (-GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WMA@EAAPEAVCD3DSurface@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DSurface *__fastcall CHwDisplayRenderTarget::GetTargetSurfaceNoRef(CHwDisplayRenderTarget *this)
{
  return (struct CD3DSurface *)*((_QWORD *)this + 23);
}
