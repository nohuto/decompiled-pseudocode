/*
 * XREFs of ?IsOpaque@CMILBrushSolid@@UEBA_NXZ @ 0x18001DA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMILBrushSolid::IsOpaque(CMILBrushSolid *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 11);
  return v1 < 1.0000001 && v1 > 0.99999988;
}
