/*
 * XREFs of CalculateTBNFrame @ 0x18000E6F8
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000E340 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateTBNFrame(_QWORD *a1, _QWORD *a2, float *a3, __int64 a4, __int64 a5)
{
  unsigned int *v5; // rax
  float *v6; // rax
  __m128 v7; // xmm10
  __m128 v8; // xmm11
  float v9; // xmm12_4
  float v10; // xmm13_4
  float *v11; // rax
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm3_4
  float *v15; // rax
  float v16; // xmm3_4
  __m128 v17; // xmm5
  float v18; // xmm6_4
  float v19; // xmm9_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  float v23; // xmm0_4
  __m128 v24; // xmm3
  __m128 v25; // xmm2
  __m128 v26; // xmm0
  __m128 v27; // xmm7
  __m128 v28; // xmm8
  float v29; // xmm6_4
  float v30; // xmm5_4
  unsigned __int64 v31; // xmm9_8
  float v32; // xmm2_4
  unsigned int v33; // xmm6_4
  __int64 result; // rax
  float v35; // [rsp+10h] [rbp-39h]

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
    v28 = (__m128)LODWORD(FLOAT_1_0);
    v35 = 0.0;
    v27 = 0LL;
    v29 = 0.0;
    v31 = _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  }
  else
  {
    v28 = v7;
    v28.m128_f32[0] = v7.m128_f32[0] * v18;
    v27 = v8;
    v27.m128_f32[0] = (float)(v8.m128_f32[0] * v18) - (float)(v16 * v13);
    v22 = (float)(v18 * 0.0) - (float)(v16 * 0.0);
    v23 = v16 * v12;
    v24 = (__m128)LODWORD(FLOAT_1_0);
    v24.m128_f32[0] = 1.0 / v20;
    v25 = v17;
    v28.m128_f32[0] = v28.m128_f32[0] - v23;
    v26 = v24;
    v27.m128_f32[0] = v27.m128_f32[0] * v24.m128_f32[0];
    v28.m128_f32[0] = v28.m128_f32[0] * v24.m128_f32[0];
    v29 = v22 * v24.m128_f32[0];
    v26.m128_f32[0] = v24.m128_f32[0] * (float)((float)(v17.m128_f32[0] * v12) - (float)(v7.m128_f32[0] * v19));
    v25.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v13) - (float)(v8.m128_f32[0] * v19)) * v24.m128_f32[0];
    v30 = (float)((float)(v17.m128_f32[0] * 0.0) - (float)(v19 * 0.0)) * v24.m128_f32[0];
    v31 = _mm_unpacklo_ps(v26, v25).m128_u64[0];
    v35 = v30;
  }
  v32 = (float)((float)(a3[1] * v27.m128_f32[0]) + (float)(*a3 * v28.m128_f32[0])) + (float)(a3[2] * v29);
  v28.m128_f32[0] = v28.m128_f32[0] - (float)(*a3 * v32);
  v27.m128_f32[0] = v27.m128_f32[0] - (float)(a3[1] * v32);
  *(float *)&v33 = v29 - (float)(a3[2] * v32);
  *(_QWORD *)a4 = _mm_unpacklo_ps(v28, v27).m128_u64[0];
  result = v33;
  *(float *)(a4 + 8) = *(float *)&v33;
  *(_QWORD *)a5 = v31;
  *(float *)(a5 + 8) = v35;
  return result;
}
