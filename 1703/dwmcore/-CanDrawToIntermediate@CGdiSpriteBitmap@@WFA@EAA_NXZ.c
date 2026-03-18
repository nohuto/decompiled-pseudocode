/*
 * XREFs of ?CanDrawToIntermediate@CGdiSpriteBitmap@@WFA@EAA_NXZ @ 0x1800D5C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGdiSpriteBitmap::CanDrawToIntermediate(
        __int64 a1,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  return CCompositionLight::IsValid((CCompositionLight *)(a1 - 80), a2, a3);
}
