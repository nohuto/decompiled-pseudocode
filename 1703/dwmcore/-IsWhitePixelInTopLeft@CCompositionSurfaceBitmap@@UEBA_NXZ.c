/*
 * XREFs of ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180037980
 * Callers:
 *     ?CompareTo@CCommonRenderingEffect@@UEBA?AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AEBVCRenderingEffect@@0@Z @ 0x1800770C0 (-CompareTo@CCommonRenderingEffect@@UEBA-AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AE.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(CCompositionSurfaceBitmap *this)
{
  return *((_BYTE *)this + 459);
}
