/*
 * XREFs of ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180092ED0
 * Callers:
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x1800905A0 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Compute@?$LinearInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1800C0A10 (-Compute@-$LinearInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components.c)
 *     ?Compute@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8010 (-Compute@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     ?Compute@?$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8280 (-Compute@-$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@.c)
 *     ?Compute@?$XamlInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B83D0 (-Compute@-$XamlInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@.c)
 * Callees:
 *     fmod_0 @ 0x1800D5372 (fmod_0.c)
 *     fmodf_0 @ 0x1800D5378 (fmodf_0.c)
 */

__m128d *__fastcall Components::Animations::HslCoordinateSpace::Interpolate(
        double a1,
        __int64 a2,
        double *a3,
        double *a4,
        __m128d *a5)
{
  __int64 v6; // xmm4_8
  float v7; // xmm1_4
  float v8; // xmm13_4
  __m128 v9; // xmm1
  float v10; // xmm3_4
  float v11; // xmm2_4
  __m128 v12; // xmm9
  float v13; // xmm0_4
  __m128 v14; // xmm6
  __m128 v15; // xmm8
  float v16; // xmm10_4
  float v17; // xmm9_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm6_4
  float v23; // xmm0_4
  float v24; // xmm11_4
  float v25; // xmm14_4
  float v26; // xmm3_4
  float v27; // xmm6_4
  float v28; // xmm11_4
  float v29; // xmm2_4
  float v30; // xmm10_4
  float v31; // xmm8_4
  __m128 v32; // xmm14
  float v33; // xmm1_4
  float v34; // xmm12_4
  float v35; // xmm2_4
  __m128 v36; // xmm0
  __m128 v37; // xmm1
  __m128d *result; // rax
  float v39; // xmm9_4
  float v40; // xmm0_4
  double v41; // xmm1_8
  float v42; // xmm6_4
  float v43; // xmm0_4
  double v44; // xmm1_8
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // [rsp+D0h] [rbp+8h]
  float v48; // [rsp+D8h] [rbp+10h]

  v6 = _xmm;
  v7 = a3[3];
  v8 = a1;
  v48 = v7;
  v9 = _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)a3);
  v10 = a3[1];
  v12 = v9;
  v11 = a3[2];
  v12.m128_f32[0] = fmaxf(fmaxf(v9.m128_f32[0], v10), v11);
  v13 = fminf(fminf(v9.m128_f32[0], v10), v11);
  v14 = v12;
  v14.m128_f32[0] = v12.m128_f32[0] + v13;
  v15 = v14;
  v15.m128_f32[0] = (float)(v12.m128_f32[0] + v13) * 0.5;
  if ( v12.m128_f32[0] == v13 )
  {
    v16 = 0.0;
    v17 = 0.0;
  }
  else
  {
    if ( v12.m128_f32[0] == v9.m128_f32[0] )
    {
      v39 = v12.m128_f32[0] - v13;
      v40 = fmodf_0((float)(v10 - v11) / v39, 6.0);
      v6 = _xmm;
      v41 = v40;
    }
    else if ( v12.m128_f32[0] == v10 )
    {
      v39 = v12.m128_f32[0] - v13;
      v41 = (float)((float)((float)(v11 - v9.m128_f32[0]) / v39) + 2.0);
    }
    else
    {
      v39 = v12.m128_f32[0] - v13;
      v41 = (float)((float)((float)(v9.m128_f32[0] - v10) / v39) + 4.0);
    }
    v16 = v41 * 1.047197551196598;
    if ( v16 < 0.0 )
      v16 = v16 + 6.2831855;
    v17 = v39 / (float)(1.0 - (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14.m128_f32[0] - 1.0)) & v6));
  }
  v18 = a4[3];
  v19 = *a4;
  v47 = v18;
  v20 = a4[1];
  v21 = a4[2];
  v22 = fmaxf(fmaxf(v19, v20), v21);
  v23 = fminf(fminf(v19, v20), v21);
  v24 = v22 + v23;
  v25 = (float)(v22 + v23) * 0.5;
  if ( v22 == v23 )
  {
    v26 = 0.0;
    v27 = 0.0;
  }
  else
  {
    if ( v22 == v19 )
    {
      v42 = v22 - v23;
      v43 = fmodf_0((float)(v20 - v21) / v42, 6.0);
      v6 = _xmm;
      v44 = v43;
    }
    else if ( v22 == v20 )
    {
      v42 = v22 - v23;
      v44 = (float)((float)((float)(v21 - v19) / v42) + 2.0);
    }
    else
    {
      v42 = v22 - v23;
      v44 = (float)((float)((float)(v19 - v20) / v42) + 4.0);
    }
    v26 = v44 * 1.047197551196598;
    if ( v26 < 0.0 )
      v26 = v26 + 6.2831855;
    v27 = v42 / (float)(1.0 - (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - 1.0)) & v6));
  }
  v28 = 1.0 - v8;
  v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16 - v26)) & v6);
  if ( v29 >= 3.1415927 )
  {
    if ( v16 <= v26 )
      v45 = (float)((float)(v16 + 6.2831855) * v28) + (float)(v26 * v8);
    else
      v45 = (float)((float)(v26 + 6.2831855) * v8) + (float)(v16 * v28);
    v46 = fmodf_0(v45, 6.2831855);
    v6 = _xmm;
    v30 = v46;
  }
  else
  {
    v30 = (float)(v16 * v28) + (float)(v26 * v8);
  }
  v31 = (float)(v15.m128_f32[0] * v28) + (float)(v25 * v8);
  v32 = (__m128)LODWORD(v48);
  v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v31 + v31) - 1.0)) & v6);
  v34 = (float)(1.0 - v33) * (float)((float)(v17 * v28) + (float)(v27 * v8));
  v35 = (1.0 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fmod_0(v30 / 1.047197551196598, 2.0) - 1.0) & _xmm)) * v34;
  v15.m128_f32[0] = v31 - (float)(v34 * 0.5);
  if ( v30 < 1.047197551196598 )
  {
    v37 = v15;
    v36 = v15;
    v37.m128_f32[0] = v15.m128_f32[0] + v35;
LABEL_9:
    v36.m128_f32[0] = v36.m128_f32[0] + v34;
    goto LABEL_10;
  }
  if ( v30 >= 2.094395102393195 )
  {
    if ( v30 >= 3.141592653589793 )
    {
      if ( v30 >= 4.188790204786391 )
      {
        v36 = v15;
        v37 = v15;
        if ( v30 >= 5.235987755982989 )
        {
          v15.m128_f32[0] = v15.m128_f32[0] + v35;
          goto LABEL_9;
        }
        v36.m128_f32[0] = v15.m128_f32[0] + v35;
        v15.m128_f32[0] = v15.m128_f32[0] + v34;
      }
      else
      {
        v37 = v15;
        v36 = v15;
        v37.m128_f32[0] = v15.m128_f32[0] + v35;
        v15.m128_f32[0] = v15.m128_f32[0] + v34;
      }
    }
    else
    {
      v37 = v15;
      v36 = v15;
      v37.m128_f32[0] = v15.m128_f32[0] + v34;
      v15.m128_f32[0] = v15.m128_f32[0] + v35;
    }
  }
  else
  {
    v36 = v15;
    v37 = v15;
    v36.m128_f32[0] = v15.m128_f32[0] + v35;
    v37.m128_f32[0] = v15.m128_f32[0] + v34;
  }
LABEL_10:
  if ( v36.m128_f32[0] < 0.0 )
    v36 = 0LL;
  if ( v37.m128_f32[0] < 0.0 )
    v37 = 0LL;
  if ( v15.m128_f32[0] < 0.0 )
    v15 = 0LL;
  result = a5;
  *a5 = _mm_unpacklo_pd(_mm_cvtps_pd(v36), _mm_cvtps_pd(v37));
  v32.m128_f32[0] = (float)(v48 * v28) + (float)(v47 * v8);
  a5[1] = _mm_unpacklo_pd(_mm_cvtps_pd(v15), _mm_cvtps_pd(v32));
  return result;
}
