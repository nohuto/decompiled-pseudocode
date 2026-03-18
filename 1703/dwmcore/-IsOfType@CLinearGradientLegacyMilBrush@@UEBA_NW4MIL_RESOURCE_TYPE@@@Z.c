/*
 * XREFs of ?IsOfType@CLinearGradientLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801542B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CLinearGradientLegacyMilBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 75) & 0xFFFFFFFC) == 0 && a2 != 76;
}
