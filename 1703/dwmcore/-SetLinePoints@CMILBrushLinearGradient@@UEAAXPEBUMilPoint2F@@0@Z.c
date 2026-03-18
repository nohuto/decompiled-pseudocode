/*
 * XREFs of ?SetLinePoints@CMILBrushLinearGradient@@UEAAXPEBUMilPoint2F@@0@Z @ 0x1800CC3C0
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
  __m128 v3; // xmm3
  __m128 v4; // xmm2

  v3 = (__m128)*(unsigned int *)a2;
  v4 = (__m128)*(unsigned int *)a3;
  v3.m128_f32[0] = v3.m128_f32[0] - (float)(*((float *)a3 + 1) - *((float *)a2 + 1));
  v4.m128_f32[0] = (float)(v4.m128_f32[0] - *(float *)a2) + *((float *)a2 + 1);
  *(_QWORD *)((char *)this - 100) = *(_QWORD *)a2;
  *(_QWORD *)((char *)this - 92) = *(_QWORD *)a3;
  *(_QWORD *)((char *)this - 84) = _mm_unpacklo_ps(v3, v4).m128_u64[0];
}
