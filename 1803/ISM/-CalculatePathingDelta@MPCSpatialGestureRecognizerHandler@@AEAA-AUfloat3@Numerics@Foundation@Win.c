/*
 * XREFs of ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18005CA10
 * Callers:
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x18005C7E0 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x18005CFC8 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     sqrtf_0 @ 0x1800E3205 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  float v12; // xmm0_4
  _OWORD *v13; // rax
  char *v14; // rcx
  __int64 v15; // rdx
  __m128 v16; // xmm6
  __m128 v17; // xmm2
  float v18; // xmm4_4
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm3
  __m128 v23; // xmm5
  __m128 v24; // xmm2
  __m128 v25; // xmm6
  __m128 v26; // xmm1
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm4_4
  float v31; // [rsp+28h] [rbp-E0h] BYREF
  float v32; // [rsp+2Ch] [rbp-DCh]
  __int64 v33; // [rsp+30h] [rbp-D8h]
  _QWORD v34[2]; // [rsp+38h] [rbp-D0h] BYREF
  char v35; // [rsp+48h] [rbp-C0h] BYREF
  float v36; // [rsp+88h] [rbp-80h]
  float v37; // [rsp+8Ch] [rbp-7Ch]
  float v38; // [rsp+90h] [rbp-78h]
  float v39; // [rsp+98h] [rbp-70h]
  float v40; // [rsp+9Ch] [rbp-6Ch]
  float v41; // [rsp+A0h] [rbp-68h]
  float v42; // [rsp+A8h] [rbp-60h]
  float v43; // [rsp+ACh] [rbp-5Ch]
  float v44; // [rsp+B0h] [rbp-58h]
  float v45; // [rsp+B8h] [rbp-50h]
  float v46; // [rsp+BCh] [rbp-4Ch]
  float v47; // [rsp+C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+820h] [rbp+718h]
  __int64 v49; // [rsp+838h] [rbp+730h] BYREF
  int v50; // [rsp+840h] [rbp+738h] BYREF

  v34[1] = -2LL;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0.0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v50);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x228,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( v50 == 1 )
  {
    updated = MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(a1, *((_QWORD *)a1 + 20));
    if ( updated < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x22C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)updated);
    }
    else
    {
      v49 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a3 + 56LL))(
             a3,
             *((_QWORD *)a1 + 16),
             &v49);
      v9 = retaddr;
      if ( v8 >= 0 )
      {
        v10 = v49;
        if ( v49 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v49 + 48LL))(v49, a2);
          if ( v11 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x232,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturere"
                       "cognizerhandler.cpp",
              (const char *)(unsigned int)v11);
            JUMPOUT(0x18005CE5CLL);
          }
          v10 = v49;
        }
        if ( v10 )
        {
          v49 = 0LL;
LABEL_19:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          goto LABEL_20;
        }
        goto LABEL_20;
      }
    }
    wil::details::in1diag3::FailFast_Hr(
      v9,
      (void *)0x22F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  if ( v50 == 3 )
  {
    v34[0] = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD *))a3)(a3, &GUID_dbedfb55_5c2b_443b_a82d_10a749076fc8, v34) >= 0 )
    {
      LOBYTE(v49) = 0;
      if ( (*(int (__fastcall **)(_QWORD, float *, __int64 *))(*(_QWORD *)v34[0] + 48LL))(v34[0], &v31, &v49) >= 0 )
      {
        if ( (_BYTE)v49 )
        {
          v12 = v31 * 0.0174532925199433;
          *a2 = v12;
          a2[1] = v32 * 0.0174532925199433;
          a2[2] = 0.0;
        }
      }
    }
    MPCHolographicInputManager::GetInstance();
    v14 = &v35;
    v15 = 15LL;
    do
    {
      *(_OWORD *)v14 = *v13;
      *((_OWORD *)v14 + 1) = v13[1];
      *((_OWORD *)v14 + 2) = v13[2];
      *((_OWORD *)v14 + 3) = v13[3];
      *((_OWORD *)v14 + 4) = v13[4];
      *((_OWORD *)v14 + 5) = v13[5];
      *((_OWORD *)v14 + 6) = v13[6];
      v14 += 128;
      *((_OWORD *)v14 - 1) = v13[7];
      v13 += 8;
      --v15;
    }
    while ( v15 );
    *(_OWORD *)v14 = *v13;
    *((_QWORD *)v14 + 2) = *((_QWORD *)v13 + 2);
    v16 = (__m128)*(unsigned int *)a2;
    v17 = v16;
    v17.m128_f32[0] = (float)((float)((float)(v16.m128_f32[0] * v37) + (float)(a2[1] * v40)) + (float)(a2[2] * v43))
                    + v46;
    v16.m128_f32[0] = (float)((float)((float)(v16.m128_f32[0] * v36) + (float)(a2[1] * v39)) + (float)(a2[2] * v42))
                    + v45;
    *(float *)&v33 = (float)((float)((float)(*a2 * v38) + (float)(a2[1] * v41)) + (float)(a2[2] * v44)) + v47;
    *(_QWORD *)a2 = _mm_unpacklo_ps(v16, v17).m128_u64[0];
    *((_DWORD *)a2 + 2) = v33;
    v10 = v34[0];
    if ( v34[0] )
    {
      v34[0] = 0LL;
      goto LABEL_19;
    }
  }
LABEL_20:
  v18 = sqrtf_0((float)((float)(*a2 * *a2) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]));
  if ( v18 > 0.037999999 )
  {
    v19 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a2, (__m128)*((unsigned int *)a2 + 2));
    v20 = _mm_mul_ps(v19, v19);
    v21 = _mm_shuffle_ps(v20, v20, 102);
    v20.m128_f32[0] = (float)(v20.m128_f32[0] + v21.m128_f32[0]) + _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
    v22 = _mm_div_ps(v19, _mm_sqrt_ps(_mm_shuffle_ps(v20, v20, 0)));
    v31 = v22.m128_f32[0];
    v32 = _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
    v23 = (__m128)v22.m128_u32[0];
    v24 = (__m128)v22.m128_u32[0];
    v24.m128_f32[0] = v22.m128_f32[0] * 0.037999999;
    v25 = (__m128)LODWORD(v32);
    v26 = (__m128)LODWORD(v32);
    v26.m128_f32[0] = v32 * 0.037999999;
    v27 = _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
    *(float *)&v33 = v27 * 0.037999999;
    *(_QWORD *)a2 = _mm_unpacklo_ps(v24, v26).m128_u64[0];
    *((_DWORD *)a2 + 2) = v33;
    if ( v50 == 3 )
      v28 = FLOAT_0_5;
    else
      v28 = FLOAT_2_1500001;
    v29 = v18 - 0.037999999;
    v23.m128_f32[0] = (float)((float)(v23.m128_f32[0] * v29) * v28) + *a2;
    v25.m128_f32[0] = (float)((float)(v25.m128_f32[0] * v29) * v28) + a2[1];
    *(float *)&v33 = (float)((float)(v27 * v29) * v28) + a2[2];
    *(_QWORD *)a2 = _mm_unpacklo_ps(v23, v25).m128_u64[0];
    *((_DWORD *)a2 + 2) = v33;
  }
  return a2;
}
