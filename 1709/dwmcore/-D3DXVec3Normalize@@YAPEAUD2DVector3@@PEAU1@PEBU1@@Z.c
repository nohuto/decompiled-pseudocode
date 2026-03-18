/*
 * XREFs of ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800BA844
 * Callers:
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095DE4 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1800BA6C0 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x180172EF4 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x180185E9C (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18018AF70 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18019DA0C (_anonymous_namespace_--TransformAndNormalize.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1801CA000 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x1800BA8FC (WithinEpsilon_0.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 */

struct D2DVector3 *__fastcall D3DXVec3Normalize(struct D2DVector3 *a1, const struct D2DVector3 *a2)
{
  __m128 v2; // xmm8
  __m128 v4; // xmm7
  float v5; // xmm9_4
  float v6; // xmm2_4
  __int64 v7; // rdx
  float v9; // eax
  float v10; // xmm6_4

  v2 = (__m128)*((unsigned int *)a2 + 1);
  v4 = (__m128)*(unsigned int *)a2;
  v5 = *((float *)a2 + 2);
  v6 = (float)((float)(v4.m128_f32[0] * v4.m128_f32[0]) + (float)(v2.m128_f32[0] * v2.m128_f32[0])) + (float)(v5 * v5);
  if ( !(unsigned int)WithinEpsilon_0() )
  {
    if ( v6 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_DWORD *)a1 + 2) = 0;
      return a1;
    }
    v10 = 1.0 / sqrtf_0(v6);
    v4.m128_f32[0] = v4.m128_f32[0] * v10;
    v2.m128_f32[0] = v2.m128_f32[0] * v10;
    *(_QWORD *)a1 = _mm_unpacklo_ps(v4, v2).m128_u64[0];
    v9 = v5 * v10;
    goto LABEL_7;
  }
  if ( a1 != (struct D2DVector3 *)v7 )
  {
    *(_QWORD *)a1 = *(_QWORD *)v7;
    v9 = *(float *)(v7 + 8);
LABEL_7:
    *((float *)a1 + 2) = v9;
  }
  return a1;
}
