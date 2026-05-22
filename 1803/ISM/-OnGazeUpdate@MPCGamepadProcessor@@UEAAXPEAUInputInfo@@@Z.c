/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180054744 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054C5C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054FA0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005506C (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180058084 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180092D64 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180093E20 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094A18 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094CB0 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x18009501C (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall MPCGamepadProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  double *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  struct MPCGamepadInputHelper *Instance; // rax
  __int64 v10; // r8
  const char *v11; // r9
  struct MPCGamepadInputHelper *v12; // rcx
  bool v13; // al
  _OWORD *v14; // rbx
  __int64 v15; // r13
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  bool IsInjecting; // r12
  __int64 v22; // rax
  int v23; // xmm0_4
  __int64 v24; // rax
  int v25; // xmm0_4
  char *v26; // rax
  MPCGestureHandlerManager *v27; // rax
  const char *v28; // r9
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm6_4
  _OWORD *v38; // rax
  _OWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  double v43; // xmm1_8
  double v44; // xmm1_8
  double v45; // xmm2_8
  float v46; // xmm8_4
  struct IMPCInputProviderBase *v47; // rsi
  float v48; // xmm6_4
  MPCConstantManager *v49; // rax
  __m128 v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // r8
  MPCConstantManager *v53; // rax
  __m128 v54; // xmm2
  float v55; // xmm1_4
  __int64 v56; // rdx
  __int64 v57; // r8
  MPCConstantManager *v58; // rax
  __int64 v59; // rdx
  float v60; // xmm6_4
  MPCConstantManager *v61; // rax
  __m128 v62; // xmm0
  __int64 v63; // rdx
  __int64 v64; // r8
  MPCConstantManager *v65; // rax
  __m128 v66; // xmm2
  float v67; // xmm1_4
  __int64 v68; // rdx
  __int64 v69; // r8
  MPCConstantManager *v70; // rax
  __int64 v71; // rdx
  float v72; // xmm6_4
  MPCConstantManager *v73; // rax
  __m128 v74; // xmm0
  __int64 v75; // rdx
  __int64 v76; // r8
  MPCConstantManager *v77; // rax
  __m128 v78; // xmm0
  __m128 v79; // xmm2
  float v80; // xmm1_4
  __int64 v81; // rdx
  __int64 v82; // r8
  MPCConstantManager *v83; // rax
  __int64 v84; // rdx
  float v85; // xmm6_4
  MPCConstantManager *v86; // rax
  float v87; // xmm0_4
  __int64 v88; // rdx
  __int64 v89; // r8
  MPCConstantManager *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned __int64 v94; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 *v95; // [rsp+40h] [rbp-C8h]
  float v96; // [rsp+48h] [rbp-C0h]
  float v97[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v98; // [rsp+98h] [rbp-70h]
  _OWORD v99[4]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v100[24]; // [rsp+E8h] [rbp-20h] BYREF
  int v101; // [rsp+100h] [rbp-8h]
  char v102; // [rsp+340h] [rbp+238h] BYREF
  int v103; // [rsp+530h] [rbp+428h]
  int v104; // [rsp+540h] [rbp+438h]
  int v105; // [rsp+544h] [rbp+43Ch]
  __int128 v106; // [rsp+548h] [rbp+440h]
  int v107; // [rsp+558h] [rbp+450h]
  bool v108; // [rsp+55Ch] [rbp+454h]
  __int128 v109; // [rsp+628h] [rbp+520h]
  __int128 v110; // [rsp+638h] [rbp+530h]
  __int128 v111; // [rsp+648h] [rbp+540h]
  __int128 v112; // [rsp+658h] [rbp+550h]

  v98 = -2LL;
  *(_QWORD *)(this + 2312) = *((_QWORD *)a2 + 2);
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCSlateDeadzoneHelper **)(this + 4592),
    (*(_DWORD *)(this + 4048) & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 151),
    *((float *)a2 + 152),
    *((float *)a2 + 166));
  v4 = (double *)(this - 32);
  MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32));
  Instance = MPCGamepadInputHelper::GetInstance(v6, v5, v7, v8);
  if ( (((1LL << gdwDeviceFamily) & 0x400) != 0 || *((_BYTE *)Instance + 36))
    && !*((_BYTE *)Instance + 37)
    && (!*(_BYTE *)Instance || *((_BYTE *)Instance + 41)) )
  {
    v12 = MPCGamepadInputHelper::GetInstance(
            gdwDeviceFamily,
            (unsigned __int64)(1LL << gdwDeviceFamily) >> 10,
            v10,
            v11);
    v13 = !*((_BYTE *)v12 + 37) && !*((_BYTE *)a2 + 896) && *((_BYTE *)v12 + 39) == 0;
    *(_BYTE *)(this + 4492) = v13;
    if ( v13 && *((_BYTE *)a2 + 600) && MPCInputProviderBase::IsPrimary(this) || *(_DWORD *)(this + 4488) )
    {
      v14 = (_OWORD *)((char *)a2 + 600);
      v15 = 2LL;
      if ( *((_BYTE *)a2 + 600) )
      {
        v16 = (_OWORD *)(this + 4168);
        v17 = (_OWORD *)((char *)a2 + 600);
        v18 = 2LL;
        do
        {
          *v16 = *v17;
          v16[1] = v17[1];
          v16[2] = v17[2];
          v16[3] = v17[3];
          v16[4] = v17[4];
          v16[5] = v17[5];
          v16[6] = v17[6];
          v16 += 8;
          *(v16 - 1) = v17[7];
          v17 += 8;
          --v18;
        }
        while ( v18 );
        *v16 = *v17;
        v16[1] = v17[1];
        v16[2] = v17[2];
        v16[3] = v17[3];
      }
      if ( *((_BYTE *)a2 + 602) || *(_DWORD *)(this + 4488) )
      {
        MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)(this - 32), a2);
        MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)(this - 32), a2);
        if ( !*(_DWORD *)(this + 4488) )
        {
          if ( *(_BYTE *)v14 )
          {
            v95 = &v94;
            v19 = this & -(__int64)(this != 32);
            v94 = v19;
            if ( v19 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 8LL))(this & -(__int64)(this != 32));
            MPCGestureHandlerManager::GetInstance();
            IsInjecting = MPCGestureHandlerManager::IsInjecting(v20, &v94);
            memset_0(v100, 0, 0x6C8uLL);
            v101 = 1736;
            if ( !IsInjecting || (v22 = *(_QWORD *)(this + 4592), *(_BYTE *)(v22 + 13)) )
              v23 = *((_DWORD *)a2 + 151);
            else
              v23 = *(_DWORD *)(v22 + 4);
            v104 = v23;
            if ( !IsInjecting || (v24 = *(_QWORD *)(this + 4592), *(_BYTE *)(v24 + 13)) )
              v25 = *((_DWORD *)a2 + 152);
            else
              v25 = *(_DWORD *)(v24 + 8);
            v105 = v25;
            v106 = *(_OWORD *)((char *)a2 + 612);
            v107 = *((_DWORD *)a2 + 158);
            v108 = *((_BYTE *)a2 + 897) == 1;
            v26 = &v102;
            do
            {
              *(_OWORD *)v26 = *v14;
              *((_OWORD *)v26 + 1) = v14[1];
              *((_OWORD *)v26 + 2) = v14[2];
              *((_OWORD *)v26 + 3) = v14[3];
              *((_OWORD *)v26 + 4) = v14[4];
              *((_OWORD *)v26 + 5) = v14[5];
              *((_OWORD *)v26 + 6) = v14[6];
              v26 += 128;
              *((_OWORD *)v26 - 1) = v14[7];
              v14 += 8;
              --v15;
            }
            while ( v15 );
            *(_OWORD *)v26 = *v14;
            *((_OWORD *)v26 + 1) = v14[1];
            *((_OWORD *)v26 + 2) = v14[2];
            *((_OWORD *)v26 + 3) = v14[3];
            v103 = IsInjecting ? 7 : 4;
            v95 = &v94;
            v94 = this & -(__int64)(this != 32);
            if ( v19 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 8LL))(this & -(__int64)(this != 32));
            MPCGestureHandlerManager::GetInstance();
            MPCGestureHandlerManager::DownLevelTo2D(v27, (__int64)v100, &v94, v28);
          }
        }
      }
    }
    else
    {
      v95 = &v94;
      v29 = this & -(__int64)(this != 32);
      v94 = v29;
      if ( v29 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v29 + 8LL))(this & -(__int64)(this != 32));
      MPCGestureHandlerManager::GetInstance();
      if ( MPCGestureHandlerManager::IsInjecting(v30, &v94) && (*(_BYTE *)(this + 4048) & 4) == 0 )
        goto LABEL_44;
      v95 = &v94;
      v94 = this & -(__int64)(this != 32);
      if ( v29 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v29 + 8LL))(this & -(__int64)(this != 32));
      MPCGestureHandlerManager::GetInstance();
      if ( MPCGestureHandlerManager::IsHovering(v31, &v94) )
