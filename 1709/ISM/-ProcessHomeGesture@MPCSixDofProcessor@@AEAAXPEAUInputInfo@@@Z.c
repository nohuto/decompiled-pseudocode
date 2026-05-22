/*
 * XREFs of ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004DC58
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18004E770 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x18004D414 (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18004DBE8 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     _lambda_08b376247c782ac03014313fa308e4b5_::operator() @ 0x18004E410 (_lambda_08b376247c782ac03014313fa308e4b5_--operator().c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ @ 0x18004E66C (-SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x180051BBC (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_N_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N11AEBIAEA_N$$QEAM1@Z @ 0x180051D88 (--$MPCSixDofProcessor_HomeEvent@K_N_N_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N11AEBIAEA_N$$QEA.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x180058C6C (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x18005906C (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005DB94 (-OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180060C14 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

void __fastcall MPCSixDofProcessor::ProcessHomeGesture(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char *v2; // r13
  bool v4; // bl
  _DWORD *v6; // rdi
  unsigned int v7; // esi
  bool v8; // r12
  __m128 v9; // xmm5
  float v10; // xmm6_4
  __m128 v11; // xmm3
  float v12; // xmm7_4
  float v13; // xmm0_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  __m128 v16; // xmm4
  float v17; // xmm6_4
  __int64 v18; // rcx
  float v19; // xmm7_4
  __int64 v20; // rax
  float v21; // xmm5_4
  float v22; // xmm5_4
  float v23; // eax
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  float v27; // eax
  float v28; // xmm0_4
  float v29; // xmm2_4
  float v30; // xmm4_4
  __int64 v31; // rax
  __int64 v32; // rcx
  float v33; // xmm1_4
  bool v34; // zf
  char v35; // al
  __int64 v36; // rax
  MPCHolographicInputManager *v37; // rax
  struct IInputTarget *v38; // rax
  MPCHolographicInputManager *v39; // rax
  struct IInputTarget *v40; // rax
  __int64 v41; // rax
  float v42; // xmm1_4
  __int64 v43; // rax
  float *v44; // rax
  _DWORD *v45; // rcx
  ISMTracing *v46; // rcx
  MPCHolographicInputManager *v47; // rax
  struct IInputTarget *v48; // rax
  __int64 v49; // rax
  float v50; // xmm1_4
  __int64 v51; // rax
  MPCHolographicInputManager *Instance; // rax
  struct IInputTarget *FocusedTarget; // rax
  __int64 v54; // rax
  float v55; // xmm1_4
  __int64 v56; // rax
  int v57; // eax
  int v58; // eax
  float v59; // eax
  _BYTE v60[4]; // [rsp+B0h] [rbp-80h] BYREF
  float v61; // [rsp+B4h] [rbp-7Ch] BYREF
  float v62; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v63; // [rsp+BCh] [rbp-74h]
  float v64; // [rsp+C4h] [rbp-6Ch]
  float v65; // [rsp+C8h] [rbp-68h] BYREF
  float v66; // [rsp+CCh] [rbp-64h] BYREF
  float v67; // [rsp+D0h] [rbp-60h] BYREF
  float v68; // [rsp+D8h] [rbp-58h] BYREF
  float v69; // [rsp+DCh] [rbp-54h] BYREF
  float v70; // [rsp+E0h] [rbp-50h] BYREF
  float v71; // [rsp+E8h] [rbp-48h] BYREF
  float v72; // [rsp+ECh] [rbp-44h] BYREF
  float v73; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v74; // [rsp+F8h] [rbp-38h]
  float v75; // [rsp+100h] [rbp-30h]
  _QWORD v76[14]; // [rsp+108h] [rbp-28h] BYREF
  bool v77; // [rsp+1C0h] [rbp+90h] BYREF
  int v78; // [rsp+1C8h] [rbp+98h] BYREF
  bool IsExclusiveTarget; // [rsp+1D0h] [rbp+A0h] BYREF
  char v80; // [rsp+1D8h] [rbp+A8h] BYREF

  v2 = (char *)a2 + 1396;
  v4 = *((_BYTE *)a2 + 1344) & 1;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 488), v4, *((_QWORD *)a2 + 2));
  v6 = (_DWORD *)((char *)this + 4092);
  v7 = *((_DWORD *)this + 1023);
  v8 = v7 >= *(_DWORD *)MPCSixDofProcessor::s_homeCancelExceedThresholdMaxCount;
  v74 = 0LL;
  v75 = 0.0;
  v71 = 0.0;
  v72 = 0.0;
  v73 = 0.0;
  v77 = v7 >= *(_DWORD *)MPCSixDofProcessor::s_homeCancelExceedThresholdMaxCount;
  if ( *((_BYTE *)this + 4500) )
  {
    v9 = (__m128)LODWORD(FLOAT_1_0);
    v9.m128_f32[0] = 1.0 - MPCSixDofProcessor::s_homeDistanceWeight;
    v10 = *((float *)a2 + 180);
    v11 = (__m128)LODWORD(MPCSixDofProcessor::s_homeDistanceWeight);
    v12 = *((float *)a2 + 181);
    LODWORD(v74) = *((_DWORD *)a2 + 179);
    v13 = *(float *)&v74 - *((float *)this + 1036);
    v75 = v12;
    v14 = v12 - *((float *)this + 1038);
    v15 = (float)(1.0 - MPCSixDofProcessor::s_homeDistanceWeight) * *((float *)this + 1039);
    v16 = v9;
    v16.m128_f32[0] = (float)(1.0 - MPCSixDofProcessor::s_homeDistanceWeight) * *((float *)this + 1040);
    v9.m128_f32[0] = (float)(1.0 - MPCSixDofProcessor::s_homeDistanceWeight) * *((float *)this + 1041);
    v71 = v13;
    *((float *)&v74 + 1) = v10;
    v17 = v10 - *((float *)this + 1037);
    v73 = v14;
    v11.m128_f32[0] = (float)(MPCSixDofProcessor::s_homeDistanceWeight * v13) + v15;
    v9.m128_f32[0] = v9.m128_f32[0] + (float)(v14 * MPCSixDofProcessor::s_homeDistanceWeight);
    v72 = v17;
    v16.m128_f32[0] = v16.m128_f32[0] + (float)(MPCSixDofProcessor::s_homeDistanceWeight * v17);
    v64 = v9.m128_f32[0];
    *(_QWORD *)((char *)this + 4156) = _mm_unpacklo_ps(v11, v16).m128_u64[0];
    *((_DWORD *)this + 1041) = v9.m128_i32[0];
  }
  if ( v4 )
  {
    v18 = *((_QWORD *)a2 + 2);
    v19 = (float)(int)*((_QWORD *)this + 521);
    v20 = v18 - *((_QWORD *)this + 513);
    v21 = (float)(int)v20;
    if ( v20 < 0 )
      v21 = v21 + 1.8446744e19;
    v65 = 0.0;
    v66 = 0.0;
    v67 = 0.0;
    v68 = 0.0;
    v69 = 0.0;
    v70 = 0.0;
    v22 = v21 / v19;
    if ( v22 > 0.0 )
    {
      if ( v2[100] )
      {
        v23 = *((float *)v2 + 18);
        v63 = *((_QWORD *)v2 + 8);
        v24 = *((float *)&v63 + 1) - *((float *)this + 1031);
        v25 = *(float *)&v63 - *((float *)this + 1030);
        v64 = v23;
        v26 = (float)(1.0 / v22) * (float)(v23 - *((float *)this + 1032));
        v65 = (float)(1.0 / v22) * v25;
        v66 = v24 * (float)(1.0 / v22);
        v67 = v26;
      }
      if ( v2[101] )
      {
        v27 = *((float *)v2 + 21);
        v63 = *(_QWORD *)(v2 + 76);
        v28 = *(float *)&v63 - *((float *)this + 1033);
        v29 = *((float *)&v63 + 1) - *((float *)this + 1034);
        v64 = v27;
        v30 = (float)(1.0 / v22) * (float)(v27 - *((float *)this + 1035));
        v69 = (float)(1.0 / v22) * v29;
        v68 = (float)(1.0 / v22) * v28;
        v70 = v30;
      }
    }
    v76[0] = v2;
    v76[1] = &v68;
    v76[2] = &v65;
    v31 = *((_QWORD *)this + 488);
    v76[3] = this;
    if ( *(_BYTE *)(v31 + 10) )
    {
      v32 = v18 - *((_QWORD *)this + 514);
      v33 = (float)(int)v32;
      if ( v32 < 0 )
        v33 = v33 + 1.8446744e19;
      if ( MPCSixDofProcessor::s_homeAllowTimeBetweenClicksInSec <= (float)(v33 / v19)
        || (v34 = (unsigned __int8)lambda_08b376247c782ac03014313fa308e4b5_::operator()(v76) == 0, v35 = 1, !v34) )
      {
        v35 = 0;
      }
      *((_BYTE *)this + 4096) = v35;
      *((_QWORD *)this + 514) = *((_QWORD *)a2 + 2);
    }
    if ( !*((_BYTE *)this + 4096) && (unsigned __int8)lambda_08b376247c782ac03014313fa308e4b5_::operator()(v76) )
    {
      *v6 = v7 + 1;
      v8 = v7 + 1 >= *(_DWORD *)MPCSixDofProcessor::s_homeCancelExceedThresholdMaxCount;
      v77 = v8;
    }
    v78 = **((_DWORD **)this + 6);
    v6 = (_DWORD *)((char *)this + 4092);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
      (unsigned int)&v78,
      (unsigned int)&v77,
      (_DWORD)this + 4092,
      (_DWORD)v2 + 76,
      (__int64)(v2 + 80),
      (__int64)(v2 + 84),
      (__int64)(v2 + 64),
      (__int64)(v2 + 68),
      (__int64)(v2 + 72),
      (__int64)&v68,
      (__int64)&v69,
      (__int64)&v70,
      (__int64)&v65,
      (__int64)&v66,
      (__int64)&v67,
      (__int64)&v71,
      (__int64)&v72,
      (__int64)&v73,
      (__int64)this + 4156,
      (__int64)this + 4160,
      (__int64)this + 4164,
      (__int64)a2 + 1344);
  }
  v36 = *((_QWORD *)this + 488);
  if ( !*(_BYTE *)(v36 + 11) )
  {
    if ( !*(_BYTE *)(v36 + 13) )
      goto LABEL_49;
    MPCManager::OnInteractiveIntentGesture(MPCManager::s_instance, *((_QWORD *)this + 6), 5LL);
    Instance = MPCHolographicInputManager::GetInstance();
    FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance);
    IsExclusiveTarget = MPCHolographicInputManager::IsExclusiveTarget(FocusedTarget);
    v54 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 514);
    v55 = (float)(int)v54;
    if ( v54 < 0 )
      v55 = v55 + 1.8446744e19;
    v62 = v55 / (float)(int)*((_QWORD *)this + 521);
    if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2)
      || (v56 = *((_QWORD *)this + 492), LOBYTE(v78) = 0, *(_BYTE *)(v56 + 8)) )
    {
      LOBYTE(v78) = 1;
    }
    v80 = 1;
    v60[0] = 0;
    goto LABEL_48;
  }
  v37 = MPCHolographicInputManager::GetInstance();
  v38 = MPCHolographicInputManager::GetFocusedTarget(v37);
  if ( !MPCHolographicInputManager::IsExclusiveTarget(v38)
    || !MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2) && !*(_BYTE *)(*((_QWORD *)this + 492) + 8LL) && !v8 )
  {
    MPCSixDofProcessor::SendHomeEvent(this);
    v47 = MPCHolographicInputManager::GetInstance();
    v48 = MPCHolographicInputManager::GetFocusedTarget(v47);
    IsExclusiveTarget = MPCHolographicInputManager::IsExclusiveTarget(v48);
    v49 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 514);
    v50 = (float)(int)v49;
    if ( v49 < 0 )
      v50 = v50 + 1.8446744e19;
    v62 = v50 / (float)(int)*((_QWORD *)this + 521);
    if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2)
      || (v51 = *((_QWORD *)this + 492), LOBYTE(v78) = 0, *(_BYTE *)(v51 + 8)) )
    {
      LOBYTE(v78) = 1;
    }
    v80 = 0;
    v60[0] = 1;
LABEL_48:
    v61 = **((float **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool,unsigned int const &,bool &,float,bool>(
      (unsigned int)&v61,
      (unsigned int)v60,
      (unsigned int)&v80,
      (unsigned int)&v78,
      (__int64)a2 + 1344,
      (__int64)&v77,
      (__int64)&v62,
      (__int64)&IsExclusiveTarget);
    goto LABEL_49;
  }
  v39 = MPCHolographicInputManager::GetInstance();
  v40 = MPCHolographicInputManager::GetFocusedTarget(v39);
  IsExclusiveTarget = MPCHolographicInputManager::IsExclusiveTarget(v40);
  v41 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 514);
  v42 = (float)(int)v41;
  if ( v41 < 0 )
    v42 = v42 + 1.8446744e19;
  v61 = v42 / (float)(int)*((_QWORD *)this + 521);
  if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2)
    || (v43 = *((_QWORD *)this + 492), LOBYTE(v78) = 0, *(_BYTE *)(v43 + 8)) )
  {
    LOBYTE(v78) = 1;
  }
  v44 = (float *)*((_QWORD *)this + 6);
  v80 = 0;
  v60[0] = 0;
  v62 = *v44;
  ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool,unsigned int const &,bool &,float,bool>(
    (unsigned int)&v62,
    (unsigned int)v60,
    (unsigned int)&v80,
    (unsigned int)&v78,
    (__int64)a2 + 1344,
    (__int64)&v77,
    (__int64)&v61,
    (__int64)&IsExclusiveTarget);
  v45 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v45 && *v45 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(v46);
  }
LABEL_49:
  if ( *(_BYTE *)(*((_QWORD *)this + 488) + 12LL) )
  {
    v64 = 0.0;
    *(_QWORD *)((char *)this + 4156) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1041) = 0;
    *v6 = 0;
    *((_BYTE *)this + 4096) = 0;
  }
  if ( v2[100] )
  {
    v57 = *((_DWORD *)v2 + 18);
    *((_QWORD *)this + 515) = *((_QWORD *)v2 + 8);
    *((_DWORD *)this + 1032) = v57;
  }
  if ( v2[101] )
  {
    v58 = *((_DWORD *)v2 + 21);
    *(_QWORD *)((char *)this + 4132) = *(_QWORD *)(v2 + 76);
    *((_DWORD *)this + 1035) = v58;
  }
  if ( *((_BYTE *)this + 4500) )
  {
    v59 = v75;
    *((_QWORD *)this + 518) = v74;
    *((float *)this + 1038) = v59;
  }
  *((_QWORD *)this + 513) = *((_QWORD *)a2 + 2);
}
