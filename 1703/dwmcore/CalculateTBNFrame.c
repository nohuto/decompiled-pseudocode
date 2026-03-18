/*
 * XREFs of CalculateTBNFrame @ 0x18015ED80
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015EFB0 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateTBNFrame(_QWORD *a1, _QWORD *a2, float *a3, __int64 a4, __int64 a5)
{
  unsigned int *v5; // rax
  unsigned int *v6; // rax
  __m128 v7; // xmm12
  __m128 v8; // xmm13
  float *v9; // rax
  __m128 v10; // xmm10
  __m128 v11; // xmm11
  float v12; // xmm4_4
  float v13; // xmm5_4
  float *v14; // rax
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm9_4
  float v18; // xmm6_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  __m128 v21; // xmm8
  __m128 v22; // xmm7
  float v23; // xmm6_4
  unsigned __int64 v24; // xmm9_8
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm2_4
  unsigned int v28; // xmm6_4
  __int64 result; // rax
  float v30; // [rsp+10h] [rbp-39h]

  v5 = (unsigned int *)a1[1];
  v7 = (__m128)*v5;
  v8 = (__m128)v5[1];
  v6 = (unsigned int *)a1[2];
  v7.m128_f32[0] = v7.m128_f32[0] - *(float *)*a1;
  v8.m128_f32[0] = v8.m128_f32[0] - *(float *)(*a1 + 4LL);
  v10 = (__m128)*v6;
  v11 = (__m128)v6[1];
  v9 = (float *)a2[1];
  v10.m128_f32[0] = v10.m128_f32[0] - *(float *)*a1;
  v11.m128_f32[0] = v11.m128_f32[0] - *(float *)(*a1 + 4LL);
  v12 = *v9;
  v13 = v9[1];
  v14 = (float *)a2[2];
  v15 = v12 - *(float *)*a2;
  v16 = v13 - *(float *)(*a2 + 4LL);
  v17 = *v14 - *(float *)*a2;
  v18 = v14[1] - *(float *)(*a2 + 4LL);
  v19 = (float)(v18 * v15) - (float)(v17 * v16);
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm);
  if ( v20 >= 0.0000011920929 )
  {
    v21 = v7;
    v22 = v8;
    v21.m128_f32[0] = (float)(v7.m128_f32[0] * v18) - (float)(v10.m128_f32[0] * v16);
    v25 = v11.m128_f32[0] * v16;
    v10.m128_f32[0] = (float)((float)(v10.m128_f32[0] * v15) - (float)(v7.m128_f32[0] * v17)) * (float)(1.0 / v19);
    v11.m128_f32[0] = (float)((float)(v11.m128_f32[0] * v15) - (float)(v8.m128_f32[0] * v17)) * (float)(1.0 / v19);
    v26 = (float)((float)(v15 * 0.0) - (float)(v17 * 0.0)) * (float)(1.0 / v19);
    v24 = _mm_unpacklo_ps(v10, v11).m128_u64[0];
    v21.m128_f32[0] = v21.m128_f32[0] * (float)(1.0 / v19);
    v30 = v26;
    v22.m128_f32[0] = (float)((float)(v8.m128_f32[0] * v18) - v25) * (float)(1.0 / v19);
    v23 = (float)((float)(v18 * 0.0) - (float)(v16 * 0.0)) * (float)(1.0 / v19);
  }
  else
  {
    v21 = (__m128)LODWORD(FLOAT_1_0);
    v30 = 0.0;
    v22 = 0LL;
    v23 = 0.0;
    v24 = _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  }
  v27 = (float)((float)(*a3 * v21.m128_f32[0]) + (float)(a3[1] * v22.m128_f32[0])) + (float)(a3[2] * v23);
  v21.m128_f32[0] = v21.m128_f32[0] - (float)(*a3 * v27);
  v22.m128_f32[0] = v22.m128_f32[0] - (float)(a3[1] * v27);
  *(float *)&v28 = v23 - (float)(a3[2] * v27);
  *(_QWORD *)a4 = _mm_unpacklo_ps(v21, v22).m128_u64[0];
  result = v28;
  *(float *)(a4 + 8) = *(float *)&v28;
  *(_QWORD *)a5 = v24;
  *(float *)(a5 + 8) = v30;
  return result;
}
