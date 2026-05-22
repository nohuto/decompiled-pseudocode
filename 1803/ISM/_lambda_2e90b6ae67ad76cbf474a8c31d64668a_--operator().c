/*
 * XREFs of _lambda_2e90b6ae67ad76cbf474a8c31d64668a_::operator() @ 0x1800C7D00
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x1800C78E0 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x1800BAAB8 (-XMMatrixRTInverse@DirectX@@YQ-AUXMMATRIX@1@U21@@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x1800BEAE0 (-GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4Tr.c)
 *     ??$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ?AW4OrthonormalMatrixValidationFailures@1@UXMMATRIX@1@@Z @ 0x1800CC6B8 (--$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ-AW4OrthonormalMatrixValidationFa.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_a73491eff03976fcb51e086819273d5b___ @ 0x1800CD150 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800CD150.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_2e90b6ae67ad76cbf474a8c31d64668a_::operator()(__int64 **a1)
{
  unsigned int v2; // edi
  _DWORD *v3; // r14
  char v4; // si
  float *v5; // r15
  _DWORD *v6; // rdi
  unsigned int v7; // r14d
  float *v8; // r15
  __int64 *v9; // r10
  __int64 v10; // rcx
  float **v11; // rdi
  float *v12; // r14
  unsigned int v13; // r15d
  float *v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __m128 v18; // xmm2
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 *v23; // rdx
  __int64 **v24; // rax
  __int64 v25; // rdx
  __m128 v26; // xmm0
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm1
  __m128 v31; // xmm6
  __m128 v32; // xmm7
  __m128 v33; // xmm1
  _DWORD *v34; // rdx
  __int64 v35; // rcx
  __m128 v36; // xmm2
  __int64 v37; // rcx
  __m128 v38; // xmm4
  __int64 *v39; // r14
  __int64 v40; // r14
  int *v41; // r15
  __int64 *v42; // r12
  __int64 *v43; // r13
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v48; // [rsp+68h] [rbp-A0h]
  __int64 *v49; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  __int64 v51; // [rsp+88h] [rbp-80h] BYREF
  int v52; // [rsp+90h] [rbp-78h]
  __int64 v53; // [rsp+98h] [rbp-70h]
  int v54; // [rsp+A0h] [rbp-68h]
  __int64 v55; // [rsp+A8h] [rbp-60h]
  int v56; // [rsp+B0h] [rbp-58h]
  __int64 v57; // [rsp+B8h] [rbp-50h]
  int v58; // [rsp+C0h] [rbp-48h]
  __int64 v59; // [rsp+C8h] [rbp-40h]
  int v60; // [rsp+D0h] [rbp-38h]
  __int64 v61; // [rsp+D8h] [rbp-30h]
  int v62; // [rsp+E0h] [rbp-28h]
  __int64 v63; // [rsp+E8h] [rbp-20h] BYREF

  v2 = 0;
  v3 = (_DWORD *)**a1;
  v4 = 1;
  v5 = (float *)(v3 + 18);
  v48 = v3[4];
  while ( (_fpclass(*v5) & 0x207) == 0 )
  {
    ++v2;
    ++v5;
    if ( v2 >= 3 )
      goto LABEL_6;
  }
  *(_DWORD *)(**a1 + 16) &= ~1u;
LABEL_6:
  v6 = (_DWORD *)**a1;
  if ( (v6[4] & 1) == 0 )
  {
    v3[18] = dword_1801369C0;
    v3[19] = dword_1801369C4;
    v3[20] = dword_1801369C8;
    v6[4] &= 0xFFFFFFF2;
    v6 = (_DWORD *)**a1;
  }
  v7 = 0;
  v8 = (float *)(v6 + 9);
  do
  {
    if ( (_fpclass(*v8) & 0x207) != 0 )
    {
      v9 = *a1;
      goto LABEL_14;
    }
    ++v7;
    ++v8;
  }
  while ( v7 < 9 );
  if ( !(unsigned int)DirectX::Details::ValidateOrthonormalRightHandedMatrix<1>() )
    goto LABEL_15;
LABEL_14:
  *(_DWORD *)(*v9 + 16) &= ~2u;
LABEL_15:
  v10 = **a1;
  if ( (*(_BYTE *)(v10 + 16) & 2) == 0 )
  {
    v6[9] = dword_180135808;
    v6[10] = dword_18013580C;
    v6[11] = dword_180135810;
    v6[12] = dword_180135814;
    v6[13] = dword_180135818;
    v6[14] = dword_18013581C;
    v6[15] = dword_180135820;
    v6[16] = dword_180135824;
    v6[17] = dword_180135828;
    *(_DWORD *)(v10 + 16) &= 0xFFFFFF8D;
    v10 = **a1;
  }
  v52 = 4;
  v51 = v10 + 84;
  v11 = (float **)&v51;
  v54 = 16;
  v53 = v10 + 96;
  v55 = v10 + 108;
  v57 = v10 + 120;
  v59 = v10 + 132;
  v61 = v10 + 144;
  v56 = 8;
  v58 = 32;
  v60 = 64;
  v62 = 128;
  do
  {
    v12 = *v11;
    v13 = 0;
    v14 = *v11;
    while ( (_fpclass(*v14) & 0x207) == 0 )
    {
      ++v13;
      ++v14;
      if ( v13 >= 3 )
        goto LABEL_23;
    }
    v15 = *a1;
    *(_DWORD *)v12 = dword_1801369C0;
    *((_DWORD *)v12 + 1) = dword_1801369C4;
    v16 = *v15;
    LODWORD(v15) = ~*((_DWORD *)v11 + 2);
    *((_DWORD *)v12 + 2) = dword_1801369C8;
    *(_DWORD *)(v16 + 16) &= (unsigned int)v15;
LABEL_23:
    v11 += 2;
  }
  while ( v11 != (float **)&v63 );
  v17 = **a1;
  v18 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(v17 + 144), (__m128)*(unsigned int *)(v17 + 152));
  v19 = _mm_mul_ps(v18, v18);
  v20 = _mm_shuffle_ps(v19, v19, 153);
  if ( (float)((float)(v19.m128_f32[0] + v20.m128_f32[0]) + _mm_shuffle_ps(v20, v20, 85).m128_f32[0]) > 1.0201 )
    *(_DWORD *)(v17 + 16) &= ~0x80u;
  if ( *(_DWORD *)a1[1] )
  {
    v21 = -1LL;
    v22 = 0LL;
  }
  else
  {
    v21 = *a1[2];
    v22 = *a1[3] - v21;
  }
  v23 = (__int64 *)*a1[4];
  if ( v23 )
  {
    *v23 = v22;
    v24 = (__int64 **)a1[4];
    if ( **v24 < 0 )
      **v24 = 0LL;
  }
  if ( (a1[5][13] & 0x10) == 0 )
  {
    v25 = **a1;
    if ( (*(_BYTE *)(v25 + 16) & 2) != 0 )
    {
      v26 = *(__m128 *)(v25 + 36);
      v27 = *(__m128 *)(v25 + 52);
      v28 = _mm_shuffle_ps(v27, v26, 244);
      v29 = _mm_and_ps(_mm_shuffle_ps(v27, *(__m128 *)(v25 + 68), 14), DirectX::g_XMMask3);
      v30 = _mm_and_ps(_mm_shuffle_ps(v28, v28, 82), DirectX::g_XMMask3);
      v31 = DirectX::XMMatrixRTInverse(
              COERCE_DOUBLE(v26.m128_u64[0] & DirectX::g_XMMask3),
              *(double *)v30.m128_u64,
              *(double *)v29.m128_u64);
      v32 = _mm_movelh_ps((__m128)(unsigned __int64)qword_180135830, (__m128)(unsigned int)dword_180135838);
      v33 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v30), _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31)),
              _mm_mul_ps(_mm_shuffle_ps(v32, v32, 170), v29));
      v34[33] = v33.m128_i32[0];
      v34[34] = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
      v34[35] = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
      *(_DWORD *)(**a1 + 16) |= 0x40u;
    }
  }
  v35 = **a1;
  v36 = _mm_sub_ps(
          (__m128)0LL,
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(v35 + 84), (__m128)*(unsigned int *)(v35 + 92)));
  *(_DWORD *)(v35 + 84) = v36.m128_i32[0];
  *(_DWORD *)(v35 + 88) = _mm_shuffle_ps(v36, v36, 85).m128_u32[0];
  *(_DWORD *)(v35 + 92) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
  v37 = **a1;
  v38 = _mm_sub_ps(
          (__m128)0LL,
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(v37 + 96), (__m128)*(unsigned int *)(v37 + 104)));
  *(_DWORD *)(v37 + 96) = v38.m128_i32[0];
  *(_DWORD *)(v37 + 100) = _mm_shuffle_ps(v38, v38, 85).m128_u32[0];
  *(_DWORD *)(v37 + 104) = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
  QueryPerformanceCounter(&PerformanceCount);
  v39 = *a1;
  v49 = a1[5];
  if ( (v49[13] & 0x40) == 0 || (*(_BYTE *)(*v39 + 156) & 1) == 0 )
    v4 = 0;
  v40 = *v39;
  v41 = (int *)a1[1];
  v42 = a1[3];
  v43 = a1[6];
  v44 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( v44 && *v44 )
  {
    HolographicDriverClientContinuousTrace::Instance();
    HolographicDriverClientContinuousTrace::GetPoseAtTime_(
      v45,
      (__int64)a1[5],
      (__int64)(v49 + 11),
      *v43,
      PerformanceCount.QuadPart,
      v21,
      *v42,
      *(_QWORD *)(v40 + 8),
      *v41,
      v40,
      v4,
      v48);
  }
  v46 = (__int64)(a1[5] + 11);
  v49 = *a1;
  return Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_a73491eff03976fcb51e086819273d5b___(
           v46,
           &v49);
}
