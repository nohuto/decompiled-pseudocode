/*
 * XREFs of ?SetColors@CMILBrushLinearGradient@@UEAAJPEAU_D3DCOLORVALUE@@I@Z @ 0x180154440
 * Callers:
 *     ?SetColors@CMILBrushLinearGradient@@WHA@EAAJPEAU_D3DCOLORVALUE@@I@Z @ 0x1800D5900 (-SetColors@CMILBrushLinearGradient@@WHA@EAAJPEAU_D3DCOLORVALUE@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::SetColors(
        CMILBrushLinearGradient *this,
        struct _D3DCOLORVALUE *a2,
        unsigned int a3)
{
  return CMILBrushGradient::SetColors((CMILBrushLinearGradient *)((char *)this - 112), a2, a3);
}
