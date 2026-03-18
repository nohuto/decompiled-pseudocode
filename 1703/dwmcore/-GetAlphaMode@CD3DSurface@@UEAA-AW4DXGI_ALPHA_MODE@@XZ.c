/*
 * XREFs of ?GetAlphaMode@CD3DSurface@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180072A50
 * Callers:
 *     ?GetAlphaMode@CHwDisplayRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180039D60 (-GetAlphaMode@CHwDisplayRenderTarget@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::GetAlphaMode(CD3DSurface *this)
{
  return *((unsigned int *)this + 16);
}
