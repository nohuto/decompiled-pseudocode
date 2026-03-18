/*
 * XREFs of ?Compute@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x18008FE80
 * Callers:
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x1800905A0 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 */

__int64 __fastcall Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
        __int64 a1,
        float a2,
        __int64 a3,
        __m128d *a4,
        __m128d *a5,
        _OWORD *a6)
{
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  __m128d v11; // xmm1
  unsigned int v12; // edx
  __m128d *v13; // rax
  __m128 v14; // xmm5
  __m128 v15; // xmm3
  __m128d v16; // xmm2
  __m128d v17; // xmm0
  __m128d v18; // xmm1
  __m128d v19; // xmm0
  __m128 v20; // xmm1
  unsigned int v21; // edx
  __m128d *v22; // rax
  __m128d v23; // xmm3
  __m128d v24; // xmm0
  __m128d v25; // xmm1
  __m128d v26; // xmm0
  __int64 result; // rax
  __m128d v28; // xmm2
  __m128d v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // [rsp+28h] [rbp-39h] BYREF
  __int128 v32; // [rsp+38h] [rbp-29h] BYREF
  __int128 v33; // [rsp+48h] [rbp-19h] BYREF
  __int128 v34; // [rsp+58h] [rbp-9h] BYREF
  __int128 v35; // [rsp+68h] [rbp+7h]
  __int128 v36; // [rsp+78h] [rbp+17h]

  v8 = (int)floorf_0(a2 / *(float *)(a1 + 36));
  if ( a2 == 1.0 )
    --v8;
  v9 = v8 + *(_DWORD *)(a1 + 20);
  if ( a2 == 0.0 && *(_DWORD *)(a1 + 28) )
  {
    --v9;
  }
  else if ( a2 == 1.0 && *(_DWORD *)(a1 + 32) )
  {
    ++v9;
  }
  v10 = 0;
  v11 = (__m128d)COERCE_UNSIGNED_INT64((double)v9);
  v12 = 0;
  v13 = a5;
  v11.m128d_f64[0] = v11.m128d_f64[0] / (double)*(int *)(a1 + 16);
  v14 = _mm_cvtpd_ps(v11);
  v15 = _mm_shuffle_ps(v14, v14, 0);
  v16 = _mm_cvtps_pd(v15);
  v33 = 0LL;
  v34 = 0LL;
  do
  {
    v17 = *v13;
    v13 += 2;
    v12 += 4;
    v18 = _mm_mul_pd(v16, v17);
    v19 = v13[-1];
    *(__m128d *)((char *)v13 + (char *)&v33 - (char *)a5 - 32) = v18;
    *(__m128d *)((char *)v13 + (char *)&v34 - (char *)a5 - 32) = _mm_mul_pd(v19, v16);
  }
  while ( v12 < 4 );
  v20 = 0LL;
  v31 = 0LL;
  v21 = 0;
  v22 = a4;
  v32 = 0LL;
  v20.m128_u64[0] = v15.m128_u64[0];
  v23 = _mm_cvtps_pd(_mm_sub_ps((__m128)_xmm, v20));
  do
  {
    v24 = *v22;
    v22 += 2;
    v21 += 4;
    v25 = _mm_mul_pd(v23, v24);
    v26 = v22[-1];
    *(__m128d *)((char *)v22 + (char *)&v31 - (char *)a4 - 32) = v25;
    *(__m128d *)((char *)v22 + (char *)&v32 - (char *)a4 - 32) = _mm_mul_pd(v26, v23);
  }
  while ( v21 < 4 );
  v35 = 0LL;
  result = 0LL;
  v36 = 0LL;
  do
  {
    v10 += 4;
    v28 = *(__m128d *)((char *)&v32 + result);
    v29 = *(__m128d *)((char *)&v34 + result);
    *(__int128 *)((char *)&v35 + result) = (__int128)_mm_add_pd(
                                                       *(__m128d *)((char *)&v31 + result),
                                                       *(__m128d *)((char *)&v33 + result));
    *(__int128 *)((char *)&v36 + result) = (__int128)_mm_add_pd(v28, v29);
    result += 32LL;
  }
  while ( v10 < 4 );
  v30 = v36;
  *a6 = v35;
  a6[1] = v30;
  return result;
}
