/*
 * XREFs of ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800985D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z @ 0x180052A0C (-OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800578D0 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180092D64 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x1800965FC (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x180099244 (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180099DA0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@w.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     asinf_0 @ 0x1800E31E7 (asinf_0.c)
 *     cosf_0 @ 0x1800E31F9 (cosf_0.c)
 *     sinf_0 @ 0x1800E31FF (sinf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MPCMouseProcessor::PopulateTargetingData(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  int v6; // eax
  float v7; // xmm2_4
  unsigned int v8; // xmm1_4
  int v9; // xmm0_4
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __m128 v12; // xmm0
  __m128 v13; // xmm3
  unsigned int v14; // xmm1_4
  unsigned __int32 v15; // xmm0_4
  float v16; // xmm9_4
  __int32 v17; // xmm8_4
  float v18; // xmm10_4
  float v19; // xmm12_4
  float v20; // xmm11_4
  double YawAngleBetweenTwoVectors; // xmm0_8
  float v22; // xmm7_4
  __m128 v23; // xmm3
  __m128 v24; // xmm2
  __m128 v25; // xmm0
  __m128 v26; // xmm3
  __m128 v27; // xmm3
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  __m128 v30; // xmm3
  float v31; // xmm6_4
  double v32; // xmm1_8
  float v33; // xmm7_4
  __int64 v34; // r8
  char v35; // r15
  MPCConstantManager *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  MPCConstantManager *v39; // rax
  char v40; // r14
  __int64 v41; // r8
  float v42; // xmm9_4
  MPCConstantManager *v43; // rax
  float v44; // xmm9_4
  __int64 v45; // rdx
  __int64 v46; // r8
  float v47; // xmm8_4
  MPCConstantManager *v48; // rax
  float v49; // xmm8_4
  __int64 v50; // rdx
  float v51; // xmm8_4
  float v52; // xmm6_4
  float v53; // xmm0_4
  float v54; // xmm9_4
  float v55; // xmm6_4
  float v56; // xmm0_4
  __m128 v57; // xmm4
  __m128 v58; // xmm1
  __m128 v59; // xmm4
  float v60; // xmm4_4
  float v61; // xmm3_4
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // rcx
  int v66; // eax
  wil::details::in1diag3 *v67; // rcx
  unsigned __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  wil::details::in1diag3 *v71; // rcx
  int v72; // eax
  int v73; // eax
  int v75[2]; // [rsp+30h] [rbp-D0h] BYREF
  float v76; // [rsp+38h] [rbp-C8h]
  unsigned __int64 X; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int32 v78; // [rsp+48h] [rbp-B8h]
  __m128 v79; // [rsp+50h] [rbp-B0h] BYREF
  int v80; // [rsp+60h] [rbp-A0h] BYREF
  int v81; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v82; // [rsp+68h] [rbp-98h]
  _QWORD v83[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128 v84; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  float v86; // [rsp+A8h] [rbp-58h]
  float v87; // [rsp+B0h] [rbp-50h]
  float v88; // [rsp+B4h] [rbp-4Ch]
  float v89; // [rsp+B8h] [rbp-48h]
  float v90; // [rsp+C0h] [rbp-40h]
  float v91; // [rsp+C4h] [rbp-3Ch]
  float v92; // [rsp+C8h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v83[1] = -2LL;
  v80 = 0;
  v79.m128_u64[0] = *(_QWORD *)((char *)a2 + 164);
  v79.m128_i32[2] = *((_DWORD *)a2 + 43);
  v83[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(this + 2280) + 40LL))(*(_QWORD *)(this + 2280), v83);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x215,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v6);
  v7 = *((float *)a2 + 47);
  if ( v7 == *((float *)a2 + 38)
    && *((float *)a2 + 48) == *((float *)a2 + 39)
    && *((float *)a2 + 49) == *((float *)a2 + 40) )
  {
    goto LABEL_18;
  }
  *(_QWORD *)v75 = *((_QWORD *)a2 + 19);
  v76 = *((float *)a2 + 40);
  *(float *)&v8 = *((float *)a2 + 49) - v76;
  *(float *)&v9 = *((float *)a2 + 48) - *(float *)&v75[1];
  *(float *)v75 = v7 - *(float *)v75;
  v75[1] = v9;
  v10 = _mm_movelh_ps((__m128)*(unsigned __int64 *)v75, (__m128)v8);
  v11 = _mm_mul_ps(v10, v10);
  v12 = _mm_shuffle_ps(v11, v11, 102);
  v11.m128_f32[0] = (float)(v11.m128_f32[0] + v12.m128_f32[0]) + _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  v13 = _mm_div_ps(v10, _mm_sqrt_ps(_mm_shuffle_ps(v11, v11, 0)));
  v14 = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  v15 = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  v75[0] = v13.m128_i32[0];
  v75[1] = v14;
  v76 = *(float *)&v15;
  v16 = *(float *)&v15;
  v17 = v13.m128_i32[0];
  if ( *(_DWORD *)(this + 3396) )
  {
    v20 = v79.m128_f32[2];
    v19 = v79.m128_f32[1];
    v18 = v79.m128_f32[0];
  }
  else
  {
    v18 = v13.m128_f32[0];
    v19 = *(float *)&v14;
    v20 = *(float *)&v15;
  }
  if ( *(_DWORD *)(this + 3308) || *(_DWORD *)(this + 3312) )
  {
    X = _mm_unpacklo_ps((__m128)v13.m128_u32[0], (__m128)v14).m128_u64[0];
    v78 = LODWORD(v76);
    *(_QWORD *)v75 = *(_QWORD *)((char *)a2 + 164);
    v76 = *((float *)a2 + 43);
    YawAngleBetweenTwoVectors = MPCMouseProcessor::GetYawAngleBetweenTwoVectors(v75, &X);
    v22 = *(float *)&YawAngleBetweenTwoVectors;
    *(_QWORD *)v75 = __PAIR64__(v14, v13.m128_u32[0]);
    v76 = v16;
    X = *(_QWORD *)((char *)a2 + 164);
    v78 = *((_DWORD *)a2 + 43);
    v23 = _mm_movelh_ps((__m128)X, (__m128)v78);
    v24 = _mm_mul_ps(v23, v23);
    v25 = _mm_shuffle_ps(v24, v24, 102);
    v24.m128_f32[0] = (float)(v24.m128_f32[0] + v25.m128_f32[0]) + _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
    v26 = _mm_div_ps(v23, _mm_sqrt_ps(_mm_shuffle_ps(v24, v24, 0)));
    LODWORD(X) = v26.m128_i32[0];
    HIDWORD(X) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
    v78 = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
    v27 = _mm_movelh_ps((__m128)__PAIR64__(v14, v17), (__m128)LODWORD(v16));
    v28 = _mm_mul_ps(v27, v27);
    v29 = _mm_shuffle_ps(v28, v28, 102);
    v28.m128_f32[0] = (float)(v28.m128_f32[0] + v29.m128_f32[0]) + _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
    v30 = _mm_div_ps(v27, _mm_sqrt_ps(_mm_shuffle_ps(v28, v28, 0)));
    v75[0] = v30.m128_i32[0];
    v75[1] = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
    LODWORD(v76) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
    v31 = asinf_0(*((float *)&X + 1));
    v32 = v22;
    v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(asinf_0(*(float *)&v75[1]) - v31)) & _xmm);
    std::string::string(&v85, "MouseParams_ResetHorizontalAngleRadians", v34);
    v35 = 1;
    v80 = 1;
    MPCConstantManager::GetInstance();
    if ( (float)COERCE_DOUBLE(*(_QWORD *)&v32 & _xmm) > MPCConstantManager::GetConstant<float>(
                                                          v36,
                                                          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 40)),
                                                          (__int64)&v85)
      || (std::string::string(&v84, "MouseParams_ResetVerticalAngleRadians", v38),
          v35 = 3,
          v80 = 3,
          MPCConstantManager::GetInstance(),
          v40 = 0,
          v33 > MPCConstantManager::GetConstant<float>(
                  v39,
                  (struct IMPCInputProviderBase *)(this & -(__int64)(this != 40)),
                  (__int64)&v84)) )
    {
      v40 = 1;
    }
    if ( (v35 & 2) != 0 )
      std::string::~string((unsigned __int64 *)&v84, v37);
    std::string::~string(&v85, v37);
    if ( v40 )
    {
      MPCManager::OnMouseSnappedToGaze(MPCManager::s_instance, *(const struct DeviceInfo **)(this + 24));
      v79.m128_u64[0] = *(_QWORD *)((char *)a2 + 164);
      v79.m128_i32[2] = *((_DWORD *)a2 + 43);
      RayStabilizer::Reset((RayStabilizer *)(this + 352));
LABEL_18:
      v20 = v79.m128_f32[2];
      v19 = v79.m128_f32[1];
      v18 = v79.m128_f32[0];
      goto LABEL_26;
    }
    if ( !*(_BYTE *)(this + 3376)
      || !v83[0]
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v83[0] + 72LL))(v83[0]) )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetCachedFeatureEnabledState();
      LODWORD(X) = 0;
      BYTE4(X) = 3;
      v81 = 0;
      v82 = WORD2(X);
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data,
        0xA019AFu,
        (const struct FEATURE_LOGGED_TRAITS *)&v81,
        1,
        3u);
      if ( !*((_BYTE *)a2 + 1936) )
      {
        std::string::string(&v85, "MouseParams_DeltaToRadiansRatio", v41);
        v42 = (float)*(int *)(this + 3308);
        MPCConstantManager::GetInstance();
        v44 = (float)(v42
                    / MPCConstantManager::GetConstant<float>(
                        v43,
                        (struct IMPCInputProviderBase *)(this & -(__int64)(this != 40)),
                        (__int64)&v85))
            * -1.0;
        std::string::~string(&v85, v45);
        std::string::string(&v85, "MouseParams_DeltaToRadiansRatio", v46);
        v47 = (float)*(int *)(this + 3312);
        MPCConstantManager::GetInstance();
        v49 = (float)(v47
                    / MPCConstantManager::GetConstant<float>(
                        v48,
                        (struct IMPCInputProviderBase *)(this & -(__int64)(this != 40)),
                        (__int64)&v85))
            * -1.0;
        std::string::~string(&v85, v50);
        MPCMath::OrientToGravity((__int64)&v85, (__int64)a2, 0.89999998);
        v51 = v49 * 0.5;
        v52 = sinf_0(v51);
        v53 = cosf_0(v51);
        v84.m128_f32[0] = v52 * *(float *)&v85;
        v84.m128_f32[1] = v52 * *((float *)&v85 + 1);
        v84.m128_f32[2] = v52 * v86;
        v84.m128_f32[3] = v53;
        v54 = v44 * 0.5;
        v55 = sinf_0(v54);
        v56 = cosf_0(v54);
        v79.m128_f32[0] = v55 * v87;
        v79.m128_f32[1] = v55 * v88;
        v79.m128_f32[2] = v55 * v89;
        v79.m128_f32[3] = v56;
        v57 = _mm_shuffle_ps(v79, v79, 27);
        v58 = _mm_mul_ps(_mm_shuffle_ps(v84, v84, 0), v57);
        v59 = _mm_shuffle_ps(v57, v57, 177);
        v84 = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v84, v84, 255), v79),
                  _mm_mul_ps(v58, (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX)),
                _mm_add_ps(
                  _mm_mul_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v84, v84, 85), v59),
                    (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY),
                  _mm_mul_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v84, v84, 170), _mm_shuffle_ps(v59, v59, 27)),
                    (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ)));
        Windows::Foundation::Numerics::make_float4x4_from_quaternion((__int64)&v85, v84.m128_f32);
        v60 = (float)((float)(v89 * v19) + (float)(v86 * v18)) + (float)(v92 * v20);
        v61 = (float)((float)(v88 * v19) + (float)(*((float *)&v85 + 1) * v18)) + (float)(v91 * v20);
        v18 = (float)((float)(v87 * v19) + (float)(*(float *)&v85 * v18)) + (float)(v90 * v20);
        v19 = v61;
        v20 = v60;
      }
    }
  }
LABEL_26:
  *((_BYTE *)a3 + 500) = 1;
  *((_DWORD *)a3 + 135) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a3 + 136) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a3 + 137) = *((_DWORD *)a2 + 40);
  *((float *)a3 + 138) = v18;
  *((float *)a3 + 139) = v19;
  *((float *)a3 + 140) = v20;
  *((_BYTE *)a3 + 564) = 0;
  v62 = v83[0];
  if ( !v83[0] )
    goto LABEL_43;
  v63 = (*(__int64 (__fastcall **)(_QWORD, __m128 *))(*(_QWORD *)v83[0] + 88LL))(v83[0], &v84);
  if ( v63 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x25B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v63);
    goto LABEL_47;
  }
  if ( ((v84.m128_i32[0] == v84.m128_i32[2]) == v84.m128_i32[1]) == v84.m128_i32[3] )
  {
    v80 = 0;
    v81 = 0;
    LODWORD(X) = 0;
    *(_QWORD *)v75 = 0LL;
    v64 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 16) + 64LL))(*(_QWORD *)(this + 16));
    v65 = *(_QWORD *)v75;
    if ( *(_QWORD *)v75 )
    {
      *(_QWORD *)v75 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
    }
    v66 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)v64 + 64LL))(
            v64,
            0LL,
            *(_QWORD *)(this + 24),
            0LL,
            v75);
    v67 = retaddr;
    if ( v66 >= 0 )
    {
      v68 = 0LL;
      v79.m128_u64[0] = 0LL;
      v69 = *(_QWORD *)v75;
      if ( !*(_QWORD *)v75 )
      {
LABEL_38:
        *((_BYTE *)a3 + 564) = 1;
        *((_DWORD *)a3 + 142) = v80;
        *((_DWORD *)a3 + 143) = v81;
        *((_DWORD *)a3 + 144) = X;
        *(__m128 *)((char *)a3 + 580) = v84;
        if ( v68 )
        {
          v79.m128_u64[0] = 0LL;
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v68 + 16LL))(v68);
          v69 = *(_QWORD *)v75;
        }
        if ( v69 )
        {
          *(_QWORD *)v75 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
        }
        goto LABEL_42;
      }
      if ( (***(int (__fastcall ****)(_QWORD, GUID *, __m128 *))v75)(
             *(_QWORD *)v75,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v79) < 0 )
      {
LABEL_37:
        v69 = *(_QWORD *)v75;
        v68 = v79.m128_u64[0];
        goto LABEL_38;
      }
      v70 = (*(__int64 (__fastcall **)(unsigned __int64, int *))(*(_QWORD *)v79.m128_u64[0] + 32LL))(
              v79.m128_u64[0],
              &v80);
      v71 = retaddr;
      if ( v70 >= 0 )
      {
        v72 = (*(__int64 (__fastcall **)(unsigned __int64, int *))(*(_QWORD *)v79.m128_u64[0] + 40LL))(
                v79.m128_u64[0],
                &v81);
        if ( v72 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x270,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
            (const char *)(unsigned int)v72);
          __debugbreak();
        }
        v73 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *))(*(_QWORD *)v79.m128_u64[0] + 48LL))(
                v79.m128_u64[0],
                &X);
        if ( v73 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x271,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
            (const char *)(unsigned int)v73);
          __debugbreak();
        }
        goto LABEL_37;
      }
LABEL_48:
      wil::details::in1diag3::FailFast_Hr(
        v71,
        (void *)0x26F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v70);
      __debugbreak();
    }
LABEL_47:
    wil::details::in1diag3::FailFast_Hr(
      v67,
      (void *)0x26A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v66);
    goto LABEL_48;
  }
LABEL_42:
  v62 = v83[0];
LABEL_43:
  *((_DWORD *)a3 + 134) = **(_DWORD **)(this + 24);
  if ( v62 )
  {
    v83[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  }
  return 0LL;
}
