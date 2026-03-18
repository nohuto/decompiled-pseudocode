/*
 * XREFs of ?Init@CVisualDepthGeometry@@QEAAXUfloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z @ 0x1801C2EBC
 * Callers:
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801C24D8 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@Ufloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z @ 0x1801C2534 (--0CVisualDepthGeometry@@QEAA@Ufloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801AE514 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x1801C76B8 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 */

float *__fastcall CVisualDepthGeometry::Init(__int64 a1, __int64 a2, CMILMatrix *a3)
{
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r11
  float *v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  float v15; // xmm6_4
  __m128 v16; // xmm2
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  float *v22; // rsi
  __int64 v23; // r11
  float *v24; // r8
  int v25; // r9d
  struct D2D_VECTOR_4F *v26; // r10
  float v27; // xmm2_4
  int v28; // edx
  FLOAT v29; // xmm0_4
  __m128 v30; // xmm2
  __m128 v31; // xmm1
  __m128 v32; // xmm6
  float v33; // xmm5_4
  __m128 v34; // xmm4
  float v35; // xmm7_4
  __m128 v36; // xmm2
  float v37; // xmm8_4
  float v38; // xmm3_4
  __m128 v39; // xmm7
  __m128 v40; // xmm6
  float v41; // xmm8_4
  float v42; // xmm0_4
  float v43; // xmm9_4
  __m128 v44; // xmm3
  __int64 v45; // rcx
  __m128 v46; // xmm2
  float v47; // eax
  float *result; // rax
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm3_4
  float v53; // xmm4_4
  float v54; // xmm5_4
  struct D2D_VECTOR_4F *v55[2]; // [rsp+28h] [rbp-E0h]
  __int128 v56; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v57[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v58; // [rsp+78h] [rbp-90h]
  struct D2D_VECTOR_4F v59; // [rsp+88h] [rbp-80h] BYREF
  struct D2D_VECTOR_4F v60; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_VECTOR_4F v61; // [rsp+A8h] [rbp-60h] BYREF

  v4 = *(float *)&a2;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a2) & _xmm);
  if ( v5 < 0.0000011920929 )
    v4 = FLOAT_1_0;
  v6 = *((float *)&a2 + 1);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&a2 + 1)) & _xmm);
  if ( v7 < 0.0000011920929 )
    v6 = FLOAT_1_0;
  v55[1] = (struct D2D_VECTOR_4F *)0x3F80000000000000LL;
  v57[0] = _xmm;
  v55[0] = (struct D2D_VECTOR_4F *)COERCE_UNSIGNED_INT(v4 + 0.0);
  v8 = *(_OWORD *)v55;
  v55[1] = (struct D2D_VECTOR_4F *)0x3F80000000000000LL;
  *((float *)v55 + 1) = v6 + 0.0;
  v57[1] = v8;
  v9 = *(_OWORD *)v55;
  LODWORD(v55[0]) = 0;
  v55[1] = (struct D2D_VECTOR_4F *)0x3F80000000000000LL;
  v57[2] = v9;
  v10 = 0LL;
  v58 = *(_OWORD *)v55;
  do
  {
    *(FLOAT *)((char *)&v59.x + v10 * 16) = *(FLOAT *)&v57[v10];
    *(FLOAT *)((char *)&v59.y + v10 * 16) = *((FLOAT *)&v57[v10] + 1);
    *(FLOAT *)((char *)&v59.z + v10 * 16) = *((FLOAT *)&v57[v10] + 2);
    *(FLOAT *)((char *)&v59.w + v10 * 16) = *((FLOAT *)&v57[v10] + 3);
    ++v10;
  }
  while ( v10 < 4 );
  CMILMatrix::Transform(a3, (const struct MilPoint4F *)&v59, (struct MilPoint4F *)v57, 4u);
  v12 = (float *)(a1 + 36);
  v13 = 4LL;
  v14 = (_QWORD *)(a1 + 36);
  do
  {
    v15 = *(float *)((char *)v57 + v11 + 12);
    v16 = (__m128)LODWORD(FLOAT_1_0);
    v17 = *(float *)((char *)v57 + v11);
    v18 = *(float *)((char *)v57 + v11 + 4);
    v19 = *(float *)((char *)v57 + v11 + 8);
    v11 += 16LL;
    *(float *)&v56 = v17;
    *((float *)&v56 + 1) = v18;
    *((float *)&v56 + 2) = v19;
    *((float *)&v56 + 3) = v15;
    v16.m128_f32[0] = 1.0 / v15;
    v20 = v16;
    v21 = v16;
    v20.m128_f32[0] = (float)(1.0 / v15) * v17;
    v21.m128_f32[0] = (float)(1.0 / v15) * v18;
    *v14 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
    v14 = (_QWORD *)((char *)v14 + 12);
    *((float *)v14 - 1) = (float)(1.0 / v15) * v19;
    *(__int128 *)((char *)&v58 + v11) = v56;
    --v13;
  }
  while ( v13 );
  v22 = (float *)(a1 + 40);
  v23 = 4LL;
  v24 = (float *)(a1 + 40);
  v25 = 1;
  v26 = (struct D2D_VECTOR_4F *)(a1 + 84);
  do
  {
    v27 = *v24;
    v28 = v25 % 4;
    *(float *)&v56 = *(v24 - 1);
    ++v25;
    v24 += 3;
    *((float *)&v56 + 1) = v27;
    v29 = *(float *)(a1 + 12LL * v28 + 40) - v27;
    *((float *)&v56 + 2) = *(float *)(a1 + 12LL * v28 + 36) - *(float *)&v56;
    *((FLOAT *)&v56 + 3) = v29;
    *v26++ = (struct D2D_VECTOR_4F)v56;
    --v23;
  }
  while ( v23 );
  v30 = (__m128)_mm_loadu_si128((const __m128i *)D2DVectorHelper::CalculatePlane(
                                                   (struct D2D_VECTOR_4F *)&v56,
                                                   (__m128 *)&v59,
                                                   (__m128 *)&v60,
                                                   (__m128 *)&v61));
  LODWORD(v56) = v30.m128_i32[0];
  DWORD1(v56) = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
  HIDWORD(v56) = _mm_shuffle_ps(v30, v30, 255).m128_u32[0];
  DWORD2(v56) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
  *(_OWORD *)(a1 + 172) = v56;
  v31 = (__m128)*(unsigned int *)(a1 + 68);
  v31.m128_f32[0] = v31.m128_f32[0] - *(float *)(a1 + 44);
  v32 = (__m128)*(unsigned int *)(a1 + 60);
  v32.m128_f32[0] = v32.m128_f32[0] - *v12;
  v33 = *(float *)(a1 + 64) - *(float *)(a1 + 40);
  v34 = v31;
  v35 = *(float *)(a1 + 52) - *(float *)(a1 + 40);
  v36 = v32;
  v37 = *(float *)(a1 + 48) - *v12;
  v38 = *(float *)(a1 + 56) - *(float *)(a1 + 44);
  v34.m128_f32[0] = (float)(v31.m128_f32[0] * v35) - (float)(v33 * v38);
  v36.m128_f32[0] = (float)(v32.m128_f32[0] * v38) - (float)(v31.m128_f32[0] * v37);
  *(_QWORD *)(a1 + 160) = _mm_unpacklo_ps(v34, v36).m128_u64[0];
  *(float *)(a1 + 168) = (float)(v33 * v37) - (float)(v32.m128_f32[0] * v35);
  v39 = (__m128)*(unsigned int *)(a1 + 164);
  v40 = (__m128)*(unsigned int *)(a1 + 160);
  v41 = *(float *)(a1 + 168);
  v42 = (float)((float)(v40.m128_f32[0] * v40.m128_f32[0]) + (float)(v39.m128_f32[0] * v39.m128_f32[0]))
      + (float)(v41 * v41);
  if ( v42 > 0.0 )
  {
    v43 = 1.0 / sqrtf_0(v42);
    v40.m128_f32[0] = v40.m128_f32[0] * v43;
    v39.m128_f32[0] = v39.m128_f32[0] * v43;
    *(_QWORD *)(a1 + 160) = _mm_unpacklo_ps(v40, v39).m128_u64[0];
    *(float *)(a1 + 168) = v41 * v43;
  }
  v44 = (__m128)*(unsigned int *)v12;
  v45 = 3LL;
  v46 = (__m128)*(unsigned int *)(a1 + 40);
  v44.m128_f32[0] = (float)((float)((float)(v44.m128_f32[0] + *(float *)(a1 + 48)) + *(float *)(a1 + 60))
                          + *(float *)(a1 + 72))
                  * 0.25;
  v46.m128_f32[0] = (float)((float)((float)(v46.m128_f32[0] + *(float *)(a1 + 52)) + *(float *)(a1 + 64))
                          + *(float *)(a1 + 76))
                  * 0.25;
  v47 = (float)((float)((float)(*(float *)(a1 + 44) + *(float *)(a1 + 56)) + *(float *)(a1 + 68)) + *(float *)(a1 + 80))
      * 0.25;
  *(_QWORD *)(a1 + 148) = _mm_unpacklo_ps(v44, v46).m128_u64[0];
  *(float *)(a1 + 156) = v47;
  result = (float *)(a1 + 52);
  v49 = *v12;
  *(float *)(a1 + 8) = *v12;
  v50 = *v12;
  *(float *)(a1 + 12) = *v12;
  v51 = *v22;
  *(float *)(a1 + 16) = *v22;
  v52 = *v22;
  *(float *)(a1 + 20) = *v22;
  v53 = *(float *)(a1 + 44);
  *(float *)(a1 + 24) = v53;
  v54 = *(float *)(a1 + 44);
  *(float *)(a1 + 28) = v54;
  do
  {
    v49 = fminf(v49, *(result - 1));
    *(float *)(a1 + 8) = v49;
    v50 = fmaxf(v50, *(result - 1));
    *(float *)(a1 + 12) = v50;
    v51 = fminf(v51, *result);
    *(float *)(a1 + 16) = v51;
    v52 = fmaxf(v52, *result);
    result += 3;
    *(float *)(a1 + 20) = v52;
    v53 = fminf(v53, *(result - 2));
    *(float *)(a1 + 24) = v53;
    v54 = fmaxf(v54, *(result - 2));
    *(float *)(a1 + 28) = v54;
    --v45;
  }
  while ( v45 );
  return result;
}
