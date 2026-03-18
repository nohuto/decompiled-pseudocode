/*
 * XREFs of ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BDE44
 * Callers:
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800407E0 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800408E0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180040A14 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800AF900 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___ @ 0x1801BFE80 (InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C08FC (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18020B914 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 */

void __fastcall KeyframeInterpolation::ExpressionValueLerp(int a1, float a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  CInterpolatePathsOperation *v7; // rcx
  int v8; // ecx
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  __int128 v22; // xmm0
  float v23; // xmm1_4
  float v24; // xmm0_4
  unsigned int v25; // xmm0_4
  unsigned int v26; // xmm1_4
  char *v27; // r9
  __int64 v28; // r8
  float *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128 v33; // xmm2
  __m128 v34; // xmm1
  float v35; // eax
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  const struct CPathData *v40; // r8
  const struct CPathData *v41; // rdx
  int v42; // eax
  struct CPathData *v43; // rbx
  __int128 v44; // [rsp+30h] [rbp-50h]
  __int128 v45; // [rsp+40h] [rbp-40h]
  struct CPathData *v46[2]; // [rsp+50h] [rbp-30h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]

  if ( a1 != *(_DWORD *)(a3 + 72) || a1 != a4[18] )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v7 = (CInterpolatePathsOperation *)(unsigned int)(a1 - 11);
  if ( (_DWORD)v7 )
  {
    v8 = (_DWORD)v7 - 7;
    if ( v8 )
    {
      v11 = v8 - 17;
      if ( v11 )
      {
        v12 = v11 - 7;
        if ( v12 )
        {
          v13 = v12 - 10;
          if ( v13 )
          {
            v14 = v13 - 17;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 != 1 )
                  ModuleFailFastForHRESULT(2147942487LL, retaddr);
                v23 = (float)((float)(*((float *)a4 + 1) - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
                *(float *)v46 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
                v24 = *((float *)a4 + 2) - *(float *)(a3 + 8);
                *((float *)v46 + 1) = v23;
                *(float *)&v25 = (float)(v24 * a2) + *(float *)(a3 + 8);
                *(float *)&v26 = (float)((float)(*((float *)a4 + 3) - *(float *)(a3 + 12)) * a2) + *(float *)(a3 + 12);
                *(_DWORD *)(a5 + 72) = 71;
                v46[1] = (struct CPathData *)__PAIR64__(v26, v25);
              }
              else
              {
                v16 = (__m128)_mm_loadu_si128((const __m128i *)a3);
                v17 = (__m128)_mm_loadu_si128((const __m128i *)a4);
                *(_DWORD *)(a5 + 72) = 70;
                v18 = fmaxf(0.0, fminf(a2, 1.0));
                *(float *)v46 = (float)((float)(v17.m128_f32[0] - v16.m128_f32[0]) * v18) + v16.m128_f32[0];
                v19 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
                v20 = (float)((float)(_mm_shuffle_ps(v17, v17, 85).m128_f32[0] - v19) * v18) + v19;
                v21 = _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
                v16.m128_f32[0] = _mm_shuffle_ps(v16, v16, 255).m128_f32[0];
                *((float *)v46 + 1) = v20;
                *(float *)&v46[1] = (float)((float)(_mm_shuffle_ps(v17, v17, 170).m128_f32[0] - v21) * v18) + v21;
                *((float *)&v46[1] + 1) = (float)((float)(_mm_shuffle_ps(v17, v17, 255).m128_f32[0] - v16.m128_f32[0])
                                                * v18)
                                        + v16.m128_f32[0];
              }
              v22 = *(_OWORD *)v46;
            }
            else
            {
              v27 = (char *)a4 - a3;
              v28 = 4LL;
              v29 = (float *)a3;
              do
              {
                *(float *)((char *)v29 + (_QWORD)v46 - a3) = *(float *)((char *)v29 + (_QWORD)v27) - *v29;
                ++v29;
                --v28;
              }
              while ( v28 );
              v30 = 0LL;
              v31 = 0LL;
              v45 = *(_OWORD *)v46;
              do
              {
                *(float *)((char *)&v44 + v31) = a2 * *(float *)((char *)&v46[-2] + v31);
                v31 += 4LL;
              }
              while ( v31 < 16 );
              v32 = a3 - (_QWORD)v46;
              *(_OWORD *)v46 = v44;
              do
              {
                *(float *)((char *)&v44 + v30) = *(float *)((char *)v46 + v30 + v32) + *(float *)((char *)v46 + v30);
                v30 += 4LL;
              }
              while ( v30 < 16 );
              v22 = v44;
              *(_DWORD *)(a5 + 72) = 69;
            }
            *(_OWORD *)a5 = v22;
          }
          else
          {
            v33 = (__m128)*a4;
            v34 = (__m128)a4[1];
            v33.m128_f32[0] = (float)((float)(v33.m128_f32[0] - *(float *)a3) * a2) + *(float *)a3;
            v34.m128_f32[0] = (float)((float)(v34.m128_f32[0] - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
            v35 = (float)((float)(*((float *)a4 + 2) - *(float *)(a3 + 8)) * a2) + *(float *)(a3 + 8);
            *(_DWORD *)(a5 + 72) = 52;
            *(_QWORD *)a5 = _mm_unpacklo_ps(v33, v34).m128_u64[0];
            *(float *)(a5 + 8) = v35;
          }
        }
        else
        {
          v36 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
          *(_DWORD *)(a5 + 72) = 42;
          *(float *)a5 = v36;
        }
      }
      else
      {
        v37 = *(float *)(a3 + 4);
        v38 = *((float *)a4 + 1) - v37;
        v39 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
        *(_DWORD *)(a5 + 72) = 35;
        *(float *)a5 = v39;
        *(float *)(a5 + 4) = v37 + (float)(a2 * v38);
      }
    }
    else
    {
      v9 = *(float *)a3;
      v10 = *(float *)a4;
      *(_DWORD *)(a5 + 72) = 18;
      *(float *)a5 = (float)((float)(v10 - v9) * a2) + v9;
    }
    *(_BYTE *)(a5 + 76) = 1;
  }
  else
  {
    v40 = (const struct CPathData *)*((_QWORD *)a4 + 8);
    v41 = *(const struct CPathData **)(a3 + 64);
    v46[0] = 0LL;
    v42 = CInterpolatePathsOperation::Interpolate(v7, v41, v40, a2, v46);
    if ( v42 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v42, retaddr);
    *(_DWORD *)(a5 + 72) = 11;
    *(_BYTE *)(a5 + 76) = 1;
    v43 = v46[0];
    Microsoft::WRL::ComPtr<CPathData>::operator=(a5 + 64, v46[0]);
    if ( v43 )
      (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v43 + 16LL))(v43);
  }
}
