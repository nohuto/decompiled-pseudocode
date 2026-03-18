/*
 * XREFs of ?GetTargetSurfaceNoRef@CHwDisplayRenderTarget@@UEAAPEAVCD3DSurface@@XZ @ 0x1800D6C70
 * Callers:
 *     ?GetTargetSurfaceNoRef@CHwDisplayRenderTarget@@WNI@EAAPEAVCD3DSurface@@XZ @ 0x1800DE080 (-GetTargetSurfaceNoRef@CHwDisplayRenderTarget@@WNI@EAAPEAVCD3DSurface@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DSurface *__fastcall CHwDisplayRenderTarget::GetTargetSurfaceNoRef(CHwDisplayRenderTarget *this)
{
  return (struct CD3DSurface *)*((_QWORD *)this + 25);
}
