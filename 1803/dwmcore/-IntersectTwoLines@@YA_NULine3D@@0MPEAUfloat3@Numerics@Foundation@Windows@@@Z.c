/*
 * XREFs of ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180184BE0
 * Callers:
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180184A88 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 */

bool __fastcall IntersectTwoLines(__int64 *a1, __int64 *a2, float a3, __int64 a4)
{
  float v4; // xmm12_4
  float v5; // xmm10_4
  float v6; // xmm11_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm8_4
  __m128 v10; // xmm6
  float v11; // xmm2_4
  __m128 v12; // xmm5
  float v13; // xmm0_4
  __m128 v14; // xmm3
  float v15; // xmm7_4
  __m128 v16; // xmm2
  __int64 v18; // [rsp+28h] [rbp-69h]
  float v19; // [rsp+30h] [rbp-61h]
  __int64 v20; // [rsp+38h] [rbp-59h]
  float v21; // [rsp+40h] [rbp-51h]
  __int64 v22; // [rsp+48h] [rbp-49h]
  float v23; // [rsp+50h] [rbp-41h]
  __int64 v24; // [rsp+58h] [rbp-39h]
  float v25; // [rsp+60h] [rbp-31h]
  float v26; // [rsp+F8h] [rbp+67h]
  float v27; // [rsp+100h] [rbp+6Fh]

  v22 = *a1;
  v20 = *(__int64 *)((char *)a1 + 12);
  v24 = *a2;
  v18 = *(__int64 *)((char *)a2 + 12);
  v23 = *((float *)a1 + 2);
  v21 = *((float *)a1 + 5);
  v25 = *((float *)a2 + 2);
  v19 = *((float *)a2 + 5);
  v4 = (float)(v19 * *((float *)&v20 + 1)) - (float)(v21 * *((float *)&v18 + 1));
  v5 = (float)(v21 * *(float *)&v18) - (float)(v19 * *(float *)&v20);
  v6 = (float)(*(float *)&v20 * *((float *)&v18 + 1)) - (float)(*((float *)&v20 + 1) * *(float *)&v18);
  v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  v8 = (float)((float)((float)((float)((float)((float)(*(float *)&v22 - *(float *)&v24) * v19)
                                     - (float)((float)(v23 - v25) * *(float *)&v18))
                             * v5)
                     + (float)((float)((float)((float)(v23 - v25) * *((float *)&v18 + 1))
                                     - (float)((float)(*((float *)&v22 + 1) - *((float *)&v24 + 1)) * v19))
                             * v4))
             + (float)((float)((float)((float)(*((float *)&v22 + 1) - *((float *)&v24 + 1)) * *(float *)&v18)
                             - (float)((float)(*(float *)&v22 - *(float *)&v24) * *((float *)&v18 + 1)))
                     * v6))
     / v7;
  v9 = (float)(*((float *)&v20 + 1) * v8) + COERCE_FLOAT(HIDWORD(*a1));
  v26 = COERCE_FLOAT(*a1) + (float)(*(float *)&v20 * v8);
  v27 = v23 + (float)(v21 * v8);
  v10 = (__m128)(unsigned int)*a2;
  v11 = (float)((float)((float)((float)((float)((float)(v23 - v25) * *((float *)&v20 + 1))
                                      - (float)((float)(*((float *)&v22 + 1) - *((float *)&v24 + 1)) * v21))
                              * v4)
                      + (float)((float)((float)(v21 * (float)(COERCE_FLOAT(*a1) - COERCE_FLOAT(*a2)))
                                      - (float)(*(float *)&v20 * (float)(v23 - v25)))
                              * v5))
              + (float)((float)((float)((float)(*((float *)&v22 + 1) - *((float *)&v24 + 1)) * *(float *)&v20)
                              - (float)((float)(*(float *)&v22 - *(float *)&v24) * *((float *)&v20 + 1)))
                      * v6))
      / v7;
  v12 = (__m128)HIDWORD(*a2);
  v10.m128_f32[0] = COERCE_FLOAT(*a2) + (float)(v11 * *(float *)&v18);
  v12.m128_f32[0] = COERCE_FLOAT(HIDWORD(*a2)) + (float)(*((float *)&v18 + 1) * v11);
  v13 = (float)(v25 + (float)(v19 * v11)) + v27;
  v14 = v10;
  v15 = v27 - (float)(v25 + (float)(v19 * v11));
  v16 = v12;
  v14.m128_f32[0] = (float)(v10.m128_f32[0] + v26) * 0.5;
  v16.m128_f32[0] = (float)(v12.m128_f32[0] + v9) * 0.5;
  *(_QWORD *)a4 = _mm_unpacklo_ps(v14, v16).m128_u64[0];
  *(float *)(a4 + 8) = v13 * 0.5;
  return a3 > sqrtf_0(
                (float)((float)((float)(v9 - v12.m128_f32[0]) * (float)(v9 - v12.m128_f32[0]))
                      + (float)((float)(v26 - v10.m128_f32[0]) * (float)(v26 - v10.m128_f32[0])))
              + (float)(v15 * v15));
}
