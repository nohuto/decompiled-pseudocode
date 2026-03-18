/*
 * XREFs of ?IsConstantOpaque@CLinearGradientLegacyMilBrush@@UEBA_NXZ @ 0x180147010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall CLinearGradientLegacyMilBrush::IsConstantOpaque(__int64 this)
{
  return CGradientLegacyMilBrush::IsConstantOpaqueInternal<CLinearGradientLegacyMilBrush const>(this);
}
