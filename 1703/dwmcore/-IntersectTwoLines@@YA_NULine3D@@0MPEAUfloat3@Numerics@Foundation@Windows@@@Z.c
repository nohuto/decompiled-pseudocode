/*
 * XREFs of ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180172C68
 * Callers:
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180172B10 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

bool __fastcall IntersectTwoLines(__int64 *a1, __int64 *a2, float a3, __int64 a4)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm14
  float v6; // xmm12_4
  float v7; // xmm10_4
  float v8; // xmm9_4
  __m128 v9; // xmm7
  float v10; // xmm6_4
  __m128 v11; // xmm4
  float v12; // xmm1_4
  float v13; // xmm13_4
  __m128 v14; // xmm3
  float v15; // xmm15_4
  __m128 v16; // xmm2
  __int64 v18; // [rsp+28h] [rbp-79h]
  float v19; // [rsp+30h] [rbp-71h]
  __int64 v20; // [rsp+38h] [rbp-69h]
  float v21; // [rsp+40h] [rbp-61h]
  __int64 v22; // [rsp+48h] [rbp-59h]
  float v23; // [rsp+50h] [rbp-51h]
  __int64 v24; // [rsp+58h] [rbp-49h]
  float v25; // [rsp+60h] [rbp-41h]

  v22 = *a1;
  v4 = (__m128)(unsigned int)*a1;
  v18 = *(__int64 *)((char *)a1 + 12);
  v24 = *a2;
  v4.m128_f32[0] = COERCE_FLOAT(*a1) - COERCE_FLOAT(*a2);
  v20 = *(__int64 *)((char *)a2 + 12);
  v5 = (__m128)HIDWORD(v20);
  v23 = *((float *)a1 + 2);
  v19 = *((float *)a1 + 5);
  v25 = *((float *)a2 + 2);
  v21 = *((float *)a2 + 5);
  v6 = (float)(v21 * *((float *)&v18 + 1)) - (float)(v19 * *((float *)&v20 + 1));
  v7 = (float)(v19 * *(float *)&v20) - (float)(v21 * *(float *)&v18);
  v8 = (float)(*(float *)&v18 * *((float *)&v20 + 1)) - (float)(*((float *)&v18 + 1) * *(float *)&v20);
  v9 = v4;
  v4.m128_f32[0] = (float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8);
  v10 = (float)((float)((float)((float)((float)((float)(*(float *)&v22 - *(float *)&v24) * v21)
                                      - (float)((float)(v23 - v25) * *(float *)&v20))
                              * v7)
                      + (float)((float)((float)((float)(v23 - v25) * *((float *)&v20 + 1))
                                      - (float)((float)(*((float *)&v22 + 1) - *((float *)&v24 + 1)) * v21))
                              * v6))
              + (float)((float)((float)((float)(*((float *)&v22 + 1) - *((float *)&v24 + 1)) * *(float *)&v20)
                              - (float)((float)(*(float *)&v22 - *(float *)&v24) * *((float *)&v20 + 1)))
                      * v8))
      / v4.m128_f32[0];
  v9.m128_f32[0] = (float)((float)((float)((float)((float)(v9.m128_f32[0] * v19)
                                                 - (float)((float)(v23 - v25) * *(float *)&v18))
                                         * v7)
                                 + (float)((float)((float)((float)(v23 - v25) * *((float *)&v18 + 1))
                                                 - (float)((float)(*((float *)&v22 + 1) - *((float *)&v24 + 1)) * v19))
                                         * v6))
                         + (float)((float)((float)((float)(*((float *)&v22 + 1) - *((float *)&v24 + 1)) * *(float *)&v18)
                                         - (float)((float)(*(float *)&v22 - *(float *)&v24) * *((float *)&v18 + 1)))
                                 * v8))
                 / v4.m128_f32[0];
  v11 = v9;
  v12 = (float)(*((float *)&v18 + 1) * v10) + COERCE_FLOAT(HIDWORD(*a1));
  v11.m128_f32[0] = (float)(v9.m128_f32[0] * *(float *)&v20) + COERCE_FLOAT(*a2);
  v13 = (float)(*(float *)&v18 * v10) + COERCE_FLOAT(*a1);
  v14 = v11;
  v5.m128_f32[0] = (float)(*((float *)&v20 + 1) * v9.m128_f32[0]) + COERCE_FLOAT(HIDWORD(*a2));
  v15 = (float)(v21 * v9.m128_f32[0]) + v25;
  v16 = v5;
  v14.m128_f32[0] = (float)(v11.m128_f32[0] + v13) * 0.5;
  v16.m128_f32[0] = (float)(v5.m128_f32[0] + v12) * 0.5;
  *(_QWORD *)a4 = _mm_unpacklo_ps(v14, v16).m128_u64[0];
  *(float *)(a4 + 8) = (float)(v15 + (float)((float)(v19 * v10) + v23)) * 0.5;
  return a3 > sqrtf_0(
                (float)((float)((float)(v12 - v5.m128_f32[0]) * (float)(v12 - v5.m128_f32[0]))
                      + (float)((float)(v13 - v11.m128_f32[0]) * (float)(v13 - v11.m128_f32[0])))
              + (float)((float)((float)((float)(v19 * v10) + v23) - v15)
                      * (float)((float)((float)(v19 * v10) + v23) - v15)));
}
