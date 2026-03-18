/*
 * XREFs of ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18015BA70
 * Callers:
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18015B918 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 */

bool __fastcall IntersectTwoLines(__int64 *a1, __int64 *a2, float a3, __int64 a4)
{
  float v4; // xmm15_4
  float v5; // xmm11_4
  float v6; // xmm3_4
  float v7; // xmm7_4
  float v8; // xmm15_4
  float v9; // xmm3_4
  float v10; // xmm11_4
  __m128 v11; // xmm5
  __m128 v12; // xmm6
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm12_4
  float v16; // xmm4_4
  float v17; // xmm7_4
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  __int64 v21; // [rsp+28h] [rbp-79h]
  float v22; // [rsp+30h] [rbp-71h]
  __int64 v23; // [rsp+38h] [rbp-69h]
  float v24; // [rsp+40h] [rbp-61h]
  __int64 v25; // [rsp+48h] [rbp-59h]
  float v26; // [rsp+50h] [rbp-51h]
  __int64 v27; // [rsp+58h] [rbp-49h]
  float v28; // [rsp+60h] [rbp-41h]
  float v29; // [rsp+108h] [rbp+67h]

  v23 = *a1;
  v27 = *(__int64 *)((char *)a1 + 12);
  v25 = *a2;
  v21 = *(__int64 *)((char *)a2 + 12);
  v24 = *((float *)a1 + 2);
  v28 = *((float *)a1 + 5);
  v26 = *((float *)a2 + 2);
  v22 = *((float *)a2 + 5);
  v4 = (float)(v22 * *((float *)&v27 + 1)) - (float)(v28 * *((float *)&v21 + 1));
  v5 = (float)(*(float *)&v27 * *((float *)&v21 + 1)) - (float)(*((float *)&v27 + 1) * *(float *)&v21);
  v6 = (float)((float)((float)(v28 * *(float *)&v21) - (float)(v22 * *(float *)&v27))
             * (float)((float)(v28 * *(float *)&v21) - (float)(v22 * *(float *)&v27)))
     + (float)(v4 * v4);
  v7 = (float)((float)((float)(v24 - v26) * *((float *)&v21 + 1))
             - (float)((float)(COERCE_FLOAT(HIDWORD(*a1)) - COERCE_FLOAT(HIDWORD(*a2))) * v22))
     * v4;
  v8 = v4
     * (float)((float)((float)(v24 - v26) * *((float *)&v27 + 1))
             - (float)((float)(COERCE_FLOAT(HIDWORD(*a1)) - COERCE_FLOAT(HIDWORD(*a2))) * v28));
  v9 = v6 + (float)(v5 * v5);
  v10 = v5
      * (float)((float)((float)(*((float *)&v23 + 1) - *((float *)&v25 + 1)) * *(float *)&v27)
              - (float)((float)(*(float *)&v23 - *(float *)&v25) * *((float *)&v27 + 1)));
  v11 = (__m128)HIDWORD(*a2);
  v12 = (__m128)(unsigned int)*a2;
  v13 = (float)((float)((float)((float)((float)(v28 * *(float *)&v21) - (float)(v22 * *(float *)&v27))
                              * (float)((float)((float)(COERCE_FLOAT(*a1) - COERCE_FLOAT(*a2)) * v22)
                                      - (float)((float)(v24 - v26) * *(float *)&v21)))
                      + v7)
              + (float)((float)((float)(*(float *)&v27 * *((float *)&v21 + 1))
                              - (float)(*((float *)&v27 + 1) * *(float *)&v21))
                      * (float)((float)((float)(*((float *)&v23 + 1) - *((float *)&v25 + 1)) * *(float *)&v21)
                              - (float)((float)(*(float *)&v23 - *(float *)&v25) * *((float *)&v21 + 1)))))
      / v9;
  v14 = (float)((float)((float)((float)((float)(v28 * *(float *)&v21) - (float)(v22 * *(float *)&v27))
                              * (float)((float)(v28 * (float)(COERCE_FLOAT(*a1) - COERCE_FLOAT(*a2)))
                                      - (float)((float)(v24 - v26) * *(float *)&v27)))
                      + v8)
              + v10)
      / v9;
  v15 = *((float *)&v27 + 1) * v13;
  v16 = v26 + (float)(v22 * v14);
  v29 = COERCE_FLOAT(*a1) + (float)(*(float *)&v27 * v13);
  v17 = v24 + (float)(v28 * v13);
  v12.m128_f32[0] = *(float *)&v25
                  + (float)((float)((float)((float)((float)((float)((float)(v28 * *(float *)&v21)
                                                                  - (float)(v22 * *(float *)&v27))
                                                          * (float)((float)(v28
                                                                          * (float)(COERCE_FLOAT(*a1) - *(float *)&v25))
                                                                  - (float)((float)(v24 - v26) * *(float *)&v27)))
                                                  + v8)
                                          + v10)
                                  / v9)
                          * *(float *)&v21);
  v11.m128_f32[0] = COERCE_FLOAT(HIDWORD(*a2)) + (float)(*((float *)&v21 + 1) * v14);
  v18 = v12;
  v19 = v11;
  v18.m128_f32[0] = (float)(v12.m128_f32[0] + v29) * 0.5;
  v19.m128_f32[0] = (float)(v11.m128_f32[0] + (float)(COERCE_FLOAT(HIDWORD(*a1)) + v15)) * 0.5;
  *(_QWORD *)a4 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
  *(float *)(a4 + 8) = (float)(v17 + v16) * 0.5;
  return a3 > sqrtf_0(
                (float)((float)((float)((float)(*((float *)&v23 + 1) + v15) - v11.m128_f32[0])
                              * (float)((float)(*((float *)&v23 + 1) + v15) - v11.m128_f32[0]))
                      + (float)((float)(v29 - v12.m128_f32[0]) * (float)(v29 - v12.m128_f32[0])))
              + (float)((float)(v17 - v16) * (float)(v17 - v16)));
}
