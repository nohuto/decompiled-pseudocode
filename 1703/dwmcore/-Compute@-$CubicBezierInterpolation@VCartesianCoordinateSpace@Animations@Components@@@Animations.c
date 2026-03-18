/*
 * XREFs of ?Compute@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180090110
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
        float *a1,
        float a2,
        __int64 a3,
        __m128d *a4,
        __m128d *a5,
        _OWORD *a6)
{
  unsigned int v6; // r10d
  float v7; // xmm10_4
  double v8; // xmm7_8
  int v9; // r8d
  double v10; // xmm15_8
  double v11; // xmm0_8
  unsigned int v12; // ecx
  unsigned int v13; // edx
  double v14; // xmm10_8
  __int128 v15; // xmm12
  __int128 v16; // xmm6
  unsigned int v17; // eax
  double v18; // xmm3_8
  double v19; // xmm4_8
  double i; // xmm0_8
  double v21; // xmm1_8
  unsigned int v22; // eax
  double v23; // xmm5_8
  double v24; // xmm1_8
  unsigned int v25; // eax
  double v26; // xmm0_8
  unsigned int v27; // eax
  double v28; // xmm1_8
  double v29; // xmm2_8
  double v30; // xmm4_8
  double v31; // xmm2_8
  double v32; // xmm1_8
  unsigned int v33; // eax
  double v34; // xmm0_8
  double v35; // xmm3_8
  __int128 v36; // xmm0
  double v37; // xmm2_8
  double v38; // xmm1_8
  unsigned int v39; // eax
  double v40; // xmm3_8
  double j; // xmm0_8
  double v42; // xmm1_8
  double v43; // xmm4_8
  double k; // xmm0_8
  unsigned int v45; // ecx
  __m128d *v46; // rax
  double v47; // xmm2_8
  __m128 v48; // xmm4
  __m128 v49; // xmm3
  __m128d v50; // xmm2
  __m128d v51; // xmm0
  __m128d v52; // xmm1
  __m128 v53; // xmm1
  unsigned int v54; // ecx
  __m128d *v55; // rax
  __m128d v56; // xmm3
  __m128d v57; // xmm0
  __m128d v58; // xmm1
  __m128d v59; // xmm0
  __int64 result; // rax
  __m128d v61; // xmm2
  __m128d v62; // xmm0
  __int128 v63; // xmm1
  double v64; // [rsp+8h] [rbp-100h]
  double v65; // [rsp+10h] [rbp-F8h]
  __int128 v66; // [rsp+18h] [rbp-F0h] BYREF
  __int128 v67; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v68; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v69; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v70; // [rsp+58h] [rbp-B0h]
  __int128 v71; // [rsp+68h] [rbp-A0h]

  v15 = 0LL;
  v6 = 0;
  v7 = a1[4];
  v8 = DOUBLE_1_0;
  v9 = 0;
  v10 = a1[6];
  v65 = a1[5];
  v11 = a1[7];
  v12 = 2;
  v13 = 3;
  v14 = v7;
  *(double *)&v15 = a2;
  v64 = v11;
  v16 = v15;
  do
  {
    v17 = 2;
    v18 = 1.0 - *(double *)&v16;
    v19 = DOUBLE_1_0;
    for ( i = 1.0 - *(double *)&v16; ; i = i * i )
    {
      if ( (v17 & 1) != 0 )
        v19 = v19 * i;
      v17 >>= 1;
      if ( !v17 )
        break;
    }
    v21 = *(double *)&v16;
    v22 = 2;
    v23 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v22 & 1) != 0 )
        v23 = v23 * v21;
      v22 >>= 1;
      if ( !v22 )
        break;
      v21 = v21 * v21;
    }
    v24 = *(double *)&v16;
    v25 = 3;
    v26 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v25 & 1) != 0 )
        v26 = v26 * v24;
      v25 >>= 1;
      if ( !v25 )
        break;
      v24 = v24 * v24;
    }
    v27 = 2;
    v28 = 1.0 - *(double *)&v16;
    v29 = v18 * 3.0 * v23 * v10 + v19 * 3.0 * *(double *)&v16 * v14;
    v30 = DOUBLE_1_0;
    v31 = v29 + v26;
    while ( 1 )
    {
      if ( (v27 & 1) != 0 )
        v30 = v30 * v28;
      v27 >>= 1;
      if ( !v27 )
        break;
      v28 = v28 * v28;
    }
    v32 = *(double *)&v16;
    v33 = 2;
    v34 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v33 & 1) != 0 )
        v34 = v34 * v32;
      v33 >>= 1;
      if ( !v33 )
        break;
      v32 = v32 * v32;
    }
    v35 = v18 * 6.0 * *(double *)&v16 * (v10 - v14) + v30 * 3.0 * v14 + v34 * 3.0 * (1.0 - v10);
    if ( v35 >= -0.000001 && v35 <= 0.000001 )
      break;
    *((_QWORD *)&v36 + 1) = *((_QWORD *)&v16 + 1);
    v37 = (v31 - *(double *)&v15) / v35;
    *(double *)&v36 = *(double *)&v16 - v37;
    v38 = *(double *)&v16 - (*(double *)&v16 - v37);
    v16 = v36;
    if ( v38 >= -0.000001 && v38 <= 0.000001 )
      break;
    ++v9;
  }
  while ( v9 < 30 );
  v39 = 2;
  v40 = DOUBLE_1_0;
  for ( j = 1.0 - *(double *)&v16; ; j = j * j )
  {
    if ( (v39 & 1) != 0 )
      v40 = v40 * j;
    v39 >>= 1;
    if ( !v39 )
      break;
  }
  v42 = *(double *)&v16;
  v43 = DOUBLE_1_0;
  while ( 1 )
  {
    if ( (v12 & 1) != 0 )
      v43 = v43 * v42;
    v12 >>= 1;
    if ( !v12 )
      break;
    v42 = v42 * v42;
  }
  for ( k = *(double *)&v16; ; k = k * k )
  {
    if ( (v13 & 1) != 0 )
      v8 = v8 * k;
    v13 >>= 1;
    if ( !v13 )
      break;
  }
  v45 = 0;
  v46 = a5;
  v47 = (1.0 - *(double *)&v16) * 3.0 * v43;
  v48 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v48.m128_f32[0] = v47 * v64 + v40 * 3.0 * *(double *)&v16 * v65 + v8;
  v49 = _mm_shuffle_ps(v48, v48, 0);
  v50 = _mm_cvtps_pd(v49);
  do
  {
    v51 = *v46;
    v45 += 4;
    v52 = v46[1];
    v46 += 2;
    *(__m128d *)((char *)v46 + (char *)&v68 - (char *)a5 - 32) = _mm_mul_pd(v51, v50);
    *(__m128d *)((char *)v46 + (char *)&v69 - (char *)a5 - 32) = _mm_mul_pd(v52, v50);
  }
  while ( v45 < 4 );
  v53 = 0LL;
  v66 = 0LL;
  v54 = 0;
  v55 = a4;
  v67 = 0LL;
  v53.m128_u64[0] = v49.m128_u64[0];
  v56 = _mm_cvtps_pd(_mm_sub_ps((__m128)_xmm, v53));
  do
  {
    v57 = *v55;
    v55 += 2;
    v54 += 4;
    v58 = _mm_mul_pd(v56, v57);
    v59 = v55[-1];
    *(__m128d *)((char *)v55 + (char *)&v66 - (char *)a4 - 32) = v58;
    *(__m128d *)((char *)v55 + (char *)&v67 - (char *)a4 - 32) = _mm_mul_pd(v59, v56);
  }
  while ( v54 < 4 );
  v70 = 0LL;
  result = 0LL;
  v71 = 0LL;
  do
  {
    v6 += 4;
    v61 = *(__m128d *)((char *)&v67 + result);
    v62 = *(__m128d *)((char *)&v69 + result);
    *(__int128 *)((char *)&v70 + result) = (__int128)_mm_add_pd(
                                                       *(__m128d *)((char *)&v66 + result),
                                                       *(__m128d *)((char *)&v68 + result));
    *(__int128 *)((char *)&v71 + result) = (__int128)_mm_add_pd(v61, v62);
    result += 32LL;
  }
  while ( v6 < 4 );
  v63 = v71;
  *a6 = v70;
  a6[1] = v63;
  return result;
}
