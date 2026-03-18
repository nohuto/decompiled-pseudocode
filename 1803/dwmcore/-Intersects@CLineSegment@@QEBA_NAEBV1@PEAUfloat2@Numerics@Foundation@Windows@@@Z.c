/*
 * XREFs of ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C338C
 * Callers:
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C29A4 (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLineSegment::Intersects(
        CLineSegment *this,
        const struct CLineSegment *a2,
        struct Windows::Foundation::Numerics::float2 *a3)
{
  __int64 v3; // xmm1_8
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  float v12; // xmm3_4
  float v13; // xmm5_4
  bool result; // al
  __int64 v15; // [rsp+50h] [rbp+8h]
  __int64 v16; // [rsp+58h] [rbp+10h]

  v3 = *(_QWORD *)this;
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 3);
  *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v15 = *(_QWORD *)a2;
  v6 = *((float *)this + 2);
  v7 = *((float *)this + 3);
  v8 = v5 * v6;
  v9 = v4 * v7;
  v16 = v3;
  *(float *)&v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - v9)) & _xmm);
  result = 0;
  if ( *(float *)&v3 >= 0.0000011920929 )
  {
    v10 = (__m128)(unsigned int)v16;
    v11 = (__m128)HIDWORD(v16);
    v12 = (float)((float)((float)(*(float *)&v15 - *(float *)&v16) * *((float *)a2 + 3))
                - (float)((float)(*((float *)&v15 + 1) - *((float *)&v16 + 1)) * *((float *)a2 + 2)))
        / (float)(v8 - v9);
    v10.m128_f32[0] = *(float *)&v16 + (float)(v6 * v12);
    v11.m128_f32[0] = *((float *)&v16 + 1) + (float)(v7 * v12);
    v13 = (float)((float)((float)(*(float *)&v16 - *(float *)&v15) * v7)
                - (float)((float)(*((float *)&v16 + 1) - *((float *)&v15 + 1)) * v6))
        / (float)(v9 - v8);
    *(_QWORD *)a3 = _mm_unpacklo_ps(v10, v11).m128_u64[0];
    if ( v13 >= 0.0 && v13 <= 1.0 && v12 >= 0.0 && v12 <= 1.0 )
      return 1;
  }
  return result;
}
