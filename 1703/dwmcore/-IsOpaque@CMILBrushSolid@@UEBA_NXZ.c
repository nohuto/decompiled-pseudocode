/*
 * XREFs of ?IsOpaque@CMILBrushSolid@@UEBA_NXZ @ 0x180041E20
 * Callers:
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x180041DC0 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILBrushSolid::IsOpaque(CMILBrushSolid *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 11);
  return v1 < 1.0000001 && v1 > 0.99999988;
}
