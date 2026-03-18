/*
 * XREFs of ?ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ @ 0x1801A69F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMILBrushBitmap::ObviouslyHasZeroAlpha(CMILBrushBitmap *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 59);
  return v1 < 0.00000011920929 && v1 > -0.00000011920929;
}
