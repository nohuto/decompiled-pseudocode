/*
 * XREFs of ?NeedsBounds@CLinearGradientLegacyMilBrush@@UEBA_NPEBULegacyMilBrushContext@@@Z @ 0x18016F750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLinearGradientLegacyMilBrush::NeedsBounds(
        CLinearGradientLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2)
{
  bool result; // al

  if ( *((_DWORD *)this + 31) == 1 )
    return 1;
  result = 0;
  if ( *((_QWORD *)this + 14) )
    return 1;
  return result;
}
