/*
 * XREFs of ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1801CA4B8
 * Callers:
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x180185E9C (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18018AF70 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x1800BA8FC (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     ??KD2DVector4@@QEBA?AU0@M@Z @ 0x1801C952C (--KD2DVector4@@QEBA-AU0@M@Z.c)
 */

struct D2DVector4 *__fastcall D3DXVec4Normalize(struct D2DVector4 *a1, __m128 *a2)
{
  float v4; // xmm3_4
  struct D2DVector4 *v5; // rdx
  __m128 v6; // xmm0
  float v7; // xmm0_4
  __m128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = (float)((float)((float)(a2->m128_f32[0] * a2->m128_f32[0]) + (float)(a2->m128_f32[1] * a2->m128_f32[1]))
             + (float)(a2->m128_f32[2] * a2->m128_f32[2]))
     + (float)(a2->m128_f32[3] * a2->m128_f32[3]);
  if ( !WithinEpsilon_0(v4, 1.0) )
  {
    if ( v4 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_QWORD *)a1 + 1) = 0LL;
      return a1;
    }
    v7 = sqrtf_0(v4);
    v6 = *D2DVector4::operator/(a2, &v9, v7);
    goto LABEL_6;
  }
  if ( a1 != v5 )
  {
    v6 = *(__m128 *)v5;
LABEL_6:
    *(__m128 *)a1 = v6;
  }
  return a1;
}
