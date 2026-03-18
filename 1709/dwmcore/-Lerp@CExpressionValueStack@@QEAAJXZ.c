/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x180184D64
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v4; // rdx
  int v5; // ecx
  float v6; // xmm12_4
  __m128 v7; // xmm4
  __m128 v8; // xmm3
  __m128 v9; // xmm6
  __m128 v10; // xmm5
  __m128 v11; // xmm7
  __m128 v12; // xmm8
  __m128 v13; // xmm11
  __m128 v14; // xmm10
  float v15; // xmm9_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  __m128 v27; // xmm5
  __m128 v28; // xmm0
  __m128 v29; // xmm3
  float v30; // xmm4_4
  float v31; // xmm1_4
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm5
  __m128 v35; // xmm4
  float v36; // xmm3_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  __m128 v40; // xmm3
  __m128 v41; // xmm1
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  unsigned int v50; // [rsp+28h] [rbp-E0h]
  __int128 v51; // [rsp+38h] [rbp-D0h]
  __int128 v52; // [rsp+38h] [rbp-D0h]
  __int64 v53; // [rsp+38h] [rbp-D0h]
  __int64 v54; // [rsp+50h] [rbp-B8h]
  float v55; // [rsp+58h] [rbp-B0h]
  __int64 v56; // [rsp+60h] [rbp-A8h]
  __int128 v57; // [rsp+68h] [rbp-A0h]
  __int128 v58; // [rsp+78h] [rbp-90h]
  __int128 v59; // [rsp+88h] [rbp-80h]
  float v60[8]; // [rsp+98h] [rbp-70h]
  float v61[32]; // [rsp+B8h] [rbp-50h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v50 = 3172;
