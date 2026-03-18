/*
 * XREFs of ?Compute@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180059DF0
 * Callers:
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x1800905A0 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
        __int64 a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  unsigned int v6; // ecx
  __m128d *v7; // rax
  double v8; // xmm3_8
  unsigned int v9; // edx
  __m128 v10; // xmm1
  __m128 v11; // xmm1
  unsigned int v12; // edx
  __m128d *v13; // rax
  __m128d v14; // xmm3
  __int64 result; // rax
  __int128 v16; // xmm1
  __int128 v17; // [rsp+0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+10h] [rbp-60h]
  __int64 v19; // [rsp+18h] [rbp-58h]
  __int128 v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+38h] [rbp-38h]
  __int128 v23; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+50h] [rbp-20h]

  v6 = 0;
  v7 = (__m128d *)&v20;
  v20 = 0uLL;
  *(_QWORD *)&v8 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0).m128_u64[0];
  v9 = 0;
  v21 = 0LL;
  v22 = 0LL;
  do
  {
    v10 = 0LL;
    *(double *)v10.m128_u64 = v8;
    v9 += 2;
    *v7 = _mm_mul_pd(_mm_cvtps_pd(v10), *(__m128d *)((char *)v7 + a5 - (_QWORD)&v20));
    ++v7;
  }
  while ( v9 < 4 );
  v17 = 0uLL;
  v11 = 0LL;
  *(double *)v11.m128_u64 = v8;
  v18 = 0LL;
  v19 = 0LL;
  v12 = 0;
  v13 = (__m128d *)&v17;
  v14 = _mm_cvtps_pd(_mm_sub_ps((__m128)_xmm, v11));
  do
  {
    v12 += 2;
    *v13 = _mm_mul_pd(*(__m128d *)((char *)v13 + a4 - (_QWORD)&v17), v14);
    ++v13;
  }
  while ( v12 < 4 );
  v23 = 0uLL;
  result = 0LL;
  v24 = 0uLL;
  do
  {
    v6 += 2;
    *(__int128 *)((char *)&v23 + result) = (__int128)_mm_add_pd(
                                                       *(__m128d *)((char *)&v17 + result),
                                                       *(__m128d *)((char *)&v20 + result));
    result += 16LL;
  }
  while ( v6 < 4 );
  v16 = v24;
  *a6 = v23;
  a6[1] = v16;
  return result;
}
