/*
 * XREFs of ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18006566C
 * Callers:
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800654D0 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x180065C44 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     sqrtf_0 @ 0x1800CC365 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
float *__fastcall MPCSpatialGestureRecognizerHandler::CalculatePathingDelta(
        MPCSpatialGestureRecognizerHandler *a1,
        float *a2,
        __int64 a3)
{
  int v6; // eax
  int updated; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  float v11; // xmm0_4
  _OWORD *v12; // rax
  char *v13; // rcx
  __int64 v14; // rdx
  __m128 v15; // xmm6
  __m128 v16; // xmm2
  float v17; // xmm4_4
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  __m128 v21; // xmm3
  __m128 v22; // xmm5
  __m128 v23; // xmm2
  __m128 v24; // xmm6
  __m128 v25; // xmm1
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  float v30; // [rsp+28h] [rbp-E0h] BYREF
  float v31; // [rsp+2Ch] [rbp-DCh]
  __int64 v32; // [rsp+30h] [rbp-D8h]
  _QWORD v33[2]; // [rsp+38h] [rbp-D0h] BYREF
  char v34; // [rsp+48h] [rbp-C0h] BYREF
  float v35; // [rsp+88h] [rbp-80h]
  float v36; // [rsp+8Ch] [rbp-7Ch]
  float v37; // [rsp+90h] [rbp-78h]
  float v38; // [rsp+98h] [rbp-70h]
  float v39; // [rsp+9Ch] [rbp-6Ch]
  float v40; // [rsp+A0h] [rbp-68h]
  float v41; // [rsp+A8h] [rbp-60h]
  float v42; // [rsp+ACh] [rbp-5Ch]
  float v43; // [rsp+B0h] [rbp-58h]
  float v44; // [rsp+B8h] [rbp-50h]
  float v45; // [rsp+BCh] [rbp-4Ch]
  float v46; // [rsp+C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+C70h] [rbp+B68h]
  __int64 v48; // [rsp+C88h] [rbp+B80h] BYREF
  int v49; // [rsp+C90h] [rbp+B88h] BYREF

  v33[1] = -2LL;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0.0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v49);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x208,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( v49 == 1 )
  {
    updated = MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(a1, *((_QWORD *)a1 + 20));
    if ( updated < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x20C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)updated);
      __debugbreak();
    }
    v48 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a3 + 56LL))(a3, *((_QWORD *)a1 + 16), &v48);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x20F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = v48;
    if ( v48 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v48 + 48LL))(v48, a2);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x212,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      v9 = v48;
    }
    if ( v9 )
    {
      v48 = 0LL;
LABEL_23:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else if ( v49 == 3 )
  {
    v33[0] = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD *))a3)(a3, &GUID_dbedfb55_5c2b_443b_a82d_10a749076fc8, v33) >= 0 )
    {
      LOBYTE(v48) = 0;
      if ( (*(int (__fastcall **)(_QWORD, float *, __int64 *))(*(_QWORD *)v33[0] + 48LL))(v33[0], &v30, &v48) >= 0 )
      {
        if ( (_BYTE)v48 )
        {
          v11 = v30 * 0.0174532925199433;
          *a2 = v11;
          a2[1] = v31 * 0.0174532925199433;
          a2[2] = 0.0;
        }
      }
    }
    MPCHolographicInputManager::GetInstance();
    v13 = &v34;
    v14 = 23LL;
    do
    {
      *(_OWORD *)v13 = *v12;
      *((_OWORD *)v13 + 1) = v12[1];
      *((_OWORD *)v13 + 2) = v12[2];
      *((_OWORD *)v13 + 3) = v12[3];
      *((_OWORD *)v13 + 4) = v12[4];
      *((_OWORD *)v13 + 5) = v12[5];
      *((_OWORD *)v13 + 6) = v12[6];
      v13 += 128;
      *((_OWORD *)v13 - 1) = v12[7];
      v12 += 8;
      --v14;
    }
    while ( v14 );
    *(_OWORD *)v13 = *v12;
    *((_OWORD *)v13 + 1) = v12[1];
    *((_OWORD *)v13 + 2) = v12[2];
    *((_OWORD *)v13 + 3) = v12[3];
    *((_OWORD *)v13 + 4) = v12[4];
    *((_OWORD *)v13 + 5) = v12[5];
    *((_OWORD *)v13 + 6) = v12[6];
    v15 = (__m128)*(unsigned int *)a2;
    v16 = v15;
    v16.m128_f32[0] = (float)((float)((float)(v15.m128_f32[0] * v36) + (float)(a2[1] * v39)) + (float)(a2[2] * v42))
                    + v45;
    v15.m128_f32[0] = (float)((float)((float)(v15.m128_f32[0] * v35) + (float)(a2[1] * v38)) + (float)(a2[2] * v41))
                    + v44;
    *(float *)&v32 = (float)((float)((float)(*a2 * v37) + (float)(a2[1] * v40)) + (float)(a2[2] * v43)) + v46;
    *(_QWORD *)a2 = _mm_unpacklo_ps(v15, v16).m128_u64[0];
    *((_DWORD *)a2 + 2) = v32;
    v9 = v33[0];
    if ( v33[0] )
    {
      v33[0] = 0LL;
      goto LABEL_23;
    }
  }
  v17 = sqrtf_0((float)((float)(*a2 * *a2) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]));
  if ( v17 > 0.037999999 )
  {
    v18 = _mm_movelh_ps(
            _mm_unpacklo_ps((__m128)*(unsigned int *)a2, (__m128)*((unsigned int *)a2 + 1)),
            (__m128)*((unsigned int *)a2 + 2));
    v19 = _mm_mul_ps(v18, v18);
    v20 = _mm_shuffle_ps(v19, v19, 102);
    v19.m128_f32[0] = (float)(v19.m128_f32[0] + v20.m128_f32[0]) + _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
    v21 = _mm_div_ps(v18, _mm_sqrt_ps(_mm_shuffle_ps(v19, v19, 0)));
    v30 = v21.m128_f32[0];
    v31 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
    v22 = (__m128)v21.m128_u32[0];
    v23 = (__m128)v21.m128_u32[0];
    v23.m128_f32[0] = v21.m128_f32[0] * 0.037999999;
    v24 = (__m128)LODWORD(v31);
    v25 = (__m128)LODWORD(v31);
    v25.m128_f32[0] = v31 * 0.037999999;
    v26 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
    *(float *)&v32 = v26 * 0.037999999;
    *(_QWORD *)a2 = _mm_unpacklo_ps(v23, v25).m128_u64[0];
    *((_DWORD *)a2 + 2) = v32;
    if ( v49 == 3 )
      v27 = FLOAT_0_5;
    else
      v27 = FLOAT_2_1500001;
    v28 = v17 - 0.037999999;
    v22.m128_f32[0] = (float)((float)(v22.m128_f32[0] * v28) * v27) + *a2;
    v24.m128_f32[0] = (float)((float)(v24.m128_f32[0] * v28) * v27) + a2[1];
    *(float *)&v32 = (float)((float)(v26 * v28) * v27) + a2[2];
    *(_QWORD *)a2 = _mm_unpacklo_ps(v22, v24).m128_u64[0];
    *((_DWORD *)a2 + 2) = v32;
  }
  return a2;
}
