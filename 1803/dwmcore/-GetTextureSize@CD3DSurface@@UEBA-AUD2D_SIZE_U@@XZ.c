/*
 * XREFs of ?GetTextureSize@CD3DSurface@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180042AF0
 * Callers:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180076F8C (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetTextureSize@CHwTextureRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180078250 (-GetTextureSize@CHwTextureRenderTarget@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEATSurfaceSamplerData@CRenderingTechnique@@@Z @ 0x18008B29C (-ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEATSurfaceSampler.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CD3DSurface::GetTextureSize(CD3DSurface *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 5);
  a2[1] = *((_DWORD *)this + 6);
  return (struct D2D_SIZE_U)a2;
}