LABEL_44:
        MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
    }
    v32 = *(double *)(this + 4080);
    v34 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(double *)(this + 4064)) ^ _xmm) + (float)*(double *)(this + 4056);
    v35 = 0.0;
    if ( (*(_DWORD *)(this + 4048) & 0x400) != 0 )
      v36 = FLOAT_N1_0;
    else
      v36 = 0.0;
    v37 = FLOAT_1_0;
    if ( (*(_DWORD *)(this + 4048) & 0x800) != 0 )
      v35 = FLOAT_1_0;
    v33 = *(double *)(this + 4072);
    *(float *)(this + 4520) = (float)(v33 + *(float *)(this + 4520)) * 0.5;
    *(float *)(this + 4524) = (float)(v32 + *(float *)(this + 4524)) * 0.5;
    *(float *)(this + 4528) = (float)(v34 + *(float *)(this + 4528)) * 0.5;
    *(float *)(this + 4532) = (float)((float)(v35 + v36) + *(float *)(this + 4532)) * 0.5;
    MPCHolographicInputManager::GetInstance();
    v39 = v100;
    v40 = 15LL;
    do
    {
      *v39 = *v38;
      v39[1] = v38[1];
      v39[2] = v38[2];
      v39[3] = v38[3];
      v39[4] = v38[4];
      v39[5] = v38[5];
      v39[6] = v38[6];
      v39 += 8;
      *(v39 - 1) = v38[7];
      v38 += 8;
      --v40;
    }
    while ( v40 );
    *v39 = *v38;
    *((_QWORD *)v39 + 2) = *((_QWORD *)v38 + 2);
    v99[0] = v109;
    v99[1] = v110;
    v99[2] = v111;
    v99[3] = v112;
    MPCMath::OrientToGravity((__int64)v97, (__int64)v99, 0.89999998);
    v42 = *((_QWORD *)a2 + 2);
    v43 = (double)(int)v42;
    if ( v42 < 0 )
      v43 = v43 + 1.844674407370955e19;
    v44 = v43 * v4[573];
    v45 = v4[574];
    if ( v45 != 0.0 )
      v37 = (float)(v44 - v45) / 0.02;
    *((float *)v4 + 1150) = v37;
    v4[574] = v44;
    v46 = *(float *)(this + 4568);
    std::string::string(v99, "ThumbstickDeadzone", v41);
    v47 = (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32));
    v50 = _mm_and_ps((__m128)_mm_cvtps_pd((__m128)*(unsigned int *)(this + 4520)), (__m128)_xmm);
    v48 = *(double *)v50.m128_u64;
    MPCConstantManager::GetInstance();
    v50.m128_f32[0] = MPCConstantManager::GetConstant<float>(v49, v47, (__int64)v99);
    std::string::~string((unsigned __int64 *)v99, v51);
    if ( v48 >= v50.m128_f32[0] )
    {
      std::string::string(v99, "PointScaleFactor", v52);
      MPCConstantManager::GetInstance();
      v50.m128_f32[0] = MPCConstantManager::GetConstant<float>(v53, v47, (__int64)v99) * *(float *)(this + 4520);
      v54 = v50;
      v55 = (float)((float)(v50.m128_f32[0] * v97[2]) * v46) + *(float *)(this + 4516);
      v54.m128_f32[0] = (float)((float)(v50.m128_f32[0] * v97[1]) * v46) + *(float *)(this + 4512);
      v50.m128_f32[0] = (float)((float)(v50.m128_f32[0] * v97[0]) * v46) + *(float *)(this + 4508);
      v96 = v55;
      *(_QWORD *)(this + 4508) = _mm_unpacklo_ps(v50, v54).m128_u64[0];
      *(float *)(this + 4516) = v96;
      std::string::~string((unsigned __int64 *)v99, v56);
      std::string::string(v99, "PointScaleFactor", v57);
      MPCConstantManager::GetInstance();
      *(float *)(this + 4536) = (float)((float)(MPCConstantManager::GetConstant<float>(v58, v47, (__int64)v99)
                                              * *(float *)(this + 4520))
                                      * v46)
                              + *(float *)(this + 4536);
      std::string::~string((unsigned __int64 *)v99, v59);
    }
    std::string::string(v99, "ThumbstickDeadzone", v52);
    v62 = _mm_and_ps((__m128)_mm_cvtps_pd((__m128)*(unsigned int *)(this + 4524)), (__m128)_xmm);
    v60 = *(double *)v62.m128_u64;
    MPCConstantManager::GetInstance();
    v62.m128_f32[0] = MPCConstantManager::GetConstant<float>(v61, v47, (__int64)v99);
    std::string::~string((unsigned __int64 *)v99, v63);
    if ( v60 >= v62.m128_f32[0] )
    {
      std::string::string(v99, "PointScaleFactor", v64);
      MPCConstantManager::GetInstance();
      v62.m128_f32[0] = MPCConstantManager::GetConstant<float>(v65, v47, (__int64)v99) * *(float *)(this + 4524);
      v66 = v62;
      v67 = (float)((float)(v62.m128_f32[0] * v97[6]) * v46) + *(float *)(this + 4516);
      v66.m128_f32[0] = (float)((float)(v62.m128_f32[0] * v97[5]) * v46) + *(float *)(this + 4512);
      v62.m128_f32[0] = (float)((float)(v62.m128_f32[0] * v97[4]) * v46) + *(float *)(this + 4508);
      v96 = v67;
      *(_QWORD *)(this + 4508) = _mm_unpacklo_ps(v62, v66).m128_u64[0];
      *(float *)(this + 4516) = v96;
      std::string::~string((unsigned __int64 *)v99, v68);
      std::string::string(v99, "PointScaleFactor", v69);
      MPCConstantManager::GetInstance();
      *(float *)(this + 4540) = (float)((float)(MPCConstantManager::GetConstant<float>(v70, v47, (__int64)v99)
                                              * *(float *)(this + 4524))
                                      * v46)
                              + *(float *)(this + 4540);
      std::string::~string((unsigned __int64 *)v99, v71);
    }
    std::string::string(v99, "ThumbstickDeadzone", v64);
    v74 = _mm_and_ps((__m128)_mm_cvtps_pd((__m128)*(unsigned int *)(this + 4528)), (__m128)_xmm);
    v72 = *(double *)v74.m128_u64;
    MPCConstantManager::GetInstance();
    v74.m128_f32[0] = MPCConstantManager::GetConstant<float>(v73, v47, (__int64)v99);
    std::string::~string((unsigned __int64 *)v99, v75);
    if ( v72 >= v74.m128_f32[0] )
    {
      std::string::string(v99, "PointScaleFactor", v76);
      MPCConstantManager::GetInstance();
      v74.m128_f32[0] = MPCConstantManager::GetConstant<float>(v77, v47, (__int64)v99) * *(float *)(this + 4528);
      v78 = _mm_xor_ps(v74, (__m128)_xmm);
      v79 = v78;
      v80 = (float)((float)(v78.m128_f32[0] * v97[10]) * v46) + *(float *)(this + 4516);
      v79.m128_f32[0] = (float)((float)(v78.m128_f32[0] * v97[9]) * v46) + *(float *)(this + 4512);
      v78.m128_f32[0] = (float)((float)(v78.m128_f32[0] * v97[8]) * v46) + *(float *)(this + 4508);
      v96 = v80;
      *(_QWORD *)(this + 4508) = _mm_unpacklo_ps(v78, v79).m128_u64[0];
      *(float *)(this + 4516) = v96;
      std::string::~string((unsigned __int64 *)v99, v81);
      std::string::string(v99, "PointScaleFactor", v82);
      MPCConstantManager::GetInstance();
      *(float *)(this + 4544) = (float)((float)(MPCConstantManager::GetConstant<float>(v83, v47, (__int64)v99)
                                              * *(float *)(this + 4528))
                                      * v46)
                              + *(float *)(this + 4544);
      std::string::~string((unsigned __int64 *)v99, v84);
    }
    std::string::string(v99, "ThumbstickDeadzone", v76);
    v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(this + 4532)) & _xmm);
    MPCConstantManager::GetInstance();
    v87 = MPCConstantManager::GetConstant<float>(v86, v47, (__int64)v99);
    std::string::~string((unsigned __int64 *)v99, v88);
    if ( v85 >= v87 )
    {
      std::string::string(v99, "PointScaleFactor", v89);
      MPCConstantManager::GetInstance();
      *(float *)(this + 4548) = (float)((float)(MPCConstantManager::GetConstant<float>(v90, v47, (__int64)v99)
                                              * *(float *)(this + 4532))
                                      * v46)
                              + *(float *)(this + 4548);
      std::string::~string((unsigned __int64 *)v99, v91);
    }
    *(_OWORD *)(this + 4104) = *(_OWORD *)(this + 4040);
    *(_OWORD *)(this + 4120) = *(_OWORD *)(this + 4056);
    *(_OWORD *)(this + 4136) = *(_OWORD *)(this + 4072);
    *(_OWORD *)(this + 4152) = *(_OWORD *)(this + 4088);
    v95 = &v94;
    v94 = this & -(__int64)(this != 32);
    if ( v47 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v47 + 8LL))(v47);
    MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::OnGazeUpdate(v92, &v94);
  }
  else
  {
    if ( *(_DWORD *)(this + 4488) )
      goto LABEL_71;
    v95 = &v94;
    v94 = this & -(__int64)(this != 32);
    if ( v94 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 32)) + 8LL))(this & -(__int64)(this != 32));
    MPCGestureHandlerManager::GetInstance();
    if ( MPCGestureHandlerManager::IsHovering(v93, &v94) )
LABEL_71:
      MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
  }
}
