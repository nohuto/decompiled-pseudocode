/*
 * XREFs of ?GetClass@CMILBrushLinearGradient@@WHA@EAAPEAVCMILBrush@@XZ @ 0x1800C6020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CMILBrushLinearGradient::GetClass(__int64 a1)
{
  return CMILBrushGradient::GetClass((CMILBrushGradient *)(a1 - 112));
}
