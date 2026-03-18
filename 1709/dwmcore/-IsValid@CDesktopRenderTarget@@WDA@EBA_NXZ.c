/*
 * XREFs of ?IsValid@CDesktopRenderTarget@@WDA@EBA_NXZ @ 0x1800C5EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDesktopRenderTarget::IsValid(__int64 a1, const struct CVisualTree *a2, const struct CVisual *a3)
{
  return CCompositionLight::IsValid((CCompositionLight *)(a1 - 48), a2, a3);
}
