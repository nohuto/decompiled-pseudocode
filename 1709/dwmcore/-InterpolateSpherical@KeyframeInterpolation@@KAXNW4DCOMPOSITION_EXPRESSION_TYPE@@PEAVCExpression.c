/*
 * XREFs of ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18018AF70
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18006A394 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800B5C60 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800B5550 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800BA844 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     acos_0 @ 0x1800C5D20 (acos_0.c)
 *     sin_0 @ 0x1800C5D98 (sin_0.c)
 *     ??KD2DVector4@@QEBA?AU0@M@Z @ 0x1801C952C (--KD2DVector4@@QEBA-AU0@M@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x1801CA1EC (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1801CA4B8 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

void __fastcall KeyframeInterpolation::InterpolateSpherical(double a1, int a2, __int64 a3, __m128i *a4, __int64 a5)
{
  __int64 v9; // rdi
  float v10; // xmm9_4
  __m128 v11; // xmm4
  __m128 v12; // xmm3
  float v13; // xmm5_4
  float v14; // xmm0_4
  double v15; // xmm0_8
  __m128i v16; // xmm1
  float v17; // xmm2_4
  int v18; // eax
  __int64 v19; // xmm0_8
  int v20; // eax
  float v21; // xmm0_4
  __int64 v22; // xmm1_8
  float v23; // xmm1_4
  double v24; // xmm6_8
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm10_4
  float v29; // xmm8_4
  float v30; // xmm6_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  unsigned int v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm3_4
  __int64 i; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _OWORD *v39; // rax
  float v40; // xmm3_4
  float v41; // xmm7_4
  float v42; // xmm7_4
  float v43; // xmm6_4
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __m128i v47; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v48; // [rsp+48h] [rbp-C0h] BYREF
  __m128i v49; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v50[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-60h]
  const void *retaddr; // [rsp+150h] [rbp+48h]

  memset_0(v50, 0, sizeof(v50));
  v9 = 0LL;
  LODWORD(v51) = 18;
  v10 = FLOAT_1_0;
  BYTE4(v51) = 0;
  if ( a2 != 18 )
  {
    if ( a2 == 35 )
    {
      v22 = a4->m128i_i64[0];
      v48.m128i_i64[0] = *(_QWORD *)a3;
      v47.m128i_i64[0] = v22;
      D3DXVec2Normalize((struct D2DVector2 *)&v48, (const struct D2DVector2 *)&v48);
      D3DXVec2Normalize((struct D2DVector2 *)&v47, (const struct D2DVector2 *)&v47);
      v23 = (float)(*(float *)v48.m128i_i32 * *(float *)v47.m128i_i32)
          + (float)(*(float *)&v48.m128i_i32[1] * *(float *)&v47.m128i_i32[1]);
      v21 = FLOAT_N1_0;
      if ( v23 >= -1.0 )
        v21 = fminf(1.0, v23);
    }
    else
    {
      switch ( a2 )
      {
        case '4':
          v18 = *(_DWORD *)(a3 + 8);
          v47.m128i_i64[0] = *(_QWORD *)a3;
          v19 = a4->m128i_i64[0];
          v47.m128i_i32[2] = v18;
          v20 = a4->m128i_i32[2];
          v48.m128i_i64[0] = v19;
          v48.m128i_i32[2] = v20;
          D3DXVec3Normalize((struct D2DVector3 *)&v47, (const struct D2DVector3 *)&v47);
          D3DXVec3Normalize((struct D2DVector3 *)&v48, (const struct D2DVector3 *)&v48);
          v17 = (float)((float)(*(float *)&v47.m128i_i32[1] * *(float *)&v48.m128i_i32[1])
                      + (float)(*(float *)v48.m128i_i32 * *(float *)v47.m128i_i32))
              + (float)(*(float *)&v47.m128i_i32[2] * *(float *)&v48.m128i_i32[2]);
          break;
        case 'E':
          v16 = *a4;
          v47 = *(__m128i *)a3;
          v48 = v16;
          D3DXVec4Normalize((struct D2DVector4 *)&v47, (const struct D2DVector4 *)&v47);
          D3DXVec4Normalize((struct D2DVector4 *)&v48, (const struct D2DVector4 *)&v48);
          v17 = (float)((float)((float)(*(float *)v47.m128i_i32 * *(float *)v48.m128i_i32)
                              + (float)(*(float *)&v47.m128i_i32[1] * *(float *)&v48.m128i_i32[1]))
                      + (float)(*(float *)&v47.m128i_i32[2] * *(float *)&v48.m128i_i32[2]))
              + (float)(*(float *)&v47.m128i_i32[3] * *(float *)&v48.m128i_i32[3]);
          break;
        case 'G':
          v11 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          v12 = (__m128)_mm_loadu_si128(a4);
          v10 = FLOAT_N1_0;
          v13 = (float)((float)((float)(v11.m128_f32[0] * v12.m128_f32[0])
                              + (float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0]
                                      * _mm_shuffle_ps(v12, v12, 85).m128_f32[0]))
                      + (float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0] * _mm_shuffle_ps(v12, v12, 170).m128_f32[0]))
              + (float)(_mm_shuffle_ps(v11, v11, 255).m128_f32[0] * _mm_shuffle_ps(v12, v12, 255).m128_f32[0]);
          if ( v13 >= -1.0 )
            v14 = fminf(1.0, v13);
          else
            v14 = FLOAT_N1_0;
          if ( v14 >= 0.0 )
            v10 = FLOAT_1_0;
          v15 = v14;
          goto LABEL_20;
        default:
          ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
      v21 = FLOAT_N1_0;
      if ( v17 >= -1.0 )
        v21 = fminf(1.0, v17);
    }
    v15 = v21;
LABEL_20:
    v24 = acos_0(v15);
    goto LABEL_22;
  }
  v24 = 0.0;
LABEL_22:
  v25 = v24;
  v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & _xmm);
  if ( v26 >= 0.0000011920929 )
  {
    v28 = sin_0(v24);
    v29 = sin_0(a1 * v24);
    v30 = sin_0((1.0 - a1) * v24);
    switch ( a2 )
    {
      case 18:
        v43 = v30 * *(float *)a3;
        LODWORD(v51) = 18;
        *(float *)v50 = (float)((float)(v43 * v10) + (float)(v29 * *(float *)a4->m128i_i32)) / v28;
        break;
      case 35:
        LODWORD(v51) = 35;
        v42 = (float)(1.0 / v28)
            * (float)((float)(v29 * *(float *)&a4->m128i_i32[1]) + (float)((float)(v30 * *(float *)(a3 + 4)) * v10));
        *(float *)v50 = (float)((float)((float)(v30 * *(float *)a3) * v10) + (float)(v29 * *(float *)a4->m128i_i32))
                      * (float)(1.0 / v28);
        *((float *)v50 + 1) = v42;
        break;
      case 52:
        LODWORD(v51) = 52;
        v40 = (float)((float)(v30 * *(float *)(a3 + 4)) * v10) + (float)(v29 * *(float *)&a4->m128i_i32[1]);
        v41 = (float)(1.0 / v28)
            * (float)((float)((float)(v30 * *(float *)(a3 + 8)) * v10) + (float)(v29 * *(float *)&a4->m128i_i32[2]));
        *(float *)v50 = (float)(1.0 / v28)
                      * (float)((float)((float)(v30 * *(float *)a3) * v10) + (float)(v29 * *(float *)a4->m128i_i32));
        *((float *)v50 + 1) = (float)(1.0 / v28) * v40;
        *((float *)v50 + 2) = v41;
        break;
      case 69:
        for ( i = 0LL; i < 4; ++i )
          *(float *)&v47.m128i_i32[i] = v29 * *(float *)&a4->m128i_i32[i];
        v37 = 0LL;
        v49 = v47;
        do
        {
          *(float *)&v47.m128i_i32[v37] = v30 * *(float *)(a3 + 4 * v37);
          ++v37;
        }
        while ( v37 < 4 );
        v38 = 0LL;
        v48 = v47;
        do
        {
          *(float *)&v47.m128i_i32[v38] = v10 * *(float *)&v48.m128i_i32[v38];
          ++v38;
        }
        while ( v38 < 4 );
        v48 = v47;
        do
        {
          *(float *)&v47.m128i_i32[v9] = *(float *)&v49.m128i_i32[v9] + *(float *)&v48.m128i_i32[v9];
          ++v9;
        }
        while ( v9 < 4 );
        v49 = v47;
        v39 = (_OWORD *)D2DVector4::operator/(&v49, &v47);
        LODWORD(v51) = 69;
        v50[0] = *v39;
        break;
      default:
        LODWORD(v51) = 71;
        v31 = v30 * *(float *)(a3 + 4);
        v32 = v30 * *(float *)(a3 + 8);
        *(float *)&v33 = (float)((float)((float)(v30 * *(float *)a3) * v10) + (float)(v29 * *(float *)a4->m128i_i32))
                       * (float)(1.0 / v28);
        v34 = (float)((float)(v30 * *(float *)(a3 + 12)) * v10) + (float)(v29 * *(float *)&a4->m128i_i32[3]);
        v35 = (float)((float)(v32 * v10) + (float)(v29 * *(float *)&a4->m128i_i32[2])) * (float)(1.0 / v28);
        *(_QWORD *)&v50[0] = __PAIR64__(
                               (float)((float)(v31 * v10) + (float)(v29 * *(float *)&a4->m128i_i32[1]))
                             * (float)(1.0 / v28),
                               v33);
        *((float *)v50 + 2) = v35;
        *((float *)v50 + 3) = v34 * (float)(1.0 / v28);
        break;
    }
    BYTE4(v51) = 1;
  }
  else
  {
    v27 = a1;
    KeyframeInterpolation::ExpressionValueLerp(a2, v27, a3, (float *)a4->m128i_i32, (__int64)v50);
  }
  v44 = v50[1];
  *(_OWORD *)a5 = v50[0];
  v45 = v50[2];
  *(_OWORD *)(a5 + 16) = v44;
  v46 = v50[3];
  *(_OWORD *)(a5 + 32) = v45;
  *(_QWORD *)&v45 = v51;
  *(_OWORD *)(a5 + 48) = v46;
  *(_QWORD *)(a5 + 64) = v45;
}
