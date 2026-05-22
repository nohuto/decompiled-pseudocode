/*
 * XREFs of ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z @ 0x18003BA6C
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003CC50 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18003B8D8 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     _lambda_118dc2bc630108594922f76d93a95b91_::operator() @ 0x18003C4A4 (_lambda_118dc2bc630108594922f76d93a95b91_--operator().c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041574 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x180041680 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_N_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N11AEBIAEA_N$$QEAM1@Z @ 0x18004184C (--$MPCSixDofProcessor_HomeEvent@K_N_N_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N11AEBIAEA_N$$QEA.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x180044450 (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x18004D130 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x180050038 (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x180050440 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK@Z @ 0x180052654 (-SendHomeGesture@MPCManager@@QEAAXKK@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII@Z @ 0x180052734 (-OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII@Z.c)
 *     ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005288C (-OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCSixDofProcessor::ProcessHomeGesture(MPCSixDofProcessor *this, struct InputInfo *a2, bool *a3)
{
  __m128 v3; // xmm0
  char v6; // di
  char v7; // r12
  bool v8; // bl
  char *v9; // r15
  int Instance; // eax
  float v11; // xmm10_4
  float v12; // xmm11_4
  int v13; // eax
  __m128 v14; // xmm9
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm8_4
  int v18; // eax
  __m128 v19; // xmm2
  __int64 v20; // rax
  float v21; // xmm4_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  __int64 v27; // rax
  float v28; // xmm6_4
  float v29; // xmm0_4
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char v33; // al
  bool v34; // al
  int v35; // eax
  _DWORD *v36; // rbx
  _BYTE *v37; // rax
  MPCHolographicInputManager *v38; // rax
  struct IInputTarget *FocusedTarget; // rax
  MPCHolographicInputManager *v40; // rax
  struct IInputTarget *v41; // rax
  __int64 v42; // rax
  float v43; // xmm1_4
  _DWORD *v44; // rcx
  ISMTracing *v45; // rcx
  MPCHolographicInputManager *v46; // rax
  struct IInputTarget *v47; // rax
  __int64 v48; // rax
  float v49; // xmm1_4
  char v50; // al
  MPCHolographicInputManager *v51; // rax
  struct IInputTarget *v52; // rax
  __int64 v53; // rax
  float v54; // xmm1_4
  unsigned int v55; // ecx
  int v56; // eax
  int v57; // eax
  bool v58; // [rsp+B8h] [rbp-80h] BYREF
  bool IsExclusiveTarget; // [rsp+B9h] [rbp-7Fh] BYREF
  char v60; // [rsp+BAh] [rbp-7Eh] BYREF
  char v61; // [rsp+BBh] [rbp-7Dh] BYREF
  _BYTE v62[4]; // [rsp+BCh] [rbp-7Ch] BYREF
  float v63; // [rsp+C0h] [rbp-78h] BYREF
  DWORD pcbData[2]; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-68h]
  float v66; // [rsp+D8h] [rbp-60h]
  float v67; // [rsp+E0h] [rbp-58h] BYREF
  float v68; // [rsp+E4h] [rbp-54h] BYREF
  float v69; // [rsp+E8h] [rbp-50h] BYREF
  float v70; // [rsp+F0h] [rbp-48h] BYREF
  float v71; // [rsp+F4h] [rbp-44h] BYREF
  float v72; // [rsp+F8h] [rbp-40h] BYREF
  float v73; // [rsp+100h] [rbp-38h] BYREF
  float v74; // [rsp+104h] [rbp-34h] BYREF
  float v75; // [rsp+108h] [rbp-30h] BYREF
  __int64 v76; // [rsp+110h] [rbp-28h]
  float v77; // [rsp+118h] [rbp-20h]
  __int64 v78; // [rsp+120h] [rbp-18h]
  _QWORD v79[4]; // [rsp+128h] [rbp-10h] BYREF
  _BYTE v80[32]; // [rsp+148h] [rbp+10h] BYREF
  _BYTE v81[32]; // [rsp+168h] [rbp+30h] BYREF

  v78 = -2LL;
  *(_QWORD *)pcbData = a3;
  v6 = 0;
  v63 = 0.0;
  v7 = 1;
  v8 = *((_BYTE *)a2 + 1168) & 1;
  v9 = (char *)a2 + 1228;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 329), v8, *((_QWORD *)a2 + 2));
  std::string::string(v79);
  Instance = (unsigned int)MPCConstantManager::GetInstance();
  v58 = *((_DWORD *)this + 705) >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(Instance);
  std::string::~string(v79);
  v76 = 0LL;
  v77 = 0.0;
  v73 = 0.0;
  v74 = 0.0;
  v75 = 0.0;
  if ( *((_BYTE *)this + 3232) )
  {
    v76 = *(_QWORD *)((char *)a2 + 540);
    v77 = *((float *)a2 + 137);
    v11 = v77 - *((float *)this + 720);
    v12 = *((float *)&v76 + 1) - *((float *)this + 719);
    v73 = *(float *)&v76 - *((float *)this + 718);
    v74 = v12;
    v75 = v11;
    std::string::string(v80);
    std::string::string(v79);
    v13 = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(v13);
    v14 = (__m128)LODWORD(FLOAT_1_0);
    v15 = (float)(1.0 - v3.m128_f32[0]) * *((float *)this + 723);
    v16 = (float)(1.0 - v3.m128_f32[0]) * *((float *)this + 722);
    v17 = *((float *)this + 721);
    v18 = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(v18);
    v19 = v3;
    v19.m128_f32[0] = (float)(v3.m128_f32[0] * v12) + v16;
    v14.m128_f32[0] = (float)((float)(1.0 - v3.m128_f32[0]) * v17) + (float)(v73 * v3.m128_f32[0]);
    v66 = (float)(v3.m128_f32[0] * v11) + v15;
    *(_QWORD *)((char *)this + 2884) = _mm_unpacklo_ps(v14, v19).m128_u64[0];
    *((float *)this + 723) = v66;
    std::string::~string(v79);
    std::string::~string(v80);
  }
  if ( v8 )
  {
    v20 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 354);
    v21 = (float)(int)v20;
    if ( v20 < 0 )
      v21 = v21 + 1.8446744e19;
    v22 = v21 / (float)(int)*((_QWORD *)this + 362);
    v67 = 0.0;
    v68 = 0.0;
    v69 = 0.0;
    v70 = 0.0;
    v71 = 0.0;
    v72 = 0.0;
    if ( v22 > 0.0 )
    {
      if ( v9[100] )
      {
        v65 = *((_QWORD *)v9 + 8);
        v66 = *((float *)v9 + 18);
        v23 = (float)(v66 - *((float *)this + 714)) * (float)(1.0 / v22);
        v24 = (float)(*((float *)&v65 + 1) - *((float *)this + 713)) * (float)(1.0 / v22);
        v67 = (float)(*(float *)&v65 - *((float *)this + 712)) * (float)(1.0 / v22);
        v68 = v24;
        v69 = v23;
      }
      if ( v9[101] )
      {
        v65 = *(_QWORD *)(v9 + 76);
        v66 = *((float *)v9 + 21);
        v25 = (float)(v66 - *((float *)this + 717)) * (float)(1.0 / v22);
        v26 = (float)(*((float *)&v65 + 1) - *((float *)this + 716)) * (float)(1.0 / v22);
        v70 = (float)(*(float *)&v65 - *((float *)this + 715)) * (float)(1.0 / v22);
        v71 = v26;
        v72 = v25;
      }
    }
    v79[0] = v9;
    v79[1] = this;
    v79[2] = &v70;
    v79[3] = &v67;
    if ( *(_BYTE *)(*((_QWORD *)this + 329) + 10LL) )
    {
      std::string::string(v80);
      v27 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 355);
      v28 = (float)(int)v27;
      if ( v27 < 0 )
        v28 = v28 + 1.8446744e19;
      v29 = (float)(int)*((_QWORD *)this + 362);
      v30 = (unsigned int)MPCConstantManager::GetInstance();
      MPCConstantManager::GetConstant<float>(v30);
      std::string::~string(v80);
      if ( v29 <= (float)(v28 / v29) )
        goto LABEL_17;
      std::string::string(v81);
      std::string::string(v80);
      v6 = 3;
      LODWORD(v63) = 3;
      v31 = (unsigned int)MPCConstantManager::GetInstance();
      MPCConstantManager::GetConstant<float>(v31);
      v32 = (unsigned int)MPCConstantManager::GetInstance();
      MPCConstantManager::GetConstant<float>(v32);
      if ( (unsigned __int8)lambda_118dc2bc630108594922f76d93a95b91_::operator()(v79) )
LABEL_17:
        v33 = 0;
      else
        v33 = 1;
      *((_BYTE *)this + 2824) = v33;
      if ( (v6 & 2) != 0 )
      {
        v6 &= ~2u;
        std::string::~string(v80);
      }
      if ( (v6 & 1) != 0 )
        std::string::~string(v81);
      *((_QWORD *)this + 355) = *((_QWORD *)a2 + 2);
      v34 = *((_DWORD *)a2 + 292) == 1;
      *((_BYTE *)this + 3240) = v34;
      *((_BYTE *)this + 3241) = v34;
    }
    if ( !*((_BYTE *)this + 2824) && (unsigned __int8)lambda_118dc2bc630108594922f76d93a95b91_::operator()(v79) )
    {
      ++*((_DWORD *)this + 705);
      std::string::string(v81);
      v35 = (unsigned int)MPCConstantManager::GetInstance();
      v58 = *((_DWORD *)this + 705) >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(v35);
      std::string::~string(v81);
    }
    v63 = **((float **)this + 6);
    v36 = (_DWORD *)((char *)this + 2820);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
      (unsigned int)&v63,
      (unsigned int)&v58,
      (_DWORD)this + 2820,
      (_DWORD)v9 + 76,
      (__int64)(v9 + 80),
      (__int64)(v9 + 84),
      (__int64)(v9 + 64),
      (__int64)(v9 + 68),
      (__int64)(v9 + 72),
      (__int64)&v70,
      (__int64)&v71,
      (__int64)&v72,
      (__int64)&v67,
      (__int64)&v68,
      (__int64)&v69,
      (__int64)&v73,
      (__int64)&v74,
      (__int64)&v75,
      (__int64)this + 2884,
      (__int64)this + 2888,
      (__int64)this + 2892,
      (__int64)a2 + 1168);
  }
  else
  {
    v36 = (_DWORD *)((char *)this + 2820);
  }
  v37 = (_BYTE *)*((_QWORD *)this + 329);
  if ( v37[11] )
  {
    v38 = MPCHolographicInputManager::GetInstance();
    FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(v38);
    if ( MPCHolographicInputManager::IsExclusiveTarget(FocusedTarget)
      && (MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2) || *(_BYTE *)(*((_QWORD *)this + 333) + 8LL) || v58) )
    {
      v40 = MPCHolographicInputManager::GetInstance();
      v41 = MPCHolographicInputManager::GetFocusedTarget(v40);
      IsExclusiveTarget = MPCHolographicInputManager::IsExclusiveTarget(v41);
      v42 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 355);
      v43 = (float)(int)v42;
      if ( v42 < 0 )
        v43 = v43 + 1.8446744e19;
      v63 = v43 / (float)(int)*((_QWORD *)this + 362);
      if ( !MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2) && !*(_BYTE *)(*((_QWORD *)this + 333) + 8LL) )
        v7 = 0;
      v60 = v7;
      v61 = 0;
      v62[0] = 0;
      pcbData[0] = **((_DWORD **)this + 6);
      ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool,unsigned int const &,bool &,float,bool>(
        (unsigned int)pcbData,
        (unsigned int)v62,
        (unsigned int)&v61,
        (unsigned int)&v60,
        (__int64)a2 + 1168,
        (__int64)&v58,
        (__int64)&v63,
        (__int64)&IsExclusiveTarget);
      v44 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v44 && *v44 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(v45);
      }
      goto LABEL_64;
    }
    if ( !byte_180136290 )
    {
      pcbData[0] = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\DWM",
        L"DisableBloomFor6dof",
        0x10u,
        0LL,
        &dword_18013628C,
        pcbData);
      byte_180136290 = 1;
    }
    if ( dword_18013628C != 1 )
      MPCManager::SendHomeGesture(
        MPCManager::s_instance,
        **((_DWORD **)this + 6),
        *(_DWORD *)(*((_QWORD *)this + 6) + 4LL));
    v46 = MPCHolographicInputManager::GetInstance();
    v47 = MPCHolographicInputManager::GetFocusedTarget(v46);
    v62[0] = MPCHolographicInputManager::IsExclusiveTarget(v47);
    v48 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 355);
    v49 = (float)(int)v48;
    if ( v48 < 0 )
      v49 = v49 + 1.8446744e19;
    *(float *)pcbData = v49 / (float)(int)*((_QWORD *)this + 362);
    if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2) || (v50 = 0, *(_BYTE *)(*((_QWORD *)this + 333) + 8LL)) )
      v50 = 1;
    v60 = 0;
    IsExclusiveTarget = 1;
LABEL_58:
    v61 = v50;
    v63 = **((float **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool,unsigned int const &,bool &,float,bool>(
      (unsigned int)&v63,
      (unsigned int)&IsExclusiveTarget,
      (unsigned int)&v60,
      (unsigned int)&v61,
      (__int64)a2 + 1168,
      (__int64)&v58,
      (__int64)pcbData,
      (__int64)v62);
    goto LABEL_64;
  }
  if ( v37[13] )
  {
    MPCManager::OnInteractiveIntentGesture(MPCManager::s_instance, *((_QWORD *)this + 6), 5LL);
    v51 = MPCHolographicInputManager::GetInstance();
    v52 = MPCHolographicInputManager::GetFocusedTarget(v51);
    v62[0] = MPCHolographicInputManager::IsExclusiveTarget(v52);
    v53 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 355);
    v54 = (float)(int)v53;
    if ( v53 < 0 )
      v54 = v54 + 1.8446744e19;
    *(float *)pcbData = v54 / (float)(int)*((_QWORD *)this + 362);
    if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2) || (v50 = 0, *(_BYTE *)(*((_QWORD *)this + 333) + 8LL)) )
      v50 = 1;
    v60 = 1;
    IsExclusiveTarget = 0;
    goto LABEL_58;
  }
  if ( v37[9] && *((_BYTE *)this + 3240) )
  {
    v55 = *((_DWORD *)a2 + 292);
    if ( v55 != *((_DWORD *)this + 811) )
    {
      MPCManager::OnButtonsChangedDuringHomeGesture(MPCManager::s_instance, **((_DWORD **)this + 6), 0x2000u, v55);
      v55 = *((_DWORD *)a2 + 292);
    }
    **(_BYTE **)pcbData = v55 != 0;
    *((_DWORD *)this + 811) = *((_DWORD *)a2 + 292);
  }
LABEL_64:
  if ( *(_BYTE *)(*((_QWORD *)this + 329) + 12LL) )
  {
    *v36 = 0;
    *((_BYTE *)this + 2824) = 0;
    v66 = 0.0;
    *(_QWORD *)((char *)this + 2884) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((float *)this + 723) = v66;
    *((_BYTE *)this + 3240) = 0;
    *((_DWORD *)this + 811) = 0;
  }
  if ( v9[100] )
  {
    v56 = *((_DWORD *)v9 + 18);
    *((_QWORD *)this + 356) = *((_QWORD *)v9 + 8);
    *((_DWORD *)this + 714) = v56;
  }
  if ( v9[101] )
  {
    v57 = *((_DWORD *)v9 + 21);
    *(_QWORD *)((char *)this + 2860) = *(_QWORD *)(v9 + 76);
    *((_DWORD *)this + 717) = v57;
  }
  if ( *((_BYTE *)this + 3232) )
  {
    *((_QWORD *)this + 359) = v76;
    *((float *)this + 720) = v77;
  }
  *((_QWORD *)this + 354) = *((_QWORD *)a2 + 2);
}
