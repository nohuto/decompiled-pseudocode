/*
 * XREFs of ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x1800905A0
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Compute@?$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180028B50 (-Compute@-$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?GetValue@StartingValueInput@Animations@Components@@UEAAJPEAVValue@23@@Z @ 0x1800293A0 (-GetValue@StartingValueInput@Animations@Components@@UEAAJPEAVValue@23@@Z.c)
 *     ?Compute@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180059DF0 (-Compute@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Comp.c)
 *     ?Compute@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x18008FE80 (-Compute@-$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180092ED0 (-Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Sequence::Calculate(Components::Animations::Sequence *this)
{
  char v1; // dl
  int v3; // r11d
  char v4; // r8
  int v5; // ecx
  unsigned int v6; // r15d
  double v7; // xmm6_8
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  Components::Animations::StartingValueInput *v13; // rcx
  __int64 (__fastcall *v14)(Components::Animations::ConstantInput *, struct Components::Animations::Value *); // rax
  Components::Animations::ConstantInput *v15; // rcx
  __int64 (__fastcall *v16)(Components::Animations::ConstantInput *, struct Components::Animations::Value *); // rax
  float *v17; // rcx
  __int64 v18; // r8
  __int64 (__fastcall *v19)(int, int, int, int, __int64, __int64); // rax
  int *v20; // r10
  int v21; // ecx
  int v22; // r8d
  int v23; // esi
  _DWORD *v24; // r9
  __m128d *v25; // rax
  int v26; // r8d
  float v27; // xmm10_4
  float v28; // xmm14_4
  float v29; // xmm0_4
  unsigned int v30; // ecx
  double v31; // xmm14_8
  unsigned int v32; // edx
  __int128 v33; // xmm11
  double v34; // xmm6_8
  double v35; // xmm10_8
  __int128 v36; // xmm7
  unsigned int v37; // eax
  double v38; // xmm4_8
  double v39; // xmm5_8
  double i; // xmm0_8
  double v41; // xmm1_8
  unsigned int v42; // eax
  double v43; // xmm3_8
  double v44; // xmm1_8
  unsigned int v45; // eax
  double v46; // xmm0_8
  unsigned int v47; // eax
  double v48; // xmm1_8
  double v49; // xmm2_8
  double v50; // xmm3_8
  double v51; // xmm2_8
  double v52; // xmm0_8
  unsigned int v53; // eax
  double v54; // xmm1_8
  double v55; // xmm4_8
  __int128 v56; // xmm0
  double v57; // xmm2_8
  double v58; // xmm1_8
  unsigned int v59; // eax
  double v60; // xmm3_8
  double j; // xmm0_8
  double v62; // xmm1_8
  double v63; // xmm4_8
  double k; // xmm0_8
  unsigned int v65; // ecx
  __int64 v66; // rax
  double v67; // xmm2_8
  __m128 v68; // xmm4
  __m128 v69; // xmm3
  __m128d v70; // xmm2
  __m128d v71; // xmm0
  __m128d v72; // xmm1
  __m128 v73; // xmm1
  unsigned int v74; // ecx
  __int64 v75; // rax
  __m128d v76; // xmm3
  __m128d v77; // xmm0
  __m128d v78; // xmm1
  __int64 v79; // rax
  __m128d v80; // xmm2
  __m128d v81; // xmm0
  int Value; // eax
  int v83; // eax
  double v84; // [rsp+40h] [rbp-C0h]
  double v85; // [rsp+48h] [rbp-B8h]
  __m128d v86; // [rsp+50h] [rbp-B0h] BYREF
  __m128d v87; // [rsp+60h] [rbp-A0h]
  __m128d v88; // [rsp+70h] [rbp-90h] BYREF
  __int128 v89; // [rsp+80h] [rbp-80h]
  __m128d v90; // [rsp+90h] [rbp-70h] BYREF
  __m128d v91; // [rsp+A0h] [rbp-60h]
  __int128 v92; // [rsp+B0h] [rbp-50h]
  __int128 v93; // [rsp+C0h] [rbp-40h]

  v1 = *((_BYTE *)this + 264);
  v3 = *((_DWORD *)this + 56);
  v4 = v1 & 8;
  if ( (v1 & 8) != 0 )
    v3 = *((_DWORD *)this + 61) - v3;
  v5 = v3 - *((_DWORD *)this + 62);
  v6 = 0;
  v7 = 0.0;
  if ( *((_BYTE *)this + 228) && v5 >= 0 && v5 <= *((_DWORD *)this + 63) && (v1 & 0x10) == 0 )
    goto LABEL_7;
  if ( (float)((float)*((int *)this + 56) / (float)*((int *)this + 55)) == 0.0 )
  {
    if ( v4 )
      goto LABEL_95;
    goto LABEL_98;
  }
  if ( (float)((float)*((int *)this + 56) / (float)*((int *)this + 55)) == 1.0 )
  {
    if ( !v4 )
    {
LABEL_95:
      v83 = *((_DWORD *)this + 2) - 1;
      *((_DWORD *)this + 63) = 0;
      *((_DWORD *)this + 60) = v83;
      *((_DWORD *)this + 62) = *((_DWORD *)this + 61);
      *((_BYTE *)this + 264) = v1 & 0xEF;
      goto LABEL_7;
    }
LABEL_98:
    *((_DWORD *)this + 60) = 0;
    *((_BYTE *)this + 264) = v1 & 0xEF;
    *((_QWORD *)this + 31) = 0LL;
    goto LABEL_7;
  }
  v20 = *(int **)this;
  v21 = 0;
  v22 = *((_DWORD *)this + 2) - 1;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  v23 = *v20;
  if ( v22 > 0 )
  {
    v24 = v20 + 6;
    while ( *v24 <= v23 + v3 )
    {
      ++v21;
      v24 += 6;
      if ( v21 >= v22 )
        goto LABEL_27;
    }
    *((_DWORD *)this + 60) = v21;
    *((_DWORD *)this + 62) = v20[6 * v21] - v23;
    *((_DWORD *)this + 63) = *v24 - v20[6 * v21];
  }
LABEL_27:
  v5 = v3 - *((_DWORD *)this + 62);
  *((_BYTE *)this + 264) = v1 & 0xEF;
LABEL_7:
  v8 = *((_DWORD *)this + 63);
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  if ( v8 <= 0 )
  {
    if ( *((_DWORD *)this + 60) )
      *(_QWORD *)&v7 = LODWORD(FLOAT_1_0);
  }
  else
  {
    *(_QWORD *)&v7 = COERCE_UNSIGNED_INT((float)v5);
    *(float *)&v7 = *(float *)&v7 / (float)v8;
  }
  v9 = *((int *)this + 60);
  v10 = *(_QWORD *)this;
  if ( (int)v9 >= *((_DWORD *)this + 2) - 1 )
  {
    v12 = v10 + 24 * v9;
    v11 = v10 + 24LL * ((int)v9 - 1);
  }
  else
  {
    v11 = v10 + 24 * v9;
    v12 = v10 + 24LL * ((int)v9 + 1);
  }
  v13 = *(Components::Animations::StartingValueInput **)(v11 + 8);
  v14 = *(__int64 (__fastcall **)(Components::Animations::ConstantInput *, struct Components::Animations::Value *))(*(_QWORD *)v13 + 16LL);
  if ( v14 == Components::Animations::ConstantInput::GetValue )
  {
    v86 = (__m128d)*((_OWORD *)v13 + 1);
    v87 = (__m128d)*((_OWORD *)v13 + 2);
  }
  else
  {
    if ( v14 == Components::Animations::StartingValueInput::GetValue )
      Value = Components::Animations::StartingValueInput::GetValue(v13, (struct Components::Animations::Value *)&v86);
    else
      Value = v14(v13, (struct Components::Animations::Value *)&v86);
    if ( Value < 0 )
      return;
  }
  v15 = *(Components::Animations::ConstantInput **)(v12 + 8);
  v16 = *(__int64 (__fastcall **)(Components::Animations::ConstantInput *, struct Components::Animations::Value *))(*(_QWORD *)v15 + 16LL);
  if ( v16 == Components::Animations::ConstantInput::GetValue )
  {
    v88 = (__m128d)*((_OWORD *)v15 + 1);
    v89 = *((_OWORD *)v15 + 2);
  }
  else if ( (int)v16(v15, (struct Components::Animations::Value *)&v88) < 0 )
  {
    return;
  }
  v17 = *(float **)(v12 + 16);
  v18 = *(unsigned int *)(*(_QWORD *)(v11 + 8) + 12LL);
  v19 = **(__int64 (__fastcall ***)(int, int, int, int, __int64, __int64))v17;
  if ( v19 == Components::Animations::LinearInterpolation<Components::Animations::HslCoordinateSpace>::Compute )
  {
    Components::Animations::HslCoordinateSpace::Interpolate(
      v17,
      Components::Animations::LinearInterpolation<Components::Animations::HslCoordinateSpace>::Compute,
      &v86,
      &v88,
      &v90);
  }
  else if ( (char *)v19 == (char *)Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute )
  {
    v26 = 0;
    v27 = v17[4];
    v33 = 0LL;
    v28 = v17[6];
    v85 = v17[5];
    v29 = v17[7];
    v30 = 2;
    v31 = v28;
    v32 = 3;
    *(double *)&v33 = *(float *)&v7;
    v34 = DOUBLE_1_0;
    v35 = v27;
    v84 = v29;
    v36 = v33;
    do
    {
      v37 = 2;
      v38 = 1.0 - *(double *)&v36;
      v39 = DOUBLE_1_0;
      for ( i = 1.0 - *(double *)&v36; ; i = i * i )
      {
        if ( (v37 & 1) != 0 )
          v39 = v39 * i;
        v37 >>= 1;
        if ( !v37 )
          break;
      }
      v41 = *(double *)&v36;
      v42 = 2;
      v43 = DOUBLE_1_0;
      while ( 1 )
      {
        if ( (v42 & 1) != 0 )
          v43 = v43 * v41;
        v42 >>= 1;
        if ( !v42 )
          break;
        v41 = v41 * v41;
      }
      v44 = *(double *)&v36;
      v45 = 3;
      v46 = DOUBLE_1_0;
      while ( 1 )
      {
        if ( (v45 & 1) != 0 )
          v46 = v46 * v44;
        v45 >>= 1;
        if ( !v45 )
          break;
        v44 = v44 * v44;
      }
      v47 = 2;
      v48 = 1.0 - *(double *)&v36;
      v49 = v38 * 3.0 * v43;
      v50 = DOUBLE_1_0;
      v51 = v49 * v31 + v39 * 3.0 * *(double *)&v36 * v35 + v46;
      while ( 1 )
      {
        if ( (v47 & 1) != 0 )
          v50 = v50 * v48;
        v47 >>= 1;
        if ( !v47 )
          break;
        v48 = v48 * v48;
      }
      v52 = *(double *)&v36;
      v53 = 2;
      v54 = DOUBLE_1_0;
      while ( 1 )
      {
        if ( (v53 & 1) != 0 )
          v54 = v54 * v52;
        v53 >>= 1;
        if ( !v53 )
          break;
        v52 = v52 * v52;
      }
      v55 = v38 * 6.0 * *(double *)&v36 * (v31 - v35) + v50 * 3.0 * v35 + v54 * 3.0 * (1.0 - v31);
      if ( v55 >= -0.000001 && v55 <= 0.000001 )
        break;
      *((_QWORD *)&v56 + 1) = *((_QWORD *)&v36 + 1);
      v57 = (v51 - *(double *)&v33) / v55;
      *(double *)&v56 = *(double *)&v36 - v57;
      v58 = *(double *)&v36 - (*(double *)&v36 - v57);
      v36 = v56;
      if ( v58 >= -0.000001 && v58 <= 0.000001 )
        break;
      ++v26;
    }
    while ( v26 < 30 );
    v59 = 2;
    v60 = DOUBLE_1_0;
    for ( j = 1.0 - *(double *)&v36; ; j = j * j )
    {
      if ( (v59 & 1) != 0 )
        v60 = v60 * j;
      v59 >>= 1;
      if ( !v59 )
        break;
    }
    v62 = *(double *)&v36;
    v63 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v30 & 1) != 0 )
        v63 = v63 * v62;
      v30 >>= 1;
      if ( !v30 )
        break;
      v62 = v62 * v62;
    }
    for ( k = *(double *)&v36; ; k = k * k )
    {
      if ( (v32 & 1) != 0 )
        v34 = v34 * k;
      v32 >>= 1;
      if ( !v32 )
        break;
    }
    v65 = 0;
    v66 = 0LL;
    v67 = (1.0 - *(double *)&v36) * 3.0 * v63;
    v68 = 0LL;
    v92 = 0LL;
    v93 = 0LL;
    v68.m128_f32[0] = v67 * v84 + v60 * 3.0 * *(double *)&v36 * v85 + v34;
    v69 = _mm_shuffle_ps(v68, v68, 0);
    v70 = _mm_cvtps_pd(v69);
    do
    {
      v71 = *(__m128d *)((char *)&v88 + v66);
      v65 += 4;
      v72 = *(__m128d *)((char *)&v89 + v66);
      v66 += 32LL;
      *(__m128d *)((char *)&v90 + v66) = _mm_mul_pd(v71, v70);
      *(__m128d *)((char *)&v91 + v66) = _mm_mul_pd(v72, v70);
    }
    while ( v65 < 4 );
    v73 = 0LL;
    v74 = 0;
    v88 = 0LL;
    v75 = 0LL;
    v89 = 0LL;
    v73.m128_u64[0] = v69.m128_u64[0];
    v76 = _mm_cvtps_pd(_mm_sub_ps((__m128)_xmm, v73));
    do
    {
      v77 = *(__m128d *)((char *)&v86 + v75);
      v74 += 4;
      v78 = *(__m128d *)((char *)&v87 + v75);
      v75 += 32LL;
      *(__m128d *)((char *)&v86 + v75) = _mm_mul_pd(v77, v76);
      *(__m128d *)((char *)&v87 + v75) = _mm_mul_pd(v78, v76);
    }
    while ( v74 < 4 );
    v86 = 0LL;
    v79 = 0LL;
    v87 = 0LL;
    do
    {
      v6 += 4;
      v80 = *(__m128d *)((char *)&v89 + v79);
      v81 = *(__m128d *)((char *)&v93 + v79);
      *(__m128d *)((char *)&v86 + v79) = _mm_add_pd(*(__m128d *)((char *)&v88 + v79), *(__m128d *)((char *)&v92 + v79));
      *(__m128d *)((char *)&v87 + v79) = _mm_add_pd(v80, v81);
      v79 += 32LL;
    }
    while ( v6 < 4 );
    v90 = v86;
    v91 = v87;
  }
  else if ( (char *)v19 == (char *)Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute )
  {
    Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
      (__int64)v17,
      *(float *)&v7,
      v18,
      &v86,
      &v88,
      &v90);
  }
  else if ( (char *)v19 == (char *)Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute )
  {
    Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
      (__int64)v17,
      v7,
      v18,
      (__int64)&v86,
      (__int64)&v88,
      &v90);
  }
  else if ( (char *)v19 == (char *)Components::Animations::XamlInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute )
  {
    Components::Animations::XamlInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
      v17,
      *(float *)&v7,
      v18,
      (__int64)&v86,
      (__int64)&v88,
      (__int64)&v90);
  }
  else
  {
    v19((int)v17, (int)&v88, v18, (int)&v86, (__int64)&v88, (__int64)&v90);
  }
  if ( *((_BYTE *)this + 229) )
    *((_BYTE *)this + 264) &= ~2u;
  v25 = (__m128d *)*((_QWORD *)this + 29);
  *v25 = v90;
  v25[1] = v91;
}
