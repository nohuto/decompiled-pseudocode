/*
 * XREFs of ?SetLinePoints@CMILBrushLinearGradient@@UEAAXPEBUMilPoint2F@@0@Z @ 0x1800C10A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushLinearGradient::SetLinePoints(
        CMILBrushLinearGradient *this,
        const struct MilPoint2F *a2,
        const struct MilPoint2F *a3)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  __int64 v5; // xmm1_8

  v3 = *(float *)a2 - (float)(*((float *)a3 + 1) - *((float *)a2 + 1));
  v4 = (float)(*(float *)a3 - *(float *)a2) + *((float *)a2 + 1);
  *(_QWORD *)((char *)this - 100) = *(_QWORD *)a2;
  v5 = *(_QWORD *)a3;
  *((float *)this - 21) = v3;
  *(_QWORD *)((char *)this - 92) = v5;
  *((float *)this - 20) = v4;
}
