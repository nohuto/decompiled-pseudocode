/*
 * XREFs of ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B9C80
 * Callers:
 *     ?Compute@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8130 (-Compute@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?Compute@?$LinearInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8250 (-Compute@-$LinearInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Comp.c)
 *     ?Compute@?$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8320 (-Compute@-$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Compute@?$XamlInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B84B0 (-Compute@-$XamlInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 * Callees:
 *     ?Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180028BE4 (-Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 *     ??DValue@Animations@Components@@QEBA?AV012@M@Z @ 0x180028CA4 (--DValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x180028CDC (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 *     ?IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z @ 0x1800C5BEC (-IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     acos_0 @ 0x1800D5330 (acos_0.c)
 *     sin_0 @ 0x1800D53AE (sin_0.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x1801B9744 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 *     ?Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z @ 0x1801B9984 (-Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ??KValue@Animations@Components@@QEBA?AV012@M@Z @ 0x1801B9C44 (--KValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     ?Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z @ 0x1801BA1E8 (-Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ?Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z @ 0x1801BA2B0 (-Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z.c)
 */

__int128 *__fastcall Components::Animations::SphericalCoordinateSpace::Interpolate(
        double a1,
        int a2,
        double *a3,
        double *a4,
        _OWORD *a5)
{
  unsigned int v5; // ebx
  float v6; // xmm8_4
  double v10; // xmm6_8
  double v11; // xmm0_8
  double v12; // xmm1_8
  bool v13; // dl
  bool v14; // dl
  double v15; // xmm1_8
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  double v20; // xmm0_8
  float v21; // xmm1_4
  double v22; // xmm3_8
  unsigned int v23; // xmm0_4
  unsigned int v24; // xmm1_4
  float v25; // xmm1_4
  bool v26; // dl
  double v27; // xmm2_8
  float v28; // xmm0_4
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int128 *result; // rax
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  float v34; // xmm9_4
  float v35; // xmm2_4
  double *v36; // rsi
  float v37; // xmm2_4
  double *v38; // rax
  char *v39; // rax
  char *v40; // rcx
  __m128 v41[2]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+78h] [rbp-90h] BYREF
  __int128 v44; // [rsp+88h] [rbp-80h]
  double v45[4]; // [rsp+98h] [rbp-70h] BYREF
  double v46[4]; // [rsp+B8h] [rbp-50h] BYREF

  v5 = 0;
  v6 = FLOAT_1_0;
  v43 = 0uLL;
  v10 = 0.0;
  v44 = 0uLL;
  switch ( a2 )
  {
    case 18:
      goto LABEL_16;
    case 35:
      *(float *)&v23 = *a3;
      *(float *)&v24 = a3[1];
      v42.m128_u64[0] = __PAIR64__(v24, v23);
      v25 = a4[1];
      v41[0].m128_f32[0] = *a4;
      v41[0].m128_f32[1] = v25;
      Components::Animations::Vector2::Normalize((Components::Animations::Vector2 *)&v42, 35);
      Components::Animations::Vector2::Normalize((Components::Animations::Vector2 *)v41, v26);
      v11 = DOUBLE_N1_0;
      v27 = (float)((float)(v41[0].m128_f32[1] * v42.m128_f32[1]) + (float)(v41[0].m128_f32[0] * v42.m128_f32[0]));
      if ( v27 >= -1.0 )
        v11 = fmin(1.0, v27);
      break;
    case 52:
      *(float *)&v16 = *a3;
      *(float *)&v17 = a3[1];
      v41[0].m128_u64[0] = __PAIR64__(v17, v16);
      v18 = a3[2];
      v19 = *a4;
      v41[0].m128_f32[2] = v18;
      v20 = a4[1];
      v42.m128_f32[0] = v19;
      v21 = a4[2];
      v42.m128_f32[1] = v20;
      v42.m128_f32[2] = v21;
      Components::Animations::Vector3::Normalize((Components::Animations::Vector3 *)v41);
      Components::Animations::Vector3::Normalize((Components::Animations::Vector3 *)&v42);
      v11 = DOUBLE_N1_0;
      v22 = (float)((float)((float)(v42.m128_f32[1] * v41[0].m128_f32[1]) + (float)(v42.m128_f32[0] * v41[0].m128_f32[0]))
                  + (float)(v42.m128_f32[2] * v41[0].m128_f32[2]));
      if ( v22 >= -1.0 )
        v11 = fmin(1.0, v22);
      break;
    case 69:
      Components::Animations::Value::GetColor((__int64)a3, (__int64)&v42);
      Components::Animations::Value::GetColor((__int64)a4, (__int64)v41);
      Components::Animations::Vector4::Normalize((Components::Animations::Vector4 *)&v42, v13);
      Components::Animations::Vector4::Normalize((Components::Animations::Vector4 *)v41, v14);
      v11 = DOUBLE_N1_0;
      v15 = (float)((float)((float)((float)(v42.m128_f32[0] * v41[0].m128_f32[0])
                                  + (float)(v42.m128_f32[1] * v41[0].m128_f32[1]))
                          + (float)(v42.m128_f32[2] * v41[0].m128_f32[2]))
                  + (float)(v42.m128_f32[3] * v41[0].m128_f32[3]));
      if ( v15 >= -1.0 )
        v11 = fmin(1.0, v15);
      break;
    case 71:
      Components::Animations::Value::GetQuaternion(a3, &v42);
      Components::Animations::Value::GetQuaternion(a4, v41);
      v11 = DOUBLE_N1_0;
      v12 = (float)((float)((float)((float)(v42.m128_f32[0] * v41[0].m128_f32[0])
                                  + (float)(v42.m128_f32[1] * v41[0].m128_f32[1]))
                          + (float)(v42.m128_f32[2] * v41[0].m128_f32[2]))
                  + (float)(v42.m128_f32[3] * v41[0].m128_f32[3]));
      if ( v12 < -1.0 || (v11 = fmin(1.0, v12), v11 < 0.0) )
        v6 = FLOAT_N1_0;
      break;
    default:
      goto LABEL_16;
  }
  v10 = acos_0(v11);
LABEL_16:
  v28 = v10;
  if ( Components::Animations::Math::IsWithinEpsilon(v28) )
  {
    result = (__int128 *)Components::Animations::CartesianCoordinateSpace::Interpolate(
                           v30,
                           v29,
                           (__int64)a3,
                           (__int64)a4);
    v32 = v44;
    v33 = v43;
  }
  else
  {
    v34 = sin_0(v10);
    v35 = sin_0(a1 * v10);
    v36 = Components::Animations::Value::operator*((__int64)a4, (double *)v42.m128_u64, v35);
    v37 = sin_0((1.0 - a1) * v10);
    v38 = Components::Animations::Value::operator*((__int64)a3, (double *)v41[0].m128_u64, v37);
    v39 = (char *)((char *)Components::Animations::Value::operator*((__int64)v38, v45, v6) - (char *)v36);
    v43 = 0uLL;
    v40 = (char *)((char *)&v43 - (char *)v36);
    v44 = 0uLL;
    do
    {
      ++v5;
      *(double *)((char *)v36 + (_QWORD)v40) = *(double *)((char *)v36 + (_QWORD)v39) + *v36;
      ++v36;
    }
    while ( v5 < 4 );
    result = (__int128 *)Components::Animations::Value::operator/((__int64)&v43, v46, v34);
    v33 = *result;
    v32 = result[1];
  }
  *a5 = v33;
  a5[1] = v32;
  return result;
}
