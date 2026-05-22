/*
 * XREFs of ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003E6BC
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18003E020 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18003F974 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041574 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800418EC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$ch.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x18004D088 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x18004D130 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054C5C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054D70 (-IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054EE4 (-GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV-$com_ptr_t@UIMPCInputProviderBase@@Ue.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     sqrtf_0 @ 0x1800E3205 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  float v2; // xmm0_4
  char v5; // r12
  unsigned __int64 v6; // rcx
  struct MPCGestureHandlerManager *Instance; // rcx
  bool v8; // dl
  MPCButtonHoldHelper **v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  struct MPCGestureHandlerManager *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  char v17; // di
  char *v18; // r14
  int v19; // eax
  bool v20; // bl
  struct MPCGestureHandlerManager *v21; // rcx
  char v22; // bl
  int v23; // eax
  __int64 v24; // rax
  volatile signed __int32 *v25; // rdi
  char v26; // r12
  char v27; // bl
  int v28; // eax
  float v29; // xmm0_4
  int v30; // eax
  int v31; // eax
  char v32; // bl
  int v33; // eax
  float v34; // xmm1_4
  struct MPCGestureHandlerManager *v35; // rcx
  char v36; // bl
  int v37; // eax
  int v38; // eax
  struct MPCGestureHandlerManager *v39; // rcx
  char v40; // di
  float v41; // xmm0_4
  int v42; // eax
  int v43; // eax
  unsigned int v44; // edi
  unsigned int v45; // ebx
  struct MPCGestureHandlerManager *v46; // rcx
  struct MPCGestureHandlerManager *v47; // rcx
  char IsWorkspaceScrolling; // bl
  struct MPCGestureHandlerManager *v49; // rcx
  float LastScrollVelocityAvg; // xmm0_4
  int v51; // eax
  MPCButtonHoldHelper *v52; // rax
  MPCButtonHoldHelper *v53; // rbx
  MPCButtonHoldHelper *v54; // rcx
  MPCGestureHandlerManager *v55; // rcx
  char v56; // [rsp+28h] [rbp-E0h]
  volatile signed __int32 *v57; // [rsp+30h] [rbp-D8h]
  MPCButtonHoldHelper *v58; // [rsp+30h] [rbp-D8h]
  _QWORD *v59; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v60; // [rsp+40h] [rbp-C8h] BYREF
  char *v61; // [rsp+48h] [rbp-C0h] BYREF
  char *v62; // [rsp+50h] [rbp-B8h] BYREF
  char *v63; // [rsp+58h] [rbp-B0h] BYREF
  char *v64; // [rsp+60h] [rbp-A8h] BYREF
  char *v65; // [rsp+68h] [rbp-A0h] BYREF
  char *v66; // [rsp+70h] [rbp-98h] BYREF
  char *v67; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v68; // [rsp+80h] [rbp-88h] BYREF
  __int64 v69; // [rsp+88h] [rbp-80h]
  __int64 v70; // [rsp+90h] [rbp-78h]
  __int64 v71; // [rsp+98h] [rbp-70h]
  _BYTE v72[32]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v73[32]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v74[32]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v75[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v76[32]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v77[32]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v78[32]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v79[32]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v80[32]; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v81[32]; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v82[32]; // [rsp+1E0h] [rbp+D8h] BYREF

  v71 = -2LL;
  v5 = 0;
  v56 = 0;
  v59 = &v60;
  v6 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v60 = v6;
  if ( v6 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 8LL))(v6);
  Instance = MPCGestureHandlerManager::GetInstance();
  if ( !(unsigned __int8)MPCGestureHandlerManager::IsWorkspaceScrolling(Instance, &v60)
    || (v8 = 0, *((_BYTE *)this + 2298)) )
  {
    v8 = 1;
  }
  v9 = (MPCButtonHoldHelper **)((char *)this + 2648);
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 331), v8, *((_QWORD *)a2 + 2));
  *((_DWORD *)a2 + 278) = *((_DWORD *)a2 + 151);
  *((_DWORD *)a2 + 279) = *((_DWORD *)a2 + 152);
  *((_DWORD *)a2 + 274) = 0;
  v10 = *((_QWORD *)this + 335);
  v11 = *(_QWORD *)(v10 + 24);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v11 = *(_QWORD *)(v10 + 24);
  }
  v69 = *(_QWORD *)(v10 + 16);
  v70 = v11;
  if ( !*(_BYTE *)(v69 + 8) )
    goto LABEL_13;
  v57 = (volatile signed __int32 *)&v61;
  v61 = (char *)this + 24;
  v12 = v11;
  if ( this != (MPCSixDofProcessor *)-24LL )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 8LL))((char *)this + 24);
  v13 = MPCGestureHandlerManager::GetInstance();
  if ( (unsigned __int8)MPCGestureHandlerManager::IsWorkspaceScrolling(v13, &v61) )
LABEL_13:
    v12 = v11;
  else
    v5 = 1;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
    {
      v14 = v70;
      (**(void (__fastcall ***)(__int64))v70)(v70);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
    }
  }
  if ( v5 )
  {
    v15 = *((_QWORD *)this + 335);
    v16 = *(volatile signed __int32 **)(v15 + 24);
    if ( v16 )
    {
      _InterlockedIncrement(v16 + 2);
      v16 = *(volatile signed __int32 **)(v15 + 24);
    }
    v17 = *(_BYTE *)(*(_QWORD *)(v15 + 16) + 10LL);
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    std::string::string(v72);
    v18 = (char *)this + 24;
    v19 = (unsigned int)MPCConstantManager::GetInstance();
    v20 = (unsigned __int8)MPCConstantManager::GetConstant<bool>(v19)
       && (v17 || *(_BYTE *)(*((_QWORD *)this + 335) + 13LL));
    std::string::~string(v72);
    if ( v20 )
    {
      v62 = (char *)this + 24;
      if ( this != (MPCSixDofProcessor *)-24LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))((char *)this + 24);
      v21 = MPCGestureHandlerManager::GetInstance();
      *((_DWORD *)a2 + 274) = (unsigned __int8)MPCGestureHandlerManager::IsInjecting(v21, &v62) != 0 ? 7 : 1;
      goto LABEL_34;
    }
    return;
  }
  std::string::string(v73);
  v22 = 4;
  v18 = (char *)this + 24;
  v23 = (unsigned int)MPCConstantManager::GetInstance();
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(v23)
    || !*((_BYTE *)this + 2308)
    || *((_DWORD *)this + 576) == 2 )
  {
    v25 = v57;
LABEL_43:
    v26 = 0;
    goto LABEL_44;
  }
  v24 = *((_QWORD *)this + 335);
  v25 = *(volatile signed __int32 **)(v24 + 24);
  if ( v25 )
  {
    _InterlockedIncrement(v25 + 2);
    v25 = *(volatile signed __int32 **)(v24 + 24);
  }
  v22 = 12;
  if ( *(_BYTE *)(*(_QWORD *)(v24 + 16) + 12LL) )
    goto LABEL_43;
  v26 = 1;
LABEL_44:
  if ( (v22 & 8) != 0 )
  {
    v22 &= ~8u;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
  }
  v27 = v22 & 0xFB;
  std::string::~string(v73);
  if ( v26 )
  {
    std::string::string(v74);
    v28 = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(v28);
    v29 = v2 * (float)(*((float *)this + 688) + *((float *)this + 703));
    *((float *)a2 + 275) = v29;
    std::string::~string(v74);
    std::string::string(v75);
    v30 = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(v30);
    *((float *)a2 + 276) = v29 * (float)(*((float *)this + 704) + *((float *)this + 689));
    std::string::~string(v75);
    std::string::string(v76);
    v31 = (unsigned int)MPCConstantManager::GetInstance();
    v32 = MPCConstantManager::GetConstant<bool>(v31);
    std::string::~string(v76);
    if ( v32 )
      *((float *)a2 + 276) = *((float *)a2 + 276) * -1.0;
    std::string::string(v77);
    sqrtf_0(
      (float)((float)(*((float *)this + 703) + *((float *)this + 688))
            * (float)(*((float *)this + 703) + *((float *)this + 688)))
    + (float)((float)(*((float *)this + 704) + *((float *)this + 689))
            * (float)(*((float *)this + 704) + *((float *)this + 689))));
    v33 = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(v33);
    std::string::~string(v77);
    v34 = *((float *)this + 689) + *((float *)this + 704);
    *((float *)this + 703) = *((float *)this + 703) + *((float *)this + 688);
    *((float *)this + 704) = v34;
    v63 = (char *)this + 24;
    if ( this != (MPCSixDofProcessor *)-24LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))((char *)this + 24);
    v35 = MPCGestureHandlerManager::GetInstance();
    if ( (unsigned __int8)MPCGestureHandlerManager::IsWorkspaceScrolling(v35, &v63) )
    {
      *(_QWORD *)((char *)a2 + 1100) = 0LL;
      *((_BYTE *)this + 2298) = 1;
      v56 = 1;
    }
    *((_DWORD *)a2 + 274) = 5;
    *((_DWORD *)this + 575) = 0;
LABEL_89:
    if ( !v56 )
      return;
    goto LABEL_90;
  }
  std::string::string(v79);
  v36 = v27 | 0x10;
  v37 = (unsigned int)MPCConstantManager::GetInstance();
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(v37) )
    goto LABEL_66;
  std::string::string(v78);
  v36 |= 0x20u;
  v38 = (unsigned int)MPCConstantManager::GetInstance();
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(v38)
    || *((_BYTE *)this + 2298)
    || !*((_BYTE *)this + 2308)
    || !*((_BYTE *)*v9 + 8)
    || *((_BYTE *)*v9 + 9) )
  {
    goto LABEL_66;
  }
  v64 = (char *)this + 24;
  if ( this != (MPCSixDofProcessor *)-24LL )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))((char *)this + 24);
  v39 = MPCGestureHandlerManager::GetInstance();
  v40 = 1;
  if ( (unsigned __int8)MPCGestureHandlerManager::IsInjecting(v39, &v64) )
LABEL_66:
    v40 = 0;
  if ( (v36 & 0x20) != 0 )
    std::string::~string(v78);
  std::string::~string(v79);
  if ( !v40 )
  {
    v65 = (char *)this + 24;
    if ( this != (MPCSixDofProcessor *)-24LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))((char *)this + 24);
    v46 = MPCGestureHandlerManager::GetInstance();
    if ( !(unsigned __int8)MPCGestureHandlerManager::IsInjecting(v46, &v65) && !*((_BYTE *)this + 2309) )
      return;
    v66 = (char *)this + 24;
    if ( this != (MPCSixDofProcessor *)-24LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))((char *)this + 24);
    v47 = MPCGestureHandlerManager::GetInstance();
    IsWorkspaceScrolling = MPCGestureHandlerManager::IsWorkspaceScrolling(v47, &v66);
    MPCSixDofProcessor::EndGesture(this);
    if ( !IsWorkspaceScrolling )
      return;
    std::string::string(v82);
    v67 = (char *)this + 24;
    if ( this != (MPCSixDofProcessor *)-24LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))((char *)this + 24);
    v49 = MPCGestureHandlerManager::GetInstance();
    LastScrollVelocityAvg = MPCGestureHandlerManager::GetLastScrollVelocityAvg(v49, &v67);
    v51 = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(v51);
    v58 = (MPCButtonHoldHelper *)operator new(0x28uLL);
    v52 = MPCButtonHoldHelper::MPCButtonHoldHelper(
            v58,
            LastScrollVelocityAvg * (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(LastScrollVelocityAvg) & _xmm));
    v53 = v52;
    if ( v9 != (MPCButtonHoldHelper **)&v68 )
    {
      v53 = 0LL;
      v54 = *v9;
      *v9 = v52;
      if ( !v54 )
      {
LABEL_88:
        std::string::~string(v82);
        goto LABEL_89;
      }
      (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v54)(v54, 1LL);
      v52 = 0LL;
    }
    if ( v52 )
      (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v53)(v53, 1LL);
    goto LABEL_88;
  }
  ++*((_DWORD *)this + 575);
  std::string::string(v80);
  v41 = sqrtf_0(
          (float)((float)(*((float *)this + 681) - *((float *)this + 687))
                * (float)(*((float *)this + 681) - *((float *)this + 687)))
        + (float)((float)(*((float *)this + 680) - *((float *)this + 686))
                * (float)(*((float *)this + 680) - *((float *)this + 686))));
  v42 = (unsigned int)MPCConstantManager::GetInstance();
  MPCConstantManager::GetConstant<float>(v42);
  std::string::~string(v80);
  if ( (float)(int)v41 > v41 )
    *((_DWORD *)this + 575) = 0;
  std::string::string(v81);
  v43 = (unsigned int)MPCConstantManager::GetInstance();
  v44 = MPCConstantManager::GetConstant<unsigned long>(v43);
  v45 = *((_DWORD *)this + 575);
  std::string::~string(v81);
  if ( v45 >= v44 )
  {
    *((_DWORD *)a2 + 274) = 1;
LABEL_34:
    *((_BYTE *)this + 2298) = 1;
LABEL_90:
    *((_OWORD *)a2 + 70) = *(_OWORD *)((char *)a2 + 612);
    *((_DWORD *)a2 + 284) = *((_DWORD *)a2 + 158);
    v68 = &v59;
    v59 = v18;
    if ( v18 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18);
    v55 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v55);
    *((_BYTE *)this + 2309) = 1;
  }
}
