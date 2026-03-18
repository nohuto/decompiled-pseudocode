/*
 * XREFs of ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C08FC
 * Callers:
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800407E0 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800408E0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180040A14 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800AF900 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800264CC (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180029658 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BDE44 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _o_acos_0 @ 0x1800DB772 (_o_acos_0.c)
 *     _o_sin_0 @ 0x1800DB7A2 (_o_sin_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x180206F58 (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1802074DC (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateSpherical(double a1, int a2, __int64 a3, __m128i *a4, __int64 a5)
{
  __int64 v9; // r14
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
  double v24; // xmm8_8
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm10_4
  float v28; // xmm7_4
  float v29; // xmm4_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  __int64 i; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  float v43; // xmm4_4
  float v44; // xmm6_4
  float v45; // xmm4_4
  __int64 result; // rax
  __m128i v47; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v48; // [rsp+48h] [rbp-C0h] BYREF
  __m128i v49; // [rsp+58h] [rbp-B0h]
  _OWORD v50[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-60h]
  int v52; // [rsp+B0h] [rbp-58h]
  char v53; // [rsp+B4h] [rbp-54h]
  const void *retaddr; // [rsp+140h] [rbp+38h]

  memset_0(v50, 0, sizeof(v50));
  v9 = 0LL;
  v51 = 0LL;
  v10 = FLOAT_1_0;
  v52 = 18;
  v53 = 0;
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
    v24 = o_acos_0(v15);
    goto LABEL_22;
  }
  v24 = 0.0;
LABEL_22:
  v25 = v24;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & _xmm) >= 0.0000011920929 )
  {
    v27 = o_sin_0(v24);
    v28 = o_sin_0(a1 * v24);
    v29 = o_sin_0((1.0 - a1) * v24);
    switch ( a2 )
    {
      case 18:
        v45 = v29 * *(float *)a3;
        v52 = 18;
        *(float *)v50 = (float)((float)(v45 * v10) + (float)(v28 * *(float *)a4->m128i_i32)) / v27;
        break;
      case 35:
        v52 = 35;
        v44 = (float)(1.0 / v27)
            * (float)((float)((float)(v29 * *(float *)(a3 + 4)) * v10) + (float)(v28 * *(float *)&a4->m128i_i32[1]));
        *(float *)v50 = (float)(1.0 / v27)
                      * (float)((float)(v28 * *(float *)a4->m128i_i32) + (float)((float)(v29 * *(float *)a3) * v10));
        *((float *)v50 + 1) = v44;
        break;
      case 52:
        v52 = 52;
        v40 = v29 * *(float *)(a3 + 4);
        v41 = (float)((float)(v29 * *(float *)a3) * v10) + (float)(v28 * *(float *)a4->m128i_i32);
        v42 = v28 * *(float *)&a4->m128i_i32[1];
        v43 = (float)((float)(v29 * *(float *)(a3 + 8)) * v10) + (float)(v28 * *(float *)&a4->m128i_i32[2]);
        *(float *)v50 = v41 * (float)(1.0 / v27);
        *((float *)v50 + 2) = v43 * (float)(1.0 / v27);
        *((float *)v50 + 1) = (float)((float)(v40 * v10) + v42) * (float)(1.0 / v27);
        break;
      case 69:
        for ( i = 0LL; i < 4; ++i )
          *(float *)&v47.m128i_i32[i] = v28 * *(float *)&a4->m128i_i32[i];
        v36 = 0LL;
        v49 = v47;
        do
        {
          *(float *)&v47.m128i_i32[v36] = v29 * *(float *)(a3 + 4 * v36);
          ++v36;
        }
        while ( v36 < 4 );
        v37 = 0LL;
        v48 = v47;
        do
        {
          *(float *)&v47.m128i_i32[v37] = v10 * *(float *)&v48.m128i_i32[v37];
          ++v37;
        }
        while ( v37 < 4 );
        v38 = 0LL;
        v48 = v47;
        do
        {
          *(float *)&v47.m128i_i32[v38] = *(float *)&v49.m128i_i32[v38] + *(float *)&v48.m128i_i32[v38];
          ++v38;
        }
        while ( v38 < 4 );
        v39 = 0LL;
        v49 = v47;
        do
        {
          *(float *)&v47.m128i_i32[v39] = (float)(1.0 / v27) * *(float *)&v49.m128i_i32[v39];
          ++v39;
        }
        while ( v39 < 4 );
        v52 = 69;
        v50[0] = v47;
        break;
      default:
        v52 = 71;
        v30 = v29 * *(float *)(a3 + 8);
        v31 = (float)((float)((float)(v29 * *(float *)a3) * v10) + (float)(v28 * *(float *)a4->m128i_i32))
            * (float)(1.0 / v27);
        v32 = (float)((float)(v29 * *(float *)(a3 + 4)) * v10) + (float)(v28 * *(float *)&a4->m128i_i32[1]);
        v33 = v28 * *(float *)&a4->m128i_i32[2];
        v34 = (float)((float)(v29 * *(float *)(a3 + 12)) * v10) + (float)(v28 * *(float *)&a4->m128i_i32[3]);
        *(float *)v50 = v31;
        *((float *)v50 + 1) = v32 * (float)(1.0 / v27);
        *((float *)v50 + 2) = (float)((float)(v30 * v10) + v33) * (float)(1.0 / v27);
        *((float *)v50 + 3) = v34 * (float)(1.0 / v27);
        break;
    }
    v53 = 1;
  }
  else
  {
    v26 = a1;
    KeyframeInterpolation::ExpressionValueLerp(a2, v26, a3, (unsigned int *)a4, (__int64)v50);
    v9 = v51;
  }
  result = CExpressionValue::operator=(a5, (__int64)v50);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
