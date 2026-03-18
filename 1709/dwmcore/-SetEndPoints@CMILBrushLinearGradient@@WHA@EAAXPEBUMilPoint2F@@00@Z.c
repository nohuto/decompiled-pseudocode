/*
 * XREFs of ?SetEndPoints@CMILBrushLinearGradient@@WHA@EAAXPEBUMilPoint2F@@00@Z @ 0x1800C6170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushLinearGradient::SetEndPoints(
        __int64 a1,
        const struct MilPoint2F *a2,
        const struct MilPoint2F *a3,
        const struct MilPoint2F *a4)
{
  CMILBrushGradient::SetEndPoints((CMILBrushGradient *)(a1 - 112), a2, a3, a4);
}
