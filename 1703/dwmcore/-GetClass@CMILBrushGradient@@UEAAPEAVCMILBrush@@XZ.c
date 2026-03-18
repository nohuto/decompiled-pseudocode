/*
 * XREFs of ?GetClass@CMILBrushGradient@@UEAAPEAVCMILBrush@@XZ @ 0x180154050
 * Callers:
 *     ?GetClass@CMILBrushLinearGradient@@WHA@EAAPEAVCMILBrush@@XZ @ 0x1800D5770 (-GetClass@CMILBrushLinearGradient@@WHA@EAAPEAVCMILBrush@@XZ.c)
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CMILBrushGradient::GetClass(CMILBrushGradient *this)
{
  return (struct CMILBrush *)(((unsigned __int64)this - 88) & -(__int64)(this != (CMILBrushGradient *)112));
}
