/*
 * XREFs of ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180036C48 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x180049710 (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x18004C144 (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x18004C28C (-GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004C714 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@w.c)
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z @ 0x18005DE8C (-OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     cosf_0 @ 0x1800CC359 (cosf_0.c)
 *     sinf_0 @ 0x1800CC35F (sinf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCMouseProcessor::PopulateTargetingData(
        MPCMouseProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  int v6; // eax
  float v7; // xmm2_4
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  unsigned __int32 v12; // xmm1_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  unsigned __int64 v16; // xmm7_8
  unsigned __int32 v17; // ebx
  double YawAngleBetweenTwoVectors; // xmm0_8
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm9_4
  float v23; // xmm7_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm9_4
  float v28; // xmm6_4
  float v29; // xmm0_4
  __m128 v30; // xmm4
  __m128 v31; // xmm1
  __m128 v32; // xmm4
  float v33; // xmm3_4
  float v34; // xmm2_4
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rbx
  int (__fastcall ***v38)(_QWORD, GUID *, __m128 *); // rcx
  int v39; // eax
  unsigned __int64 v40; // rdx
  int (__fastcall ***v41)(_QWORD, GUID *, __m128 *); // rcx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int (__fastcall ***v46)(_QWORD, GUID *, __m128 *); // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int32 v47; // [rsp+40h] [rbp-C8h]
  __m128 v48; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int32 v50; // [rsp+60h] [rbp-A8h]
  int v51; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v52; // [rsp+6Ch] [rbp-9Ch]
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v54[4]; // [rsp+78h] [rbp-90h] BYREF
  float v55; // [rsp+88h] [rbp-80h] BYREF
  float v56; // [rsp+8Ch] [rbp-7Ch]
  float v57; // [rsp+90h] [rbp-78h]
  float v58; // [rsp+98h] [rbp-70h]
  float v59; // [rsp+9Ch] [rbp-6Ch]
  float v60; // [rsp+A0h] [rbp-68h]
  float v61; // [rsp+A8h] [rbp-60h]
  float v62; // [rsp+ACh] [rbp-5Ch]
  float v63; // [rsp+B0h] [rbp-58h]
  __int64 v64; // [rsp+C8h] [rbp-40h]
  __m128 v65; // [rsp+D0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v64 = -2LL;
  v48.m128_u64[0] = *(_QWORD *)((char *)a2 + 164);
  v48.m128_i32[2] = *((_DWORD *)a2 + 43);
  v53 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 69) + 40LL))(*((_QWORD *)this + 69), &v53);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v6);
  v7 = *((float *)a2 + 47);
  if ( v7 == *((float *)a2 + 38)
    && *((float *)a2 + 48) == *((float *)a2 + 39)
    && *((float *)a2 + 49) == *((float *)a2 + 40) )
  {
    goto LABEL_18;
  }
  v8 = _mm_movelh_ps(
         _mm_unpacklo_ps(
           (__m128)COERCE_UNSIGNED_INT(v7 - COERCE_FLOAT(*((_QWORD *)a2 + 19))),
           (__m128)COERCE_UNSIGNED_INT(*((float *)a2 + 48) - COERCE_FLOAT(HIDWORD(*((_QWORD *)a2 + 19))))),
         (__m128)COERCE_UNSIGNED_INT(*((float *)a2 + 49) - *((float *)a2 + 40)));
  v9 = _mm_mul_ps(v8, v8);
  v10 = _mm_shuffle_ps(v9, v9, 102);
  v9.m128_f32[0] = (float)(v9.m128_f32[0] + v10.m128_f32[0]) + _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v11 = _mm_div_ps(v8, _mm_sqrt_ps(_mm_shuffle_ps(v9, v9, 0)));
  v12 = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  v46 = (int (__fastcall ***)(_QWORD, GUID *, __m128 *))__PAIR64__(v12, v11.m128_u32[0]);
  v47 = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v13 = v11.m128_f32[0];
  v14 = *(float *)&v12;
  v15 = *(float *)&v47;
  if ( !*((_DWORD *)this + 160) && !*((_DWORD *)this + 161) )
    goto LABEL_19;
  v16 = _mm_unpacklo_ps((__m128)v11.m128_u32[0], (__m128)v12).m128_u64[0];
  v49 = v16;
  v17 = v47;
  v50 = v47;
  v46 = *(int (__fastcall ****)(_QWORD, GUID *, __m128 *))((char *)a2 + 164);
  v47 = *((_DWORD *)a2 + 43);
  YawAngleBetweenTwoVectors = MPCMouseProcessor::GetYawAngleBetweenTwoVectors(&v46, &v49);
  v46 = (int (__fastcall ***)(_QWORD, GUID *, __m128 *))v16;
  v47 = v17;
  v49 = *(_QWORD *)((char *)a2 + 164);
  v50 = *((_DWORD *)a2 + 43);
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&YawAngleBetweenTwoVectors) & _xmm);
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(MPCMouseProcessor::GetPitchAngleBetweenTwoVectors(&v49, &v46).m128_f32[0]) & _xmm);
  if ( v19 > *((float *)this + 151) || v20 > *((float *)this + 152) )
  {
    MPCManager::OnMouseSnappedToGaze(MPCManager::s_instance, *((const struct DeviceInfo **)this + 3));
    v48.m128_u64[0] = *(_QWORD *)((char *)a2 + 164);
    v48.m128_i32[2] = *((_DWORD *)a2 + 43);
LABEL_18:
    v13 = v48.m128_f32[0];
    v14 = v48.m128_f32[1];
    v15 = v48.m128_f32[2];
    goto LABEL_19;
  }
  if ( !*((_BYTE *)this + 704) || !v53 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v53 + 88LL))(v53) )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetCachedFeatureEnabledState();
    LODWORD(v49) = 0;
    BYTE4(v49) = 3;
    v51 = 0;
    v52 = WORD2(v49);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data,
      0xA019AFu,
      (const struct FEATURE_LOGGED_TRAITS *)&v51,
      1,
      3);
    if ( !*((_BYTE *)a2 + 3048) )
    {
      v21 = *((float *)this + 150);
      v22 = (float)((float)*((int *)this + 160) / v21) * -1.0;
      v23 = (float)((float)*((int *)this + 161) / v21) * -1.0;
      MPCMath::OrientToGravity((__int64)&v55, (__int64)a2, 0.89999998);
      v24 = v23 * 0.5;
      v25 = sinf_0(v24);
      v26 = cosf_0(v24);
      v65.m128_f32[0] = v25 * v55;
      v65.m128_f32[1] = v25 * v56;
      v65.m128_f32[2] = v25 * v57;
      v65.m128_f32[3] = v26;
      v27 = v22 * 0.5;
      v28 = sinf_0(v27);
      v29 = cosf_0(v27);
      v48.m128_f32[0] = v28 * v58;
      v48.m128_f32[1] = v28 * v59;
      v48.m128_f32[2] = v28 * v60;
      v48.m128_f32[3] = v29;
      v30 = _mm_shuffle_ps(v48, v48, 27);
      v31 = _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v30);
      v32 = _mm_shuffle_ps(v30, v30, 177);
      v65 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v65, v65, 255), v48),
                _mm_mul_ps(v31, (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX)),
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v65, v65, 85), v32),
                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY),
                _mm_mul_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v65, v65, 170), _mm_shuffle_ps(v32, v32, 27)),
                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ)));
      Windows::Foundation::Numerics::make_float4x4_from_quaternion((__int64)&v55, v65.m128_f32);
      v33 = (float)((float)(v14 * v60) + (float)(v13 * v57)) + (float)(v15 * v63);
      v34 = (float)((float)(v14 * v59) + (float)(v13 * v56)) + (float)(v15 * v62);
      v13 = (float)((float)(v14 * v58) + (float)(v13 * v55)) + (float)(v15 * v61);
      v14 = v34;
      v15 = v33;
    }
  }
LABEL_19:
  *((_BYTE *)a3 + 676) = 1;
  *((_DWORD *)a3 + 179) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a3 + 180) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a3 + 181) = *((_DWORD *)a2 + 40);
  *((float *)a3 + 182) = v13;
  *((float *)a3 + 183) = v14;
  *((float *)a3 + 184) = v15;
  *((_BYTE *)a3 + 740) = 0;
  v35 = v53;
  if ( v53 )
  {
    v36 = (*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v53 + 104LL))(v53, &v65);
    if ( v36 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x230,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v36);
      __debugbreak();
    }
    if ( ((v65.m128_i32[0] == v65.m128_i32[2]) == v65.m128_i32[1]) == v65.m128_i32[3] )
    {
      v54[0] = 0;
      v51 = 0;
      LODWORD(v49) = 0;
      v46 = 0LL;
      v37 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2));
      v38 = v46;
      if ( v46 )
      {
        v46 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __m128 *)))(*v38)[2])(v38);
      }
      v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int (__fastcall ****)(_QWORD, GUID *, __m128 *)))(*(_QWORD *)v37 + 64LL))(
              v37,
              0LL,
              *((_QWORD *)this + 3),
              0LL,
              &v46);
      if ( v39 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x23F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v39);
        __debugbreak();
      }
      v40 = 0LL;
      v48.m128_u64[0] = 0LL;
      v41 = v46;
      if ( v46 )
      {
        if ( (**v46)(v46, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v48) >= 0 )
        {
          v42 = (*(__int64 (__fastcall **)(unsigned __int64, _DWORD *))(*(_QWORD *)v48.m128_u64[0] + 32LL))(
                  v48.m128_u64[0],
                  v54);
          if ( v42 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x244,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v42);
            __debugbreak();
          }
          v43 = (*(__int64 (__fastcall **)(unsigned __int64, int *))(*(_QWORD *)v48.m128_u64[0] + 40LL))(
                  v48.m128_u64[0],
                  &v51);
          if ( v43 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x245,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v43);
            __debugbreak();
          }
          v44 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *))(*(_QWORD *)v48.m128_u64[0] + 48LL))(
                  v48.m128_u64[0],
                  &v49);
          if ( v44 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x246,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v44);
            __debugbreak();
          }
        }
        v41 = v46;
        v40 = v48.m128_u64[0];
      }
      *((_BYTE *)a3 + 740) = 1;
      *((_DWORD *)a3 + 186) = v54[0];
      *((_DWORD *)a3 + 187) = v51;
      *((_DWORD *)a3 + 188) = v49;
      *(__m128 *)((char *)a3 + 756) = v65;
      if ( v40 )
      {
        v48.m128_u64[0] = 0LL;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v40 + 16LL))(v40);
        v41 = v46;
      }
      if ( v41 )
      {
        v46 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __m128 *)))(*v41)[2])(v41);
      }
    }
    v35 = v53;
  }
  if ( v35 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return 0LL;
}