LABEL_20:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v50);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64);
  v6 = *(float *)(v4 + 72LL * (v1 - 1));
  if ( *(_DWORD *)(v4 + 72LL * (v1 - 1) + 64) != 18 || v5 != *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) )
  {
    v50 = 3199;
    goto LABEL_20;
  }
  switch ( v5 )
  {
    case 18:
      v48 = *(float *)(v4 + 72LL * (v1 - 2)) - *(float *)(v4 + 72LL * (v1 - 3));
      *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64) = 18;
      *(float *)(v4 + 72LL * (v1 - 3)) = (float)(fmaxf(0.0, fminf(v6, 1.0)) * v48) + *(float *)(v4 + 72LL * (v1 - 3));
      break;
    case 35:
      v44 = *(float *)(v4 + 72LL * (v1 - 2)) - *(float *)(v4 + 72LL * (v1 - 3));
      v45 = *(float *)(v4 + 72LL * (v1 - 2) + 4) - *(float *)(v4 + 72LL * (v1 - 3) + 4);
      *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64) = 35;
      v46 = fmaxf(0.0, fminf(v6, 1.0));
      v47 = (float)(v45 * v46) + *(float *)(v4 + 72LL * (v1 - 3) + 4);
      *(float *)(v4 + 72LL * (v1 - 3)) = (float)(v44 * v46) + *(float *)(v4 + 72LL * (v1 - 3));
      *(float *)(v4 + 72LL * (v1 - 3) + 4) = v47;
      break;
    case 52:
      v54 = *(_QWORD *)(v4 + 72LL * (v1 - 3));
      v53 = *(_QWORD *)(v4 + 72LL * (v1 - 2));
      v40 = (__m128)(unsigned int)v53;
      v41 = (__m128)HIDWORD(v53);
      v42 = fmaxf(0.0, fminf(v6, 1.0));
      v55 = *(float *)(v4 + 72LL * (v1 - 3) + 8);
      v43 = *(float *)(v4 + 72LL * (v1 - 2) + 8) - v55;
      *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64) = 52;
      v40.m128_f32[0] = (float)((float)(*(float *)&v53 - *(float *)&v54) * v42) + *(float *)&v54;
      v41.m128_f32[0] = (float)((float)(*((float *)&v53 + 1) - *((float *)&v54 + 1)) * v42) + *((float *)&v54 + 1);
      *(_QWORD *)(v4 + 72LL * (v1 - 3)) = _mm_unpacklo_ps(v40, v41).m128_u64[0];
      *(float *)(v4 + 72LL * (v1 - 3) + 8) = (float)(v43 * v42) + v55;
      break;
    case 69:
      v34 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 72LL * (v1 - 2)));
      *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64) = 69;
      v35 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 72LL * (v1 - 3)));
      v36 = fmaxf(0.0, fminf(v6, 1.0));
      *(float *)&v52 = (float)((float)(v34.m128_f32[0] - v35.m128_f32[0]) * v36) + v35.m128_f32[0];
      v37 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
      v38 = (float)((float)(_mm_shuffle_ps(v34, v34, 85).m128_f32[0] - v37) * v36) + v37;
      v39 = _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
      v35.m128_f32[0] = _mm_shuffle_ps(v35, v35, 255).m128_f32[0];
      *((float *)&v52 + 1) = v38;
      *((float *)&v52 + 2) = (float)((float)(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] - v39) * v36) + v39;
      *((float *)&v52 + 3) = (float)((float)(_mm_shuffle_ps(v34, v34, 255).m128_f32[0] - v35.m128_f32[0]) * v36)
                           + v35.m128_f32[0];
      *(_OWORD *)(v4 + 72LL * (v1 - 3)) = v52;
      break;
    case 104:
      v27 = *(__m128 *)(v4 + 72LL * (v1 - 3));
      v28 = *(__m128 *)(v4 + 72LL * (v1 - 2));
      v29 = v28;
      v56 = *(_QWORD *)(v4 + 72LL * (v1 - 3) + 16);
      *(_QWORD *)v61 = *(_QWORD *)(v4 + 72LL * (v1 - 2) + 16);
      v30 = fmaxf(0.0, fminf(v6, 1.0));
      *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64) = 104;
      *(float *)&v51 = (float)((float)(v28.m128_f32[0] - v27.m128_f32[0]) * v30) + v27.m128_f32[0];
      v28.m128_f32[0] = _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
      v31 = (float)((float)(_mm_shuffle_ps(v29, v29, 85).m128_f32[0] - v28.m128_f32[0]) * v30) + v28.m128_f32[0];
      v28.m128_f32[0] = _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
      v27.m128_f32[0] = _mm_shuffle_ps(v27, v27, 255).m128_f32[0];
      *((float *)&v51 + 1) = v31;
      v32 = (__m128)LODWORD(v61[0]);
      v32.m128_f32[0] = (float)((float)(v61[0] - *(float *)&v56) * v30) + *(float *)&v56;
      *((float *)&v51 + 2) = (float)((float)(_mm_shuffle_ps(v29, v29, 170).m128_f32[0] - v28.m128_f32[0]) * v30)
                           + v28.m128_f32[0];
      v33 = (__m128)LODWORD(v61[1]);
      *((float *)&v51 + 3) = (float)((float)(_mm_shuffle_ps(v29, v29, 255).m128_f32[0] - v27.m128_f32[0]) * v30)
                           + v27.m128_f32[0];
      *(_OWORD *)(v4 + 72LL * (v1 - 3)) = v51;
      v33.m128_f32[0] = (float)((float)(v61[1] - *((float *)&v56 + 1)) * v30) + *((float *)&v56 + 1);
      *(_QWORD *)(v4 + 72LL * (v1 - 3) + 16) = _mm_unpacklo_ps(v32, v33).m128_u64[0];
      break;
    case 265:
      v7 = *(__m128 *)(v4 + 72LL * (v1 - 3));
      v8 = *(__m128 *)(v4 + 72LL * (v1 - 2));
      v9 = *(__m128 *)(v4 + 72LL * (v1 - 3) + 16);
      v10 = *(__m128 *)(v4 + 72LL * (v1 - 2) + 16);
      v11 = *(__m128 *)(v4 + 72LL * (v1 - 2) + 32);
      v12 = *(__m128 *)(v4 + 72LL * (v1 - 3) + 32);
      v13 = *(__m128 *)(v4 + 72LL * (v1 - 3) + 48);
      v14 = *(__m128 *)(v4 + 72LL * (v1 - 2) + 48);
      v15 = fmaxf(0.0, fminf(v6, 1.0));
      *(float *)&v57 = (float)((float)(v8.m128_f32[0] - v7.m128_f32[0]) * v15) + v7.m128_f32[0];
      v16 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
      v17 = (float)((float)(_mm_shuffle_ps(v8, v8, 85).m128_f32[0] - v16) * v15) + v16;
      v18 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
      v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
      *((float *)&v57 + 1) = v17;
      *((float *)&v57 + 2) = (float)((float)(_mm_shuffle_ps(v8, v8, 170).m128_f32[0] - v18) * v15) + v18;
      *((float *)&v57 + 3) = (float)((float)(_mm_shuffle_ps(v8, v8, 255).m128_f32[0] - v7.m128_f32[0]) * v15)
                           + v7.m128_f32[0];
      *(float *)&v58 = (float)((float)(v10.m128_f32[0] - v9.m128_f32[0]) * v15) + v9.m128_f32[0];
      v19 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
      v20 = (float)((float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] - v19) * v15) + v19;
      v21 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
      v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
      *((float *)&v58 + 1) = v20;
      *((float *)&v58 + 2) = (float)((float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v21) * v15) + v21;
      *((float *)&v58 + 3) = (float)((float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0] - v9.m128_f32[0]) * v15)
                           + v9.m128_f32[0];
      *(float *)&v59 = (float)((float)(v11.m128_f32[0] - v12.m128_f32[0]) * v15) + v12.m128_f32[0];
      v22 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
      *((float *)&v59 + 1) = (float)((float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0] - v22) * v15) + v22;
      v23 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
      v12.m128_f32[0] = _mm_shuffle_ps(v12, v12, 255).m128_f32[0];
      *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64) = 265;
      *((float *)&v59 + 2) = (float)((float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0] - v23) * v15) + v23;
      *((float *)&v59 + 3) = (float)((float)(_mm_shuffle_ps(v11, v11, 255).m128_f32[0] - v12.m128_f32[0]) * v15)
                           + v12.m128_f32[0];
      v60[0] = (float)((float)(v14.m128_f32[0] - v13.m128_f32[0]) * v15) + v13.m128_f32[0];
      v24 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
      v25 = (float)((float)(_mm_shuffle_ps(v14, v14, 85).m128_f32[0] - v24) * v15) + v24;
      v26 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
      v13.m128_f32[0] = _mm_shuffle_ps(v13, v13, 255).m128_f32[0];
      v60[1] = v25;
      *(_OWORD *)(v4 + 72LL * (v1 - 3)) = v57;
      *(_OWORD *)(v4 + 72LL * (v1 - 3) + 16) = v58;
      v60[2] = (float)((float)(_mm_shuffle_ps(v14, v14, 170).m128_f32[0] - v26) * v15) + v26;
      *(_OWORD *)(v4 + 72LL * (v1 - 3) + 32) = v59;
      v60[3] = (float)((float)(_mm_shuffle_ps(v14, v14, 255).m128_f32[0] - v13.m128_f32[0]) * v15) + v13.m128_f32[0];
      *(_OWORD *)(v4 + 72LL * (v1 - 3) + 48) = *(_OWORD *)v60;
      break;
    default:
      v50 = 3308;
      goto LABEL_20;
  }
  *(_BYTE *)(v4 + 72LL * (v1 - 3) + 68) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
