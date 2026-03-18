/*
 * XREFs of ?ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ @ 0x180041E50
 * Callers:
 *     ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18004AFDC (-GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILBrushSolid::ObviouslyHasZeroAlpha(CMILBrushSolid *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 11);
  return v1 < 0.00000011920929 && v1 > -0.00000011920929;
}
