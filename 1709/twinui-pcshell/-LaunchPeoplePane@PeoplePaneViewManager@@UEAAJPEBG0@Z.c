/*
 * XREFs of ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801108F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800279DC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ACE30 (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AF8B0 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AFFD8 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800B010C (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800B0388 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_1800B0388.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x18010FE64 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x18011018C (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801130CC (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18011315C (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?RegisterApplications@PeoplePaneViewManager@@UEAAJXZ @ 0x180114780 (-RegisterApplications@PeoplePaneViewManager@@UEAAJXZ.c)
 *     ??$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x180116B24 (--$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ca651380094f5bc4672f860ee3183d95___ @ 0x180116BF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_ca651380094f5bc4672f860ee3183d95___.c)
 *     ??$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x180116D48 (--$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x180117074 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePane(
        RTL_SRWLOCK *this,
        unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  void *v6; // r15
  __int64 v7; // rbx
  int v8; // eax
  int v9; // esi
  void *v10; // rbx
  int v11; // eax
  void *v12; // rdi
  void *v13; // rax
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  HWND WindowW; // rax
  const char *v18; // r9
  int v19; // eax
  char *v20; // rsi
  __int64 v21; // r8
  volatile signed __int32 *v22; // rbx
  int v23; // eax
  void *v24; // r14
  int v25; // eax
  void *v26; // rax
  void *v27; // rax
  int Ptr_high; // esi
  IUnknown *v29; // rdi
  IUnknown *v30; // rax
  IUnknown *v31; // rbx
  struct IUnknownVtbl *v32; // rax
  struct IUnknownVtbl *v33; // rax
  __int64 v34; // rbx
  void *Src; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID v37; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-C0h]
  __int64 v39; // [rsp+50h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-B0h]
  LPVOID v41; // [rsp+60h] [rbp-A8h] BYREF
  struct IUnknownVtbl *v42; // [rsp+68h] [rbp-A0h]
  struct IUnknownVtbl *v43; // [rsp+70h] [rbp-98h]
  __int64 v44; // [rsp+78h] [rbp-90h]
  void *v45; // [rsp+80h] [rbp-88h] BYREF
  __int128 v46; // [rsp+88h] [rbp-80h]
  char v47; // [rsp+98h] [rbp-70h]
  LPVOID v48; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-60h]
  char v50; // [rsp+B8h] [rbp-50h]
  PSRWLOCK v51; // [rsp+C0h] [rbp-48h] BYREF
  char *v52; // [rsp+C8h] [rbp-40h]
  char *v53; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v54; // [rsp+D8h] [rbp-30h]
  __int128 v55; // [rsp+E0h] [rbp-28h] BYREF
  int v56; // [rsp+F0h] [rbp-18h]
  PSRWLOCK SRWLock; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v58; // [rsp+100h] [rbp-8h]
  __int64 v59; // [rsp+110h] [rbp+8h]
  RTL_SRWLOCK *v60; // [rsp+118h] [rbp+10h]
  IUnknown *v61; // [rsp+120h] [rbp+18h]
  __int128 v62; // [rsp+128h] [rbp+20h]
  char v63; // [rsp+138h] [rbp+30h]
  _QWORD v64[4]; // [rsp+148h] [rbp+40h] BYREF
  int v65; // [rsp+168h] [rbp+60h]
  int *v66; // [rsp+170h] [rbp+68h]
  int *v67; // [rsp+178h] [rbp+70h]
  int v68; // [rsp+180h] [rbp+78h] BYREF
  char v69; // [rsp+184h] [rbp+7Ch]
  int v70; // [rsp+1A8h] [rbp+A0h] BYREF
  const char *v71; // [rsp+1B0h] [rbp+A8h]
  __int64 v72; // [rsp+1B8h] [rbp+B0h]
  char v73; // [rsp+1C0h] [rbp+B8h]
  __int64 v74; // [rsp+1C8h] [rbp+C0h]
  _BYTE v75[144]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v76; // [rsp+260h] [rbp+158h]
  __int64 v77; // [rsp+268h] [rbp+160h]
  __int64 v78; // [rsp+270h] [rbp+168h]
  __int64 v79; // [rsp+278h] [rbp+170h]
  RTL_SRWLOCK *v80; // [rsp+288h] [rbp+180h]
  LPVOID v81; // [rsp+290h] [rbp+188h]
  struct IUnknownVtbl *v82; // [rsp+298h] [rbp+190h]
  struct IUnknownVtbl *v83; // [rsp+2A0h] [rbp+198h]
  char v84; // [rsp+2A8h] [rbp+1A0h]
  LPVOID v85; // [rsp+2B0h] [rbp+1A8h]
  __int128 v86; // [rsp+2B8h] [rbp+1B0h]
  char v87; // [rsp+2C8h] [rbp+1C0h]
  _QWORD v88[4]; // [rsp+2D0h] [rbp+1C8h] BYREF
  int v89; // [rsp+2F0h] [rbp+1E8h]
  RTL_SRWLOCK *v90; // [rsp+408h] [rbp+300h] BYREF
  LPVOID v91; // [rsp+410h] [rbp+308h]
  __int64 v92; // [rsp+418h] [rbp+310h]
  __int64 v93; // [rsp+420h] [rbp+318h]
  char v94; // [rsp+428h] [rbp+320h]
  LPVOID pv; // [rsp+430h] [rbp+328h]
  __int128 v96; // [rsp+438h] [rbp+330h]
  char v97; // [rsp+448h] [rbp+340h]
  _QWORD v98[39]; // [rsp+450h] [rbp+348h] BYREF
  _QWORD v99[40]; // [rsp+588h] [rbp+480h] BYREF
  _QWORD v100[40]; // [rsp+6C8h] [rbp+5C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+850h] [rbp+748h]

  v59 = -2LL;
  Src = a2;
  v6 = 0LL;
  v64[1] = 0LL;
  v64[2] = v64;
  v64[3] = 0LL;
  v65 = 0;
  v66 = &v70;
  v67 = &v68;
  v68 = 0;
  v69 = 0;
  v73 = 0;
  v70 = 0;
  v71 = "PeoplePaneAppLaunch";
  v72 = 0LL;
  v74 = 1LL;
  v76 = 0LL;
  v77 = 0LL;
  memset(v75, 0, sizeof(v75));
  v78 = 0LL;
  v79 = 0LL;
  v64[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  CommonPeopleTelemetry::PeoplePaneAppLaunch::StartActivity((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v64, a2);
  PeoplePaneViewManager::RegisterApplications((PeoplePaneViewManager *)&this[1]);
  v55 = 0LL;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId(&this[-11], Src, &v55) >= 0 )
  {
    v7 = v55;
    if ( *(_QWORD *)(v55 + 32) )
    {
      CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneSwitchToView<unsigned short const * &>(v64, &Src);
      if ( a3 )
      {
        v37 = 0LL;
        v38 = 0LL;
        v39 = 0LL;
        LOBYTE(v40) = 0;
        v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
               (__int64)&v37,
               (__int64)Src,
               0xFFFFFFFFFFFFFFFFuLL);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB0,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v8);
          v10 = v37;
LABEL_20:
          if ( v10 )
            CoTaskMemFree(v10);
          goto LABEL_62;
        }
        v45 = 0LL;
        v46 = 0uLL;
        v47 = 0;
        v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)&v45,
                (__int64)a3,
                0xFFFFFFFFFFFFFFFFuLL);
        v9 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB2,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v11);
          v10 = v37;
          v12 = v45;
          goto LABEL_18;
        }
        if ( *v67 != 1 )
          __fastfail(7u);
        wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
          (__int64)v64,
          &SRWLock);
        ++v67[18];
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)v99,
          v64);
        v99[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
        v90 = this - 11;
        v92 = v38;
        v93 = v39;
        v13 = v37;
        v10 = 0LL;
        v37 = 0LL;
        v39 = 0LL;
        v38 = 0LL;
        v91 = v13;
        v94 = 0;
        LOBYTE(v40) = 1;
        v96 = v46;
        v14 = v45;
        v12 = 0LL;
        v45 = 0LL;
        v46 = 0uLL;
        pv = v14;
        v97 = 0;
        v47 = 1;
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)v98,
          v99);
        v98[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
        v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_ca651380094f5bc4672f860ee3183d95___(
               v16,
               v15,
               HIDWORD(this[51].Ptr),
               &v90);
        v98[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v98);
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v98);
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v96 = 0LL;
        if ( v91 )
          CoTaskMemFree(v91);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xBE,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v9);
          v99[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
          wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v99);
          wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v99);
LABEL_18:
          if ( v12 )
            CoTaskMemFree(v12);
          goto LABEL_20;
        }
        v99[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v99);
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v99);
      }
      else
      {
        WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
        if ( !SetForegroundWindow(WindowW) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0xC2,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            v18);
        v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 32) + 32LL))(*(_QWORD *)(v7 + 32));
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC3,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v19);
      }
    }
LABEL_61:
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v64,
      0);
    v9 = 0;
    goto LABEL_62;
  }
  v56 = 0;
  v20 = (char *)operator new(0x60uLL);
  v52 = v20;
  *((_DWORD *)v20 + 2) = 1;
  *((_DWORD *)v20 + 3) = 1;
  *(_QWORD *)v20 = &std::_Ref_count_obj<PeoplePaneViewInfo>::`vftable';
  v51 = (PSRWLOCK)(v20 + 16);
  if ( v20 != (char *)-16LL )
  {
    std::wstring::wstring((unsigned __int64 *)v20 + 2, Src, v21);
    *((_QWORD *)v20 + 6) = 0LL;
    *((_DWORD *)v20 + 14) = 0;
    *((_QWORD *)v20 + 8) = 0LL;
    v20[72] = 0;
    *((_DWORD *)v20 + 19) = 0;
    *((_QWORD *)v20 + 10) = 0x28800000168LL;
    *((_QWORD *)v20 + 11) = 0LL;
  }
  v54 = (volatile signed __int32 *)v20;
  v53 = v20 + 16;
  PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)(v20 + 16));
  AcquireSRWLockExclusive(this + 5);
  v60 = this + 5;
  std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(&this[6], &v53);
  if ( this != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(this + 5);
  if ( v54 )
  {
    if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
    {
      v22 = v54;
      (**(void (__fastcall ***)(volatile signed __int32 *))v54)(v54);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
    }
  }
  *(_QWORD *)&v58 = this - 11;
  *((_QWORD *)&v58 + 1) = &Src;
  v62 = v58;
  v63 = 1;
  CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneNewView<unsigned short const * &>(v64, &Src);
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  LOBYTE(v44) = 0;
  v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&v41,
          (__int64)Src,
          0xFFFFFFFFFFFFFFFFuLL);
  v9 = v23;
  if ( v23 >= 0 )
  {
    v48 = 0LL;
    v49 = 0uLL;
    v50 = 0;
    v25 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (__int64)&v48,
            (__int64)a3,
            0xFFFFFFFFFFFFFFFFuLL);
    v9 = v25;
    if ( v25 >= 0 )
    {
      if ( *v67 != 1 )
        __fastfail(7u);
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        (__int64)v64,
        &v51);
      ++v67[18];
      if ( v51 )
        ReleaseSRWLockExclusive(v51);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)v100,
        v64);
      v100[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
      v80 = this - 11;
      v82 = v42;
      v83 = v43;
      v26 = v41;
      v24 = 0LL;
      v41 = 0LL;
      v43 = 0LL;
      v42 = 0LL;
      v81 = v26;
      v84 = 0;
      LOBYTE(v44) = 1;
      v86 = v49;
      v27 = v48;
      v48 = 0LL;
      v49 = 0uLL;
      v85 = v27;
      v87 = 0;
      v50 = 1;
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)v88,
        v100);
      v88[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
      Ptr_high = HIDWORD(this[51].Ptr);
      v29 = 0LL;
      v52 = 0LL;
      v30 = (IUnknown *)operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
      v31 = v30;
      if ( v30 )
      {
        v30->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
        HIDWORD(v30[1].lpVtbl) = 1;
        v30->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v31->lpVtbl = (struct IUnknownVtbl *)off_1802094E0;
        v31[2].lpVtbl = (struct IUnknownVtbl *)v80;
        v31[4].lpVtbl = v82;
        v31[5].lpVtbl = v83;
        v32 = (struct IUnknownVtbl *)v81;
        v81 = 0LL;
        v83 = 0LL;
        v82 = 0LL;
        v31[3].lpVtbl = v32;
        LOBYTE(v31[6].lpVtbl) = 0;
        v84 = 1;
        *(_OWORD *)&v31[8].lpVtbl = v86;
        v33 = (struct IUnknownVtbl *)v85;
        v85 = 0LL;
        v86 = 0uLL;
        v31[7].lpVtbl = v33;
        LOBYTE(v31[10].lpVtbl) = 0;
        v87 = 1;
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)&v31[11],
          (__int64)v88,
          v89 != 0);
        v31[11].lpVtbl = (struct IUnknownVtbl *)&CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
        v29 = v31;
        v52 = (char *)v31;
      }
      v61 = v29;
      v9 = Windows::Internal::ComTaskPool::RunTask(0, 2u, Ptr_high, 0, v29, 0LL);
      if ( v29 )
        ((void (__fastcall *)(IUnknown *))v29->lpVtbl->Release)(v29);
      v88[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v88);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v88);
      if ( v85 )
      {
        CoTaskMemFree(v85);
        v85 = 0LL;
      }
      v86 = 0LL;
      if ( v81 )
        CoTaskMemFree(v81);
      if ( v9 >= 0 )
      {
        v100[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v100);
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v100);
        goto LABEL_61;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xF1,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v9);
      v100[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v100);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v100);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xDF,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v25);
      v24 = v41;
      v6 = v48;
    }
    if ( v6 )
      CoTaskMemFree(v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xDD,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v23);
    v24 = v41;
  }
  if ( v24 )
    CoTaskMemFree(v24);
  PeoplePaneViewManager::RemovePaneViewInfoForContactId(
    (PeoplePaneViewManager *)&this[-11],
    (const unsigned __int16 *)Src);
LABEL_62:
  if ( *((_QWORD *)&v55 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v55 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v34 = *((_QWORD *)&v55 + 1);
      (***((void (__fastcall ****)(_QWORD))&v55 + 1))(*((_QWORD *)&v55 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v55 + 1) + 8LL))(*((_QWORD *)&v55 + 1));
    }
  }
  v64[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v64);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v64);
  return (unsigned int)v9;
}
