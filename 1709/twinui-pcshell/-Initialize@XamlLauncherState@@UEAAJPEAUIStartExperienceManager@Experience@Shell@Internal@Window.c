/*
 * XREFs of ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180187A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ @ 0x180188D2C (-PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VXamlLauncherState@@PEAUIStartExperienceManager@Experience@Shell@Internal@3@PEAUIInspectable@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z@Z @ 0x18018D3C0 (--$Callback@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VXamlLauncherState@@PEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUIInspectable@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z@Z @ 0x18018D468 (--$Callback@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows.c)
 *     ?Advise@FocusHoldingTank@@QEAAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1801906D4 (-Advise@FocusHoldingTank@@QEAAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@.c)
 *     GetSidStringFromToken @ 0x1801DE800 (GetSidStringFromToken.c)
 *     GetAssignedAccessTypeForUser @ 0x1801DE920 (GetAssignedAccessTypeForUser.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall XamlLauncherState::Initialize(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a3,
        struct IRealmActivationHistory *a4,
        struct IXamlLauncherStateCallback *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  bool v12; // bl
  FocusHoldingTank *v13; // rcx
  XamlLauncherState *v14; // r14
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  unsigned int v19; // ebx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // eax
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r15
  int v31; // eax
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdi
  int v35; // eax
  _DWORD *v36; // r13
  _DWORD *v37; // rax
  _DWORD *v38; // rbx
  int v39; // eax
  _DWORD *v40; // r15
  _DWORD *v41; // rax
  _DWORD *v42; // rbx
  int v43; // eax
  __int64 *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdi
  int v47; // eax
  __int64 *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r12
  int v51; // eax
  __int64 *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdi
  int v55; // eax
  __int64 *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // r12
  int v59; // eax
  __int64 *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdi
  int v63; // eax
  __int64 *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r12
  int v67; // eax
  _DWORD *v68; // rdi
  _DWORD *v69; // rax
  _DWORD *v70; // rbx
  int v71; // eax
  __int64 v72; // r12
  int v73; // eax
  __int64 v74; // rcx
  char *v75; // r8
  struct IXamlLauncherStateCallback *v76; // rsi
  int v77; // eax
  int v79[4]; // [rsp+20h] [rbp-E0h]
  HLOCAL hMem; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v81; // [rsp+38h] [rbp-C8h]
  __int64 v82; // [rsp+40h] [rbp-C0h]
  _BYTE v83[24]; // [rsp+48h] [rbp-B8h]
  __int64 v84; // [rsp+60h] [rbp-A0h]
  __int64 v85; // [rsp+68h] [rbp-98h] BYREF
  __int64 v86; // [rsp+70h] [rbp-90h]
  __int64 v87; // [rsp+78h] [rbp-88h] BYREF
  __int64 v88; // [rsp+80h] [rbp-80h]
  __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h] BYREF
  __int64 v91; // [rsp+98h] [rbp-68h]
  __int64 v92; // [rsp+A0h] [rbp-60h]
  __int64 v93; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v94; // [rsp+B0h] [rbp-50h]
  __int64 v95; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-40h]
  __int64 v97; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v98; // [rsp+D0h] [rbp-30h]
  __int64 v99; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v100; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v101; // [rsp+E8h] [rbp-18h]
  __int64 v102; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v103; // [rsp+F8h] [rbp-8h]
  _DWORD *v104; // [rsp+108h] [rbp+8h]
  _DWORD *v105; // [rsp+110h] [rbp+10h]
  __int64 v106; // [rsp+118h] [rbp+18h]
  _DWORD *v107; // [rsp+120h] [rbp+20h]
  __int64 v108; // [rsp+128h] [rbp+28h]
  __int128 v109; // [rsp+130h] [rbp+30h] BYREF
  __int128 v110; // [rsp+140h] [rbp+40h] BYREF
  __int128 v111; // [rsp+150h] [rbp+50h] BYREF
  __int128 v112; // [rsp+160h] [rbp+60h] BYREF
  __int128 v113; // [rsp+170h] [rbp+70h] BYREF
  __int128 v114; // [rsp+180h] [rbp+80h] BYREF
  __int128 v115; // [rsp+190h] [rbp+90h] BYREF
  __int128 v116; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v117; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v118; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v119; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v120; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v121[5]; // [rsp+1F0h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]
  __int64 v123; // [rsp+250h] [rbp+150h] BYREF
  __int64 v124; // [rsp+258h] [rbp+158h]
  __int64 v125; // [rsp+260h] [rbp+160h]
  __int64 v126; // [rsp+268h] [rbp+168h] BYREF

  v108 = -2LL;
  *((_DWORD *)this + 240) = GetCurrentThreadId();
  if ( *((struct Windows::Internal::Shell::Experience::IStartExperienceManager **)this + 7) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IStartExperienceManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct Windows::Internal::Shell::Experience::ICortanaExperienceManager **)this + 8) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *))(*(_QWORD *)a3 + 8LL))(a3);
    v10 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = a3;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( *((struct IRealmActivationHistory **)this + 9) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IRealmActivationHistory *))(*(_QWORD *)a4 + 8LL))(a4);
    v11 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a4;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_QWORD *)this + 13) = a5;
  hMem = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  if ( (int)GetSidStringFromToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, (LPWSTR *)&hMem) >= 0 )
  {
    v12 = (unsigned int)GetAssignedAccessTypeForUser((unsigned __int16 *)hMem) == 2;
    if ( hMem )
    {
      LocalFree(hMem);
      hMem = 0LL;
    }
  }
  else
  {
    if ( hMem )
    {
      LocalFree(hMem);
      hMem = 0LL;
    }
    v12 = 0;
  }
  v82 = 0LL;
  v81 = 0LL;
  *((_BYTE *)this + 938) = v12;
  v13 = (FocusHoldingTank *)*((_QWORD *)this + 122);
  if ( v13 )
    FocusHoldingTank::Advise(
      v13,
      *((struct Windows::Internal::Shell::Experience::ICortanaExperienceManager **)this + 8));
  *(_QWORD *)v79 = XamlLauncherState::OnStartShown;
  v79[2] = 0;
  v109 = *(_OWORD *)v79;
  v14 = (XamlLauncherState *)((char *)this - 24);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
    &v100,
    (char *)this - 24,
    &v109);
  v15 = (__int64 *)*((_QWORD *)this + 7);
  v16 = *v15;
  v17 = v100;
  v98 = v100;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v16 + 152))(v15, v100, (char *)this + 112);
  v19 = v18;
  if ( v18 >= 0 )
  {
    *(_QWORD *)v79 = XamlLauncherState::OnStartHidden;
    v79[2] = 0;
    v110 = *(_OWORD *)v79;
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
      &v99,
      (char *)this - 24,
      &v110);
    v20 = (__int64 *)*((_QWORD *)this + 7);
    v21 = *v20;
    v22 = v99;
    v96 = v99;
    v23 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v21 + 168))(v20, v99, (char *)this + 120);
    v19 = v23;
    if ( v23 >= 0 )
    {
      *(_QWORD *)v79 = XamlLauncherState::OnStartDestroyed;
      v79[2] = 0;
      v111 = *(_OWORD *)v79;
      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
        &v97,
        (char *)this - 24,
        &v111);
      v24 = (__int64 *)*((_QWORD *)this + 7);
      v25 = *v24;
      v26 = v97;
      v94 = v97;
      v27 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v25 + 184))(v24, v97, (char *)this + 128);
      v19 = v27;
      if ( v27 >= 0 )
      {
        *(_QWORD *)v79 = XamlLauncherState::OnStartExitTransitionToCortanaCompleted;
        v79[2] = 0;
        v112 = *(_OWORD *)v79;
        Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
          &v95,
          (char *)this - 24,
          &v112);
        v28 = (__int64 *)*((_QWORD *)this + 7);
        v29 = *v28;
        v30 = v95;
        v92 = v95;
        v31 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v29 + 232))(v28, v95, (char *)this + 136);
        v19 = v31;
        if ( v31 >= 0 )
        {
          *(_QWORD *)v79 = XamlLauncherState::OnStartFailedToGetForeground;
          v79[2] = 0;
          v113 = *(_OWORD *)v79;
          Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
            &v93,
            (char *)this - 24,
            &v113);
          v32 = (__int64 *)*((_QWORD *)this + 7);
          v33 = *v32;
          v34 = v93;
          v91 = v93;
          v35 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v33 + 248))(v32, v93, (char *)this + 144);
          v19 = v35;
          if ( v35 >= 0 )
          {
            *(_QWORD *)v79 = XamlLauncherState::OnStartLaunchResult;
            v79[2] = 0;
            *(_QWORD *)v83 = (char *)this - 24;
            *(_OWORD *)&v83[8] = *(_OWORD *)v79;
            v36 = 0LL;
            v106 = 0LL;
            v37 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
            v38 = v37;
            if ( v37 )
            {
              *(_QWORD *)v37 = &IAppViewDataSourceAdapter::`vftable';
              v37[3] = 1;
              *(_QWORD *)v37 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>>::`vftable';
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
              *((_OWORD *)v38 + 1) = *(_OWORD *)v83;
              *((_QWORD *)v38 + 4) = *(_QWORD *)&v83[16];
              *(_QWORD *)v38 = off_18020ECF0;
              v36 = v38;
            }
            v105 = v36;
            v106 = 0LL;
            v39 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(**((_QWORD **)this + 7) + 264LL))(
                    *((_QWORD *)this + 7),
                    v36,
                    (char *)this + 152);
            v19 = v39;
            if ( v39 >= 0 )
            {
              *(_QWORD *)&v103 = XamlLauncherState::OnCortanaShown;
              DWORD2(v103) = 0;
              *(_QWORD *)v83 = (char *)this - 24;
              *(_OWORD *)&v83[8] = v103;
              v40 = 0LL;
              *(_QWORD *)&v103 = 0LL;
              v41 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
              v42 = v41;
              if ( v41 )
              {
                *(_QWORD *)v41 = &IAppViewDataSourceAdapter::`vftable';
                v41[3] = 1;
                *(_QWORD *)v41 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::`vftable';
                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                  (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                *((_OWORD *)v42 + 1) = *(_OWORD *)v83;
                *((_QWORD *)v42 + 4) = *(_QWORD *)&v83[16];
                *(_QWORD *)v42 = off_18020EC78;
                v40 = v42;
              }
              v104 = v40;
              *(_QWORD *)&v103 = 0LL;
              v43 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(**((_QWORD **)this + 8) + 168LL))(
                      *((_QWORD *)this + 8),
                      v40,
                      (char *)this + 160);
              v19 = v43;
              if ( v43 >= 0 )
              {
                *(_QWORD *)v79 = XamlLauncherState::OnCortanaHidden;
                v79[2] = 0;
                v114 = *(_OWORD *)v79;
                Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                  &v90,
                  (char *)this - 24,
                  &v114);
                v44 = (__int64 *)*((_QWORD *)this + 8);
                v45 = *v44;
                v46 = v90;
                v88 = v90;
                v47 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v45 + 184))(v44, v90, (char *)this + 168);
                v19 = v47;
                if ( v47 >= 0 )
                {
                  *(_QWORD *)v79 = XamlLauncherState::OnCortanaDestroyed;
                  v79[2] = 0;
                  v115 = *(_OWORD *)v79;
                  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                    &v89,
                    (char *)this - 24,
                    &v115);
                  v48 = (__int64 *)*((_QWORD *)this + 8);
                  v49 = *v48;
                  v50 = v89;
                  v86 = v89;
                  v51 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v49 + 200))(
                          v48,
                          v89,
                          (char *)this + 176);
                  v19 = v51;
                  if ( v51 >= 0 )
                  {
                    *(_QWORD *)v79 = XamlLauncherState::OnCortanaDismissRequested;
                    v79[2] = 0;
                    v116 = *(_OWORD *)v79;
                    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                      &v87,
                      (char *)this - 24,
                      &v116);
                    v52 = (__int64 *)*((_QWORD *)this + 8);
                    v53 = *v52;
                    v54 = v87;
                    v84 = v87;
                    v55 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v53 + 296))(
                            v52,
                            v87,
                            (char *)this + 184);
                    v19 = v55;
                    if ( v55 >= 0 )
                    {
                      *(_QWORD *)v79 = XamlLauncherState::OnCortanaFailedToGetForeground;
                      v79[2] = 0;
                      v117 = *(_OWORD *)v79;
                      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                        &v85,
                        (char *)this - 24,
                        &v117);
                      v56 = (__int64 *)*((_QWORD *)this + 8);
                      v57 = *v56;
                      v58 = v85;
                      v101 = v85;
                      v59 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v57 + 248))(
                              v56,
                              v85,
                              (char *)this + 192);
                      v19 = v59;
                      if ( v59 >= 0 )
                      {
                        *(_QWORD *)v79 = XamlLauncherState::OnCortanaTransitionRequested;
                        v79[2] = 0;
                        v118 = *(_OWORD *)v79;
                        Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                          &v102,
                          (char *)this - 24,
                          &v118);
                        v60 = (__int64 *)*((_QWORD *)this + 8);
                        v61 = *v60;
                        v62 = v102;
                        v125 = v102;
                        v63 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v61 + 312))(
                                v60,
                                v102,
                                (char *)this + 200);
                        v19 = v63;
                        if ( v63 >= 0 )
                        {
                          *(_QWORD *)v79 = XamlLauncherState::OnCortanaAppTransitionCompleted;
                          v79[2] = 0;
                          v119 = *(_OWORD *)v79;
                          Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                            &v126,
                            (char *)this - 24,
                            &v119);
                          v64 = (__int64 *)*((_QWORD *)this + 8);
                          v65 = *v64;
                          v66 = v126;
                          v124 = v126;
                          v67 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v65 + 328))(
                                  v64,
                                  v126,
                                  (char *)this + 208);
                          v19 = v67;
                          if ( v67 >= 0 )
                          {
                            *(_QWORD *)v79 = XamlLauncherState::OnCortanaLaunchResult;
                            v79[2] = 0;
                            *(_QWORD *)v83 = (char *)this - 24;
                            *(_OWORD *)&v83[8] = *(_OWORD *)v79;
                            v68 = 0LL;
                            v69 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                            v70 = v69;
                            if ( v69 )
                            {
                              *(_QWORD *)v69 = &IAppViewDataSourceAdapter::`vftable';
                              v69[3] = 1;
                              *(_QWORD *)v69 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>>::`vftable';
                              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                              *((_OWORD *)v70 + 1) = *(_OWORD *)v83;
                              *((_QWORD *)v70 + 4) = *(_QWORD *)&v83[16];
                              *(_QWORD *)v70 = off_18020ECA0;
                              v68 = v70;
                            }
                            v107 = v68;
                            v71 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(**((_QWORD **)this + 8) + 344LL))(
                                    *((_QWORD *)this + 8),
                                    v68,
                                    (char *)this + 216);
                            v19 = v71;
                            if ( v71 >= 0 )
                            {
                              *(_QWORD *)v79 = XamlLauncherState::OnCortanaDeviceLocked;
                              v79[2] = 0;
                              v120 = *(_OWORD *)v79;
                              Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                                &v123,
                                (char *)this - 24,
                                &v120);
                              v72 = v123;
                              v73 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 8) + 360LL))(
                                      *((_QWORD *)this + 8),
                                      v123,
                                      (char *)this + 224);
                              v19 = v73;
                              if ( v73 >= 0 )
                              {
                                *(_QWORD *)v79 = XamlLauncherState::OnCortanaDeviceUnlocked;
                                v79[2] = 0;
                                v121[0] = *(_OWORD *)v79;
                                Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                                  &a5,
                                  (char *)this - 24,
                                  v121);
                                v74 = *((_QWORD *)this + 8);
                                v75 = (char *)this + 232;
                                v76 = a5;
                                v77 = (*(__int64 (__fastcall **)(__int64, struct IXamlLauncherStateCallback *, char *))(*(_QWORD *)v74 + 376LL))(
                                        v74,
                                        a5,
                                        v75);
                                v19 = v77;
                                if ( v77 >= 0 )
                                {
                                  XamlLauncherState::PrepareStartReadinessListener(v14);
                                  v19 = 0;
                                }
                                else
                                {
                                  wil::details::in1diag3::Return_Hr_NoOriginate(
                                    retaddr,
                                    (void *)0x66,
                                    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                    (const char *)(unsigned int)v77);
                                }
                                if ( v76 )
                                {
                                  a5 = 0LL;
                                  (*(void (__fastcall **)(struct IXamlLauncherStateCallback *))(*(_QWORD *)v76 + 16LL))(v76);
                                }
                              }
                              else
                              {
                                wil::details::in1diag3::Return_Hr_NoOriginate(
                                  retaddr,
                                  (void *)0x63,
                                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                  (const char *)(unsigned int)v73);
                              }
                              if ( v72 )
                              {
                                v123 = 0LL;
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
                              }
                              v66 = v124;
                            }
                            else
                            {
                              wil::details::in1diag3::Return_Hr_NoOriginate(
                                retaddr,
                                (void *)0x60,
                                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                (const char *)(unsigned int)v71);
                            }
                            if ( v68 )
                            {
                              v107 = 0LL;
                              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v68 + 16LL))(v68);
                            }
                            v62 = v125;
                          }
                          else
                          {
                            wil::details::in1diag3::Return_Hr_NoOriginate(
                              retaddr,
                              (void *)0x5D,
                              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                              (const char *)(unsigned int)v67);
                          }
                          if ( v66 )
                          {
                            v126 = 0LL;
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
                          }
                          v58 = v101;
                        }
                        else
                        {
                          wil::details::in1diag3::Return_Hr_NoOriginate(
                            retaddr,
                            (void *)0x5A,
                            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                            (const char *)(unsigned int)v63);
                        }
                        if ( v62 )
                        {
                          v102 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
                        }
                        v54 = v84;
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr_NoOriginate(
                          retaddr,
                          (void *)0x57,
                          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                          (const char *)(unsigned int)v59);
                      }
                      if ( v58 )
                      {
                        v85 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
                      }
                      v50 = v86;
                    }
                    else
                    {
                      wil::details::in1diag3::Return_Hr_NoOriginate(
                        retaddr,
                        (void *)0x54,
                        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                        (const char *)(unsigned int)v55);
                    }
                    if ( v54 )
                    {
                      v87 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
                    }
                    v46 = v88;
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr_NoOriginate(
                      retaddr,
                      (void *)0x51,
                      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                      (const char *)(unsigned int)v51);
                  }
                  if ( v50 )
                  {
                    v89 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
                  }
                }
                else
                {
                  wil::details::in1diag3::Return_Hr_NoOriginate(
                    retaddr,
                    (void *)0x4E,
                    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                    (const char *)(unsigned int)v47);
                }
                if ( v46 )
                {
                  v90 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                }
                v34 = v91;
              }
              else
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x4B,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                  (const char *)(unsigned int)v43);
              }
              if ( v40 )
              {
                v104 = 0LL;
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v40 + 16LL))(v40);
              }
              v30 = v92;
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x48,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                (const char *)(unsigned int)v39);
            }
            if ( v36 )
            {
              v105 = 0LL;
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v36 + 16LL))(v36);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x45,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
              (const char *)(unsigned int)v35);
          }
          if ( v34 )
          {
            v93 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
          v26 = v94;
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x42,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v31);
        }
        if ( v30 )
        {
          v95 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v22 = v96;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x3F,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v27);
      }
      if ( v26 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v17 = v98;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3C,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v23);
    }
    if ( v22 )
    {
      v99 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x39,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v18);
  }
  if ( v17 )
  {
    v100 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v19;
}
