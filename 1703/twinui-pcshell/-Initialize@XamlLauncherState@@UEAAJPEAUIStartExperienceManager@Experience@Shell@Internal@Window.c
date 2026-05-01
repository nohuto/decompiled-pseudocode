/*
 * XREFs of ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180153AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VXamlLauncherState@@PEAUIStartExperienceManager@Experience@Shell@Internal@3@PEAUIInspectable@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z@Z @ 0x18015905C (--$Callback@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@VXamlLauncherState@@PEAUIStartExperienceManager@Experience@Shell@Internal@3@H@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z@Z @ 0x1801590AC (--$Callback@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Inter_ea_1801590AC.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@VXamlLauncherState@@PEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUICortanaShownEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@5678@@Z@Z @ 0x1801590FC (--$Callback@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VXamlLauncherState@@PEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUIInspectable@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z@Z @ 0x18015914C (--$Callback@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Int_ea_18015914C.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@VXamlLauncherState@@PEAUICortanaExperienceManager@Experience@Shell@Internal@3@H@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z@Z @ 0x18015919C (--$Callback@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Int_ea_18015919C.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_d3643b84ed213cd16b15807000c4c475___ @ 0x18015B214 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_d3643b84ed213cd16b15807000c4c475___.c)
 *     ?Advise@FocusHoldingTank@@QEAAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x18015C910 (-Advise@FocusHoldingTank@@QEAAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
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
  FocusHoldingTank *v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // r13
  int v33; // eax
  __int64 v34; // r12
  int v35; // eax
  __int64 v36; // r15
  int v37; // eax
  __int64 v38; // rcx
  char *v39; // r8
  __int64 v40; // r14
  int v41; // eax
  __int64 v42; // rsi
  int v43; // eax
  __int64 v44; // rdi
  int v45; // eax
  __int64 v46; // rbx
  int v47; // eax
  DWORD CurrentThreadId; // eax
  int v49; // eax
  struct IXamlLauncherStateCallback *v50; // rcx
  __int128 v52; // [rsp+30h] [rbp-81h] BYREF
  __int64 v53; // [rsp+40h] [rbp-71h] BYREF
  __int64 v54; // [rsp+48h] [rbp-69h] BYREF
  __int64 v55; // [rsp+50h] [rbp-61h] BYREF
  __int64 v56; // [rsp+58h] [rbp-59h] BYREF
  __int64 v57; // [rsp+60h] [rbp-51h] BYREF
  __int64 v58; // [rsp+68h] [rbp-49h] BYREF
  __int64 v59; // [rsp+70h] [rbp-41h] BYREF
  __int64 v60; // [rsp+78h] [rbp-39h] BYREF
  __int64 v61; // [rsp+80h] [rbp-31h] BYREF
  __int64 v62; // [rsp+88h] [rbp-29h] BYREF
  __int64 v63; // [rsp+90h] [rbp-21h] BYREF
  __int64 v64; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v65[2]; // [rsp+A0h] [rbp-11h] BYREF
  _OWORD v66[5]; // [rsp+B0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]
  IUnknown *v68; // [rsp+110h] [rbp+5Fh] BYREF
  IUnknown *v69; // [rsp+118h] [rbp+67h]
  __int64 v70; // [rsp+120h] [rbp+6Fh] BYREF
  __int64 v71; // [rsp+128h] [rbp+77h] BYREF

  v68 = (IUnknown *)this;
  v65[1] = -2LL;
  *((_DWORD *)this + 238) = GetCurrentThreadId();
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
  v12 = (FocusHoldingTank *)*((_QWORD *)this + 121);
  if ( v12 )
    FocusHoldingTank::Advise(
      v12,
      *((struct Windows::Internal::Shell::Experience::ICortanaExperienceManager **)this + 8));
  *(_QWORD *)&v52 = XamlLauncherState::OnStartShown;
  DWORD2(v52) = 0;
  v69 = (IUnknown *)((char *)this - 16);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
    &v58,
    (char *)this - 16,
    &v52);
  v13 = v58;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 7) + 152LL))(
          *((_QWORD *)this + 7),
          v58,
          (char *)this + 112);
  v15 = v14;
  if ( v14 >= 0 )
  {
    *(_QWORD *)&v52 = XamlLauncherState::OnStartHidden;
    DWORD2(v52) = 0;
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
      &v59,
      (char *)this - 16,
      &v52);
    v16 = v59;
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 7) + 168LL))(
            *((_QWORD *)this + 7),
            v59,
            (char *)this + 120);
    v15 = v17;
    if ( v17 >= 0 )
    {
      *(_QWORD *)&v52 = XamlLauncherState::OnStartDestroyed;
      DWORD2(v52) = 0;
      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
        &v53,
        (char *)this - 16,
        &v52);
      v18 = v53;
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 7) + 184LL))(
              *((_QWORD *)this + 7),
              v53,
              (char *)this + 128);
      v15 = v19;
      if ( v19 >= 0 )
      {
        *(_QWORD *)&v52 = XamlLauncherState::OnStartExitTransitionToCortanaCompleted;
        DWORD2(v52) = 0;
        Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
          &v57,
          (char *)this - 16,
          &v52);
        v20 = v57;
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 7) + 232LL))(
                *((_QWORD *)this + 7),
                v57,
                (char *)this + 136);
        v15 = v21;
        if ( v21 >= 0 )
        {
          *(_QWORD *)&v52 = XamlLauncherState::OnStartFailedToGetForeground;
          DWORD2(v52) = 0;
          Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
            &v56,
            (char *)this - 16,
            &v52);
          v22 = v56;
          v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 7) + 248LL))(
                  *((_QWORD *)this + 7),
                  v56,
                  (char *)this + 144);
          v15 = v23;
          if ( v23 >= 0 )
          {
            *(_QWORD *)&v52 = XamlLauncherState::OnStartLaunchResult;
            DWORD2(v52) = 0;
            Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,int>(
              &v55,
              (char *)this - 16,
              &v52);
            v24 = v55;
            v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 7) + 264LL))(
                    *((_QWORD *)this + 7),
                    v55,
                    (char *)this + 152);
            v15 = v25;
            if ( v25 >= 0 )
            {
              *(_QWORD *)&v52 = XamlLauncherState::OnCortanaShown;
              DWORD2(v52) = 0;
              Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>(
                &v54,
                (char *)this - 16,
                &v52);
              v26 = v54;
              v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 8) + 168LL))(
                      *((_QWORD *)this + 8),
                      v54,
                      (char *)this + 160);
              v15 = v27;
              if ( v27 >= 0 )
              {
                *(_QWORD *)&v52 = XamlLauncherState::OnCortanaHidden;
                DWORD2(v52) = 0;
                Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                  &v71,
                  (char *)this - 16,
                  &v52);
                v28 = v71;
                v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 8) + 184LL))(
                        *((_QWORD *)this + 8),
                        v71,
                        (char *)this + 168);
                v15 = v29;
                if ( v29 >= 0 )
                {
                  *(_QWORD *)&v52 = XamlLauncherState::OnCortanaDestroyed;
                  DWORD2(v52) = 0;
                  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                    &v70,
                    (char *)this - 16,
                    &v52);
                  v30 = v70;
                  v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 8) + 200LL))(
                          *((_QWORD *)this + 8),
                          v70,
                          (char *)this + 176);
                  v15 = v31;
                  if ( v31 >= 0 )
                  {
                    *(_QWORD *)&v52 = XamlLauncherState::OnCortanaDismissRequested;
                    DWORD2(v52) = 0;
                    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                      &v60,
                      (char *)this - 16,
                      &v52);
                    v32 = v60;
                    v33 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 8) + 296LL))(
                            *((_QWORD *)this + 8),
                            v60,
                            (char *)this + 184);
                    v15 = v33;
                    if ( v33 >= 0 )
                    {
                      *(_QWORD *)&v52 = XamlLauncherState::OnCortanaFailedToGetForeground;
                      DWORD2(v52) = 0;
                      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                        &v61,
                        (char *)this - 16,
                        &v52);
                      v34 = v61;
                      v35 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 8) + 248LL))(
                              *((_QWORD *)this + 8),
                              v61,
                              (char *)this + 192);
                      v15 = v35;
                      if ( v35 >= 0 )
                      {
                        *(_QWORD *)&v52 = XamlLauncherState::OnCortanaTransitionRequested;
                        DWORD2(v52) = 0;
                        Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                          &v62,
                          (char *)this - 16,
                          &v52);
                        v36 = v62;
                        v37 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 8) + 312LL))(
                                *((_QWORD *)this + 8),
                                v62,
                                (char *)this + 200);
                        LODWORD(a5) = v37;
                        if ( v37 >= 0 )
                        {
                          *(_QWORD *)&v52 = XamlLauncherState::OnCortanaAppTransitionCompleted;
                          DWORD2(v52) = 0;
                          Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                            &v63,
                            (char *)this - 16,
                            &v52);
                          v38 = *((_QWORD *)this + 8);
                          v39 = (char *)this + 208;
                          v40 = v63;
                          v41 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v38 + 328LL))(
                                  v38,
                                  v63,
                                  v39);
                          LODWORD(a5) = v41;
                          if ( v41 >= 0 )
                          {
                            *(_QWORD *)&v52 = XamlLauncherState::OnCortanaLaunchResult;
                            DWORD2(v52) = 0;
                            Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,int>(
                              &v64,
                              v69,
                              &v52);
                            v42 = v64;
                            v43 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64, IUnknown *))v68[8].lpVtbl->QueryInterface
                                   + 43))(
                                    v68[8].lpVtbl,
                                    v64,
                                    v68 + 27);
                            LODWORD(a5) = v43;
                            if ( v43 >= 0 )
                            {
                              *(_QWORD *)&v52 = XamlLauncherState::OnCortanaDeviceLocked;
                              DWORD2(v52) = 0;
                              Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                                v65,
                                v69,
                                &v52);
                              v44 = v65[0];
                              v45 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD, IUnknown *))v68[8].lpVtbl->QueryInterface
                                     + 45))(
                                      v68[8].lpVtbl,
                                      v65[0],
                                      v68 + 28);
                              LODWORD(a5) = v45;
                              if ( v45 >= 0 )
                              {
                                *(_QWORD *)&v52 = XamlLauncherState::OnCortanaDeviceUnlocked;
                                DWORD2(v52) = 0;
                                v66[0] = v52;
                                Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,IInspectable *>(
                                  &v52,
                                  v69,
                                  v66);
                                v46 = v52;
                                v47 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD, IUnknown *))v68[8].lpVtbl->QueryInterface
                                       + 47))(
                                        v68[8].lpVtbl,
                                        v52,
                                        v68 + 29);
                                LODWORD(a5) = v47;
                                if ( v47 >= 0 )
                                {
                                  v68 = v69;
                                  v68 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_d3643b84ed213cd16b15807000c4c475___(
                                                        &a5,
                                                        &v68);
                                  CurrentThreadId = GetCurrentThreadId();
                                  v49 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v68, 0LL);
                                  LODWORD(v68) = v49;
                                  v50 = a5;
                                  if ( a5 )
                                  {
                                    a5 = 0LL;
                                    (*(void (__fastcall **)(struct IXamlLauncherStateCallback *))(*(_QWORD *)v50 + 16LL))(v50);
                                    v49 = (int)v68;
                                  }
                                  if ( v49 < 0 )
                                  {
                                    wil::details::in1diag3::_Log_Hr(
                                      retaddr,
                                      (void *)0x10D,
                                      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                      (const char *)(unsigned int)v49);
                                    BYTE5(v69[119].lpVtbl) = 1;
                                  }
                                  LODWORD(a5) = 0;
                                }
                                else
                                {
                                  wil::details::in1diag3::Return_Hr_NoOriginate(
                                    retaddr,
                                    (void *)0x62,
                                    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                    (const char *)(unsigned int)v47);
                                }
                                if ( v46 )
                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                                v30 = v70;
                              }
                              else
                              {
                                wil::details::in1diag3::Return_Hr_NoOriginate(
                                  retaddr,
                                  (void *)0x5F,
                                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                  (const char *)(unsigned int)v45);
                              }
                              if ( v44 )
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
                              v28 = v71;
                            }
                            else
                            {
                              wil::details::in1diag3::Return_Hr_NoOriginate(
                                retaddr,
                                (void *)0x5C,
                                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                (const char *)(unsigned int)v43);
                            }
                            if ( v42 )
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
                            v18 = v53;
                          }
                          else
                          {
                            wil::details::in1diag3::Return_Hr_NoOriginate(
                              retaddr,
                              (void *)0x59,
                              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                              (const char *)(unsigned int)v41);
                          }
                          if ( v40 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                        }
                        else
                        {
                          wil::details::in1diag3::Return_Hr_NoOriginate(
                            retaddr,
                            (void *)0x56,
                            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                            (const char *)(unsigned int)v37);
                        }
                        if ( v36 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
                        v15 = (unsigned int)a5;
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr_NoOriginate(
                          retaddr,
                          (void *)0x53,
                          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                          (const char *)(unsigned int)v35);
                      }
                      if ( v34 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                    }
                    else
                    {
                      wil::details::in1diag3::Return_Hr_NoOriginate(
                        retaddr,
                        (void *)0x50,
                        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                        (const char *)(unsigned int)v33);
                    }
                    if ( v32 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr_NoOriginate(
                      retaddr,
                      (void *)0x4D,
                      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                      (const char *)(unsigned int)v31);
                  }
                  if ( v30 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
                  v26 = v54;
                }
                else
                {
                  wil::details::in1diag3::Return_Hr_NoOriginate(
                    retaddr,
                    (void *)0x4A,
                    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                    (const char *)(unsigned int)v29);
                }
                if ( v28 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                v24 = v55;
              }
              else
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x47,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                  (const char *)(unsigned int)v27);
              }
              if ( v26 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
              v22 = v56;
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x44,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                (const char *)(unsigned int)v25);
            }
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            v20 = v57;
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x41,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
              (const char *)(unsigned int)v23);
          }
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v13 = v58;
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x3E,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v21);
        }
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v16 = v59;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x3B,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v19);
      }
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x38,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v17);
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v14);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v15;
}
