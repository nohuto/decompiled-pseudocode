/*
 * XREFs of ?IsValid@CDesktopRenderTarget@@WGI@EBA_NXZ @ 0x1800DD510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDesktopRenderTarget::IsValid(__int64 a1, const struct CVisualTree *a2, const struct CVisual *a3)
{
  return CCompositionLight::IsValid((CCompositionLight *)(a1 - 104), a2, a3);
}
