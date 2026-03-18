/*
 * XREFs of ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1802074DC
 * Callers:
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x1801BA7FC (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C08FC (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x18002658C (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 */

struct D2DVector4 *__fastcall D3DXVec4Normalize(struct D2DVector4 *a1, __m128 *a2)
{
  __m128 v4; // xmm6
  float v5; // xmm3_4
  struct D2DVector4 *v6; // rdx

  v4 = (__m128)LODWORD(FLOAT_1_0);
  v5 = (float)((float)((float)(a2->m128_f32[0] * a2->m128_f32[0]) + (float)(a2->m128_f32[1] * a2->m128_f32[1]))
             + (float)(a2->m128_f32[2] * a2->m128_f32[2]))
     + (float)(a2->m128_f32[3] * a2->m128_f32[3]);
  if ( WithinEpsilon_0(v5, 1.0) )
  {
    if ( a1 != v6 )
      *(_OWORD *)a1 = *(_OWORD *)v6;
  }
  else if ( v5 <= 1.1754944e-38 )
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  else
  {
    v4.m128_f32[0] = 1.0 / sqrtf_0(v5);
    *(__m128 *)a1 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *a2);
  }
  return a1;
}
