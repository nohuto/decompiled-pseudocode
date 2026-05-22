/*
 * XREFs of _lambda_d3375ebeae4829c9f30dd12a415fc5f7_::operator() @ 0x1800B82F4
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x1800B7EC0 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x1800B2340 (-GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4Tr.c)
 *     ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x1800B4794 (-XMMatrixRTInverse@DirectX@@YQ-AUXMMATRIX@1@U21@@Z.c)
 *     ??$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ?AW4OrthonormalMatrixValidationFailures@1@UXMMATRIX@1@@Z @ 0x1800BB4A8 (--$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ-AW4OrthonormalMatrixValidationFa.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5564f7cc49d1c2a4f9643868ea1ba7e4___ @ 0x1800BC5B4 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800BC5B4.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_d3375ebeae4829c9f30dd12a415fc5f7_::operator()(__int64 **a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rdx
  char v4; // si
  _DWORD *v5; // rdi
  float *v6; // r15
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // r14d
  _DWORD *v11; // rdi
  float *v12; // r15
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rax
  float **v17; // rdi
  __int64 v18; // rcx
  float *v19; // r14
  unsigned int v20; // r15d
  float *v21; // r12
  __int64 *v22; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __m128 v25; // xmm2
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 *v30; // rdx
  __int64 **v31; // rax
  __int64 v32; // rdx
  __m128 v33; // xmm0
  __m128 v34; // xmm2
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  __m128 v37; // xmm1
  __m128 v38; // xmm6
  __m128 v39; // xmm7
  __m128 v40; // xmm1
  _DWORD *v41; // rdx
  unsigned int *v42; // rcx
  __m128 v43; // xmm2
  unsigned int *v44; // rcx
  __m128 v45; // xmm4
  int *v46; // r15
  __int64 *v47; // r12
  __int64 *v48; // r13
  __int64 v49; // r14
  _DWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v54; // [rsp+68h] [rbp-A0h]
  __int64 *v55; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  __int64 v57; // [rsp+88h] [rbp-80h] BYREF
  int v58; // [rsp+90h] [rbp-78h]
  __int64 v59; // [rsp+98h] [rbp-70h]
  int v60; // [rsp+A0h] [rbp-68h]
  __int64 v61; // [rsp+A8h] [rbp-60h]
  int v62; // [rsp+B0h] [rbp-58h]
  __int64 v63; // [rsp+B8h] [rbp-50h]
  int v64; // [rsp+C0h] [rbp-48h]
  __int64 v65; // [rsp+C8h] [rbp-40h]
  int v66; // [rsp+D0h] [rbp-38h]
  __int64 v67; // [rsp+D8h] [rbp-30h]
  int v68; // [rsp+E0h] [rbp-28h]
  __int64 v69; // [rsp+E8h] [rbp-20h] BYREF

  v2 = 0;
  v3 = **a1;
  v4 = 1;
  v5 = (_DWORD *)(v3 + 72);
  v6 = (float *)(v3 + 72);
  v54 = *(_DWORD *)(v3 + 16);
  while ( (_fpclass(*v6) & 0x207) == 0 )
  {
    ++v2;
    ++v6;
    if ( v2 >= 3 )
      goto LABEL_6;
  }
  v7 = *a1;
  *v5 = dword_180110668;
  v5[1] = dword_18011066C;
  v8 = *v7;
  v5[2] = dword_180110670;
  *(_DWORD *)(v8 + 16) &= ~1u;
LABEL_6:
  v9 = **a1;
  if ( (*(_BYTE *)(v9 + 16) & 1) == 0 )
    *(_DWORD *)(v9 + 16) &= 0xFFFFFFF2;
  v10 = 0;
  v11 = (_DWORD *)**a1;
  v12 = (float *)(v11 + 9);
  while ( (_fpclass(*v12) & 0x207) == 0 )
  {
    ++v10;
    ++v12;
    if ( v10 >= 9 )
    {
      if ( !(unsigned int)DirectX::Details::ValidateOrthonormalRightHandedMatrix<1>() )
        goto LABEL_13;
      break;
    }
  }
  v13 = *a1;
  v11[9] = dword_18010E538;
  v11[10] = dword_18010E53C;
  v14 = *v13;
  v11[11] = dword_18010E540;
  v11[12] = dword_18010E544;
  v11[13] = dword_18010E548;
  v11[14] = dword_18010E54C;
  v11[15] = dword_18010E550;
  v11[16] = dword_18010E554;
  v11[17] = dword_18010E558;
  *(_DWORD *)(v14 + 16) &= ~2u;
LABEL_13:
  v15 = **a1;
  if ( (*(_BYTE *)(v15 + 16) & 2) == 0 )
    *(_DWORD *)(v15 + 16) &= 0xFFFFFF8D;
  v16 = *a1;
  v17 = (float **)&v57;
  v58 = 4;
  v60 = 16;
  v62 = 8;
  v18 = *v16;
  v64 = 32;
  v66 = 64;
  v68 = 128;
  v57 = v18 + 84;
  v59 = v18 + 96;
  v61 = v18 + 108;
  v63 = v18 + 120;
  v65 = v18 + 132;
  v67 = v18 + 144;
  do
  {
    v19 = *v17;
    v20 = 0;
    v21 = *v17;
    while ( (_fpclass(*v21) & 0x207) == 0 )
    {
      ++v20;
      ++v21;
      if ( v20 >= 3 )
        goto LABEL_21;
    }
    v22 = *a1;
    *(_DWORD *)v19 = dword_180110668;
    *((_DWORD *)v19 + 1) = dword_18011066C;
    v23 = *v22;
    LODWORD(v22) = ~*((_DWORD *)v17 + 2);
    *((_DWORD *)v19 + 2) = dword_180110670;
    *(_DWORD *)(v23 + 16) &= (unsigned int)v22;
LABEL_21:
    v17 += 2;
  }
  while ( v17 != (float **)&v69 );
  v24 = (_DWORD *)**a1;
  v25 = _mm_movelh_ps(
          _mm_unpacklo_ps((__m128)(unsigned int)v24[36], (__m128)(unsigned int)v24[37]),
          (__m128)(unsigned int)v24[38]);
  v26 = _mm_mul_ps(v25, v25);
  v27 = _mm_shuffle_ps(v26, v26, 153);
  if ( (float)((float)(v26.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 85).m128_f32[0]) > 1.0201 )
    v24[4] &= ~0x80u;
  if ( *(_DWORD *)a1[1] )
  {
    v28 = -1LL;
    v29 = 0LL;
  }
  else
  {
    v28 = *a1[2];
    v29 = *a1[3] - v28;
  }
  v30 = (__int64 *)*a1[4];
  if ( v30 )
  {
    *v30 = v29;
    v31 = (__int64 **)a1[4];
    if ( **v31 < 0 )
      **v31 = 0LL;
  }
  if ( (a1[5][14] & 0x10) == 0 )
  {
    v32 = **a1;
    if ( (*(_BYTE *)(v32 + 16) & 2) != 0 )
    {
      v33 = *(__m128 *)(v32 + 36);
      v34 = *(__m128 *)(v32 + 52);
      v35 = _mm_shuffle_ps(v34, v33, 244);
      v36 = _mm_and_ps(_mm_shuffle_ps(v34, *(__m128 *)(v32 + 68), 14), DirectX::g_XMMask3);
      v37 = _mm_and_ps(_mm_shuffle_ps(v35, v35, 82), DirectX::g_XMMask3);
      v38 = DirectX::XMMatrixRTInverse(
              COERCE_DOUBLE(v33.m128_u64[0] & DirectX::g_XMMask3),
              *(double *)v37.m128_u64,
              *(double *)v36.m128_u64);
      v39 = _mm_movelh_ps(
              _mm_unpacklo_ps((__m128)(unsigned int)dword_18010E560, (__m128)(unsigned int)dword_18010E564),
              (__m128)(unsigned int)dword_18010E568);
      v40 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v39, v39, 85), v37), _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v38)),
              _mm_mul_ps(_mm_shuffle_ps(v39, v39, 170), v36));
      v41[33] = v40.m128_i32[0];
      v41[34] = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
      v41[35] = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
      *(_DWORD *)(**a1 + 16) |= 0x40u;
    }
  }
  v42 = (unsigned int *)**a1;
  v43 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(_mm_unpacklo_ps((__m128)v42[21], (__m128)v42[22]), (__m128)v42[23]));
  v42[21] = v43.m128_i32[0];
  v42[22] = _mm_shuffle_ps(v43, v43, 85).m128_u32[0];
  v42[23] = _mm_shuffle_ps(v43, v43, 170).m128_u32[0];
  v44 = (unsigned int *)**a1;
  v45 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(_mm_unpacklo_ps((__m128)v44[24], (__m128)v44[25]), (__m128)v44[26]));
  v44[24] = v45.m128_i32[0];
  v44[25] = _mm_shuffle_ps(v45, v45, 85).m128_u32[0];
  v44[26] = _mm_shuffle_ps(v45, v45, 170).m128_u32[0];
  QueryPerformanceCounter(&PerformanceCount);
  v55 = a1[5];
  if ( (v55[14] & 0x40) == 0 || (*(_BYTE *)(**a1 + 156) & 1) == 0 )
    v4 = 0;
  v46 = (int *)a1[1];
  v47 = a1[3];
  v48 = a1[6];
  v49 = **a1;
  v50 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( v50 && *v50 )
  {
    HolographicDriverClientContinuousTrace::Instance();
    HolographicDriverClientContinuousTrace::GetPoseAtTime_(
      v51,
      (__int64)a1[5],
      (__int64)(v55 + 12),
      *v48,
      PerformanceCount.QuadPart,
      v28,
      *v47,
      *(_QWORD *)(v49 + 8),
      *v46,
      v49,
      v4,
      v54);
  }
  v52 = (__int64)(a1[5] + 12);
  v55 = *a1;
  return Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5564f7cc49d1c2a4f9643868ea1ba7e4___(
           v52,
           &v55);
}
