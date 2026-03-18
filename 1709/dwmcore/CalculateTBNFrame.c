/*
 * XREFs of CalculateTBNFrame @ 0x180074030
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180073C78 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateTBNFrame(_QWORD *a1, _QWORD *a2, float *a3, __int64 a4, __int64 a5)
{
  unsigned int *v5; // rax
  float *v6; // rax
  __m128 v7; // xmm11
  __m128 v8; // xmm12
  float v9; // xmm10_4
  float v10; // xmm13_4
  float *v11; // rax
  float v12; // xmm10_4
  float v13; // xmm13_4
  float v14; // xmm2_4
  float *v15; // rax
  float v16; // xmm2_4
  __m128 v17; // xmm5
  float v18; // xmm6_4
  float v19; // xmm9_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  __m128 v22; // xmm1
  float v23; // xmm6_4
  __m128 v24; // xmm2
  __m128 v25; // xmm0
  __m128 v26; // xmm8
  __m128 v27; // xmm7
  float v28; // xmm5_4
  unsigned __int64 v29; // xmm9_8
  float v30; // xmm6_4
  float v31; // xmm2_4
  unsigned int v32; // xmm6_4
  __int64 result; // rax
  float v34; // [rsp+10h] [rbp-39h]

  v5 = (unsigned int *)a1[1];
  v7 = (__m128)*v5;
  v8 = (__m128)v5[1];
  v6 = (float *)a1[2];
  v7.m128_f32[0] = v7.m128_f32[0] - *(float *)*a1;
  v8.m128_f32[0] = v8.m128_f32[0] - *(float *)(*a1 + 4LL);
  v9 = *v6;
  v10 = v6[1];
  v11 = (float *)a2[1];
  v12 = v9 - *(float *)*a1;
  v13 = v10 - *(float *)(*a1 + 4LL);
  v14 = v11[1];
  v17 = (__m128)*(unsigned int *)v11;
  v15 = (float *)a2[2];
  v16 = v14 - *(float *)(*a2 + 4LL);
  v17.m128_f32[0] = v17.m128_f32[0] - *(float *)*a2;
  v18 = v15[1] - *(float *)(*a2 + 4LL);
  v19 = *v15 - *(float *)*a2;
  v20 = (float)(v18 * v17.m128_f32[0]) - (float)(v16 * v19);
  v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20) & _xmm);
  if ( v21 < 0.0000011920929 )
  {
    v26 = (__m128)LODWORD(FLOAT_1_0);
    v34 = 0.0;
    v27 = 0LL;
    v30 = 0.0;
    v29 = _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  }
  else
  {
    v26 = v7;
    v27 = v8;
    v26.m128_f32[0] = (float)(v7.m128_f32[0] * v18) - (float)(v16 * v12);
    v27.m128_f32[0] = (float)(v8.m128_f32[0] * v18) - (float)(v16 * v13);
    v22 = v17;
    v23 = (float)(v18 * 0.0) - (float)(v16 * 0.0);
    v24 = (__m128)LODWORD(FLOAT_1_0);
    v24.m128_f32[0] = 1.0 / v20;
    v25 = v24;
    v26.m128_f32[0] = v26.m128_f32[0] * (float)(1.0 / v20);
    v25.m128_f32[0] = (float)(1.0 / v20) * (float)((float)(v12 * v17.m128_f32[0]) - (float)(v7.m128_f32[0] * v19));
    v22.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v13) - (float)(v8.m128_f32[0] * v19)) * (float)(1.0 / v20);
    v27.m128_f32[0] = v27.m128_f32[0] * (float)(1.0 / v20);
    v28 = (float)((float)(v17.m128_f32[0] * 0.0) - (float)(v19 * 0.0)) * (float)(1.0 / v20);
    v29 = _mm_unpacklo_ps(v25, v22).m128_u64[0];
    v30 = v23 * (float)(1.0 / v20);
    v34 = v28;
  }
  v31 = (float)((float)(a3[1] * v27.m128_f32[0]) + (float)(*a3 * v26.m128_f32[0])) + (float)(a3[2] * v30);
  v26.m128_f32[0] = v26.m128_f32[0] - (float)(*a3 * v31);
  v27.m128_f32[0] = v27.m128_f32[0] - (float)(a3[1] * v31);
  *(float *)&v32 = v30 - (float)(a3[2] * v31);
  *(_QWORD *)a4 = _mm_unpacklo_ps(v26, v27).m128_u64[0];
  result = v32;
  *(float *)(a4 + 8) = *(float *)&v32;
  *(_QWORD *)a5 = v29;
  *(float *)(a5 + 8) = v34;
  return result;
}
