/*
 * XREFs of ?PlaneLineIntersection@@YA_NUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x1801C35B4
 * Callers:
 *     ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x1801C27A4 (-FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundati.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801C2C28 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall PlaneLineIntersection(__int64 a1, float *a2, float *a3, float *a4, __int64 a5)
{
  __m128 v5; // xmm5
  __m128 v6; // xmm6
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  float v11; // xmm2_4
  __int64 v12; // [rsp+0h] [rbp-50h]
  float v13; // [rsp+8h] [rbp-48h]
  __int64 v14; // [rsp+10h] [rbp-40h]
  float v15; // [rsp+18h] [rbp-38h]
  unsigned __int64 v16; // [rsp+20h] [rbp-30h]

  v12 = *(_QWORD *)a2;
  v14 = *(_QWORD *)a3;
  v16 = *(_QWORD *)a4;
  v5 = (__m128)(unsigned int)*(_QWORD *)a4;
  v13 = a2[2];
  v6 = (__m128)(unsigned int)HIDWORD(*(_QWORD *)a4);
  v15 = a3[2];
  v7 = a4[2];
  v8 = (float)((float)(*(float *)&v16 * *(float *)&v12) + (float)(*((float *)&v16 + 1) * *((float *)&v12 + 1)))
     + (float)(v7 * v13);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v9 < 0.0000011920929 )
    return 0;
  v11 = (float)((float)((float)((float)(COERCE_FLOAT(*(_QWORD *)a1) - *(float *)&v14) * *(float *)&v12)
                      + (float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)a1)) - *((float *)&v14 + 1))
                              * *((float *)&v12 + 1)))
              + (float)((float)(*(float *)(a1 + 8) - v15) * v13))
      / v8;
  v5.m128_f32[0] = (float)(*(float *)&v16 * v11) + *(float *)&v14;
  v6.m128_f32[0] = (float)(*((float *)&v16 + 1) * v11) + *((float *)&v14 + 1);
  *(_QWORD *)a5 = _mm_unpacklo_ps(v5, v6).m128_u64[0];
  *(float *)(a5 + 8) = (float)(v7 * v11) + v15;
  return 1;
}
