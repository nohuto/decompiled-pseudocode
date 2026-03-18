/*
 * XREFs of ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800B5550
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18006A394 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800B5C60 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___ @ 0x18018A780 (InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18018AF70 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeInterpolation::ExpressionValueLerp(int a1, float a2, __int64 a3, float *a4, __int64 a5)
{
  int v6; // ecx
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  __int128 v21; // xmm0
  float v22; // xmm2_4
  float v23; // xmm0_4
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm0_4
  char *v26; // r9
  __int64 v27; // r10
  float *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  __m128 v32; // xmm2
  __m128 v33; // xmm1
  float v34; // eax
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int128 v37; // [rsp+20h] [rbp-50h]
  __int128 v38; // [rsp+30h] [rbp-40h]
  __int128 v39; // [rsp+40h] [rbp-30h] BYREF
  void *retaddr; // [rsp+78h] [rbp+8h]

  if ( a1 != *(_DWORD *)(a3 + 64) || a1 != *((_DWORD *)a4 + 16) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v6 = a1 - 18;
  if ( !v6 )
  {
    v7 = *(float *)a3;
    v8 = *a4;
    *(_DWORD *)(a5 + 64) = 18;
    v9 = (float)((float)(v8 - v7) * a2) + v7;
LABEL_5:
    *(float *)a5 = v9;
    goto LABEL_6;
  }
  v10 = v6 - 17;
  if ( !v10 )
  {
    v36 = (float)((float)(a4[1] - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
    v9 = (float)((float)(*a4 - *(float *)a3) * a2) + *(float *)a3;
    *(_DWORD *)(a5 + 64) = 35;
    *(float *)(a5 + 4) = v36;
    goto LABEL_5;
  }
  v11 = v10 - 7;
  if ( v11 )
  {
    v12 = v11 - 10;
    if ( v12 )
    {
      v13 = v12 - 17;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 != 1 )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v22 = (float)((float)(a4[1] - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
          v23 = (float)(a4[3] - *(float *)(a3 + 12)) * a2;
          *(float *)&v24 = (float)((float)(a4[2] - *(float *)(a3 + 8)) * a2) + *(float *)(a3 + 8);
          *(float *)&v39 = (float)((float)(*a4 - *(float *)a3) * a2) + *(float *)a3;
          *(float *)&v25 = v23 + *(float *)(a3 + 12);
          *((float *)&v39 + 1) = v22;
          *(_DWORD *)(a5 + 64) = 71;
          *((_QWORD *)&v39 + 1) = __PAIR64__(v25, v24);
        }
        else
        {
          v15 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          v16 = (__m128)_mm_loadu_si128((const __m128i *)a4);
          *(_DWORD *)(a5 + 64) = 70;
          v17 = fmaxf(0.0, fminf(a2, 1.0));
          *(float *)&v39 = (float)((float)(v16.m128_f32[0] - v15.m128_f32[0]) * v17) + v15.m128_f32[0];
          v18 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
          v19 = (float)((float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] - v18) * v17) + v18;
          v20 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
          v15.m128_f32[0] = _mm_shuffle_ps(v15, v15, 255).m128_f32[0];
          *((float *)&v39 + 1) = v19;
          *((float *)&v39 + 2) = (float)((float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] - v20) * v17) + v20;
          *((float *)&v39 + 3) = (float)((float)(_mm_shuffle_ps(v16, v16, 255).m128_f32[0] - v15.m128_f32[0]) * v17)
                               + v15.m128_f32[0];
        }
        v21 = v39;
      }
      else
      {
        v26 = (char *)a4 - a3;
        v27 = 4LL;
        v28 = (float *)a3;
        do
        {
          *(float *)((char *)v28 + (_QWORD)&v39 - a3) = *(float *)((char *)v28 + (_QWORD)v26) - *v28;
          ++v28;
          --v27;
        }
        while ( v27 );
        v29 = 0LL;
        v30 = 0LL;
        v38 = v39;
        do
        {
          *(float *)((char *)&v37 + v30) = a2 * *(float *)((char *)&v38 + v30);
          v30 += 4LL;
        }
        while ( v30 < 16 );
        v31 = a3 - (_QWORD)&v39;
        v39 = v37;
        do
        {
          *(float *)((char *)&v37 + v29) = *(float *)((char *)&v39 + v29 + v31) + *(float *)((char *)&v39 + v29);
          v29 += 4LL;
        }
        while ( v29 < 16 );
        v21 = v37;
        *(_DWORD *)(a5 + 64) = 69;
      }
      *(_OWORD *)a5 = v21;
    }
    else
    {
      v32 = (__m128)*(unsigned int *)a4;
      v33 = (__m128)*((unsigned int *)a4 + 1);
      v32.m128_f32[0] = (float)((float)(v32.m128_f32[0] - *(float *)a3) * a2) + *(float *)a3;
      v33.m128_f32[0] = (float)((float)(v33.m128_f32[0] - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
      v34 = (float)((float)(a4[2] - *(float *)(a3 + 8)) * a2) + *(float *)(a3 + 8);
      *(_DWORD *)(a5 + 64) = 52;
      *(_QWORD *)a5 = _mm_unpacklo_ps(v32, v33).m128_u64[0];
      *(float *)(a5 + 8) = v34;
    }
  }
  else
  {
    v35 = (float)((float)(*a4 - *(float *)a3) * a2) + *(float *)a3;
    *(_DWORD *)(a5 + 64) = 42;
    *(float *)a5 = v35;
  }
LABEL_6:
  *(_BYTE *)(a5 + 68) = 1;
}
