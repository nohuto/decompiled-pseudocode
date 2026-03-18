/*
 * XREFs of ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180207440
 * Callers:
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x18019C79C (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x1801BC6E4 (-Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ.c)
 *     _lambda_19d6a25917fce60deaaad219aba787fd_::operator() @ 0x1801CC5D8 (_lambda_19d6a25917fce60deaaad219aba787fd_--operator().c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3TransformNormal(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  __m128 v3; // xmm2
  __m128 v4; // xmm6
  float v5; // xmm5_4

  v3 = (__m128)*(unsigned int *)a2;
  v4 = (__m128)*((unsigned int *)a2 + 1);
  v4.m128_f32[0] = (float)((float)(v4.m128_f32[0] * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                 + (float)(*((float *)a2 + 2) * *((float *)a3 + 8));
  v3.m128_f32[0] = (float)((float)(v3.m128_f32[0] * *((float *)a3 + 1))
                         + (float)(*((float *)a2 + 1) * *((float *)a3 + 5)))
                 + (float)(*((float *)a2 + 2) * *((float *)a3 + 9));
  v5 = (float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 6)))
     + (float)(*((float *)a2 + 2) * *((float *)a3 + 10));
  *(_QWORD *)a1 = _mm_unpacklo_ps(v4, v3).m128_u64[0];
  *((float *)a1 + 2) = v5;
  return a1;
}
