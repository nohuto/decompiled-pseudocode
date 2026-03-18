/*
 * XREFs of ?IsConstantOpaque@CLinearGradientLegacyMilBrush@@UEBA_NXZ @ 0x1801540C0
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
