/*
 * XREFs of ?GetTextureSize@CD2DBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180077460
 * Callers:
 *     ?ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEATSurfaceSamplerData@CRenderingTechnique@@@Z @ 0x18008B29C (-ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEATSurfaceSampler.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CD2DBitmap::GetTextureSize(CD2DBitmap *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 16);
  a2[1] = *((_DWORD *)this + 17);
  return (struct D2D_SIZE_U)a2;
}
