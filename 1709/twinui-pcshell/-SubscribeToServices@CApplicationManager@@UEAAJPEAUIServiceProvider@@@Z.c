/*
 * XREFs of ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A960
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     WPP_SF_ @ 0x180006B2C (WPP_SF_.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x180010F44 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x1800169CC (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___ @ 0x18001949C (CIAMGlobals--QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___.c)
 *     McTemplateU0 @ 0x180025CB8 (McTemplateU0.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18002C4D4 (-CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEA.c)
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x18002CBB4 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 *     ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x18002D178 (-s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CApplicationManager::SubscribeToServices(CApplicationManager *this, struct IServiceProvider *a2)
{
  __int64 v4; // r9
  PSRWLOCK v5; // rdi
  PVOID v6; // rbx
  PVOID Ptr; // rcx
  int v8; // edi
  __int64 v9; // r9
  struct IViewEventDispatcherCrashRecovery *v10; // rcx
  _DWORD *v11; // rdi
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  void (__fastcall ***v14)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // rbx
  __int64 v15; // r9
  void (__fastcall ***v16)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // rcx
  __int64 v17; // rbx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r9
  _QWORD *v25; // r15
  struct IServiceProviderVtbl *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r9
  struct IServiceProviderVtbl *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // r9
  struct IImmersiveMonitor *v36; // rcx
  char *v37; // rbx
  __int64 v38; // r9
  void *v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r9
  __int64 v44; // r9
  HWND ForegroundWindow; // rax
  HWND v46; // rdi
  LONG_PTR WindowLongPtrW; // rax
  __int64 v48; // rdx
  __int64 v49; // r9
  struct IServiceProviderVtbl *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // r9
  __int64 v58; // r9
  void *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r9
  HRESULT v62; // eax
  int v63; // edx
  unsigned int v64; // r8d
  HSTRING v65; // r15
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int64 v70; // r14
  unsigned __int64 i; // rdi
  __int64 v72; // rcx
  void *v73; // rcx
  const struct _GUID *v74; // rdx
  char *v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r9
  __int64 v78; // r9
  struct IViewEventDispatcherCrashRecovery *v79; // rcx
  PVOID v80; // rbx
  __int64 v82; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v83; // [rsp+50h] [rbp-B8h] BYREF
  struct IViewEventDispatcherCrashRecovery *v84; // [rsp+58h] [rbp-B0h] BYREF
  void (__fastcall ***v85)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // [rsp+60h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+68h] [rbp-A0h] BYREF
  struct IImmersiveMonitor *v87; // [rsp+70h] [rbp-98h] BYREF
  __int64 v88; // [rsp+78h] [rbp-90h] BYREF
  void *v89; // [rsp+80h] [rbp-88h] BYREF
  __int64 v90; // [rsp+88h] [rbp-80h] BYREF
  PVOID v91; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v92[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v93; // [rsp+A8h] [rbp-60h]
  _BYTE v94[24]; // [rsp+B8h] [rbp-50h]
  __int64 v95; // [rsp+D0h] [rbp-38h]
  __int64 v96; // [rsp+D8h] [rbp-30h]
  HSTRING_HEADER v97; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING v98; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING string; // [rsp+100h] [rbp-8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+108h] [rbp+0h] BYREF

  v95 = -2LL;
  v91 = 0LL;
  LODWORD(v82) = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, PVOID *))a2->lpVtbl->QueryService)(
                   a2,
                   &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                   &GUID_b644fe9d_3090_4a41_9f18_465a5f445272,
                   &v91);
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v82,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x8CB,
         v4) )
  {
    v5 = CApplicationManagerUtility::g_pIAMGlobals;
    v6 = v91;
    if ( CApplicationManagerUtility::g_pIAMGlobals[12].Ptr != v91 )
    {
      if ( v91 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v91 + 8LL))(v91);
      Ptr = v5[12].Ptr;
      v5[12].Ptr = v6;
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
  }
  v84 = 0LL;
  v8 = v82;
  if ( (int)v82 >= 0 )
  {
    v85 = 0LL;
    LODWORD(v82) = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, void (__fastcall ****)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **)))a2->lpVtbl->QueryService)(
                     a2,
                     &SID_ViewEventDispatcher,
                     &GUID_f36451a9_014a_43ea_9492_ff81c012e15f,
                     &v85);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&v82,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x8D6,
           v9) )
    {
      v10 = v84;
      if ( v84 )
      {
        v84 = 0LL;
        (*(void (__fastcall **)(struct IViewEventDispatcherCrashRecovery *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      (**v85)(v85, &GUID_58c1ac38_4edf_4ada_aa81_375958b4c848, &v84);
      *(_QWORD *)&v93 = CApplicationManager::_HandleViewEvent;
      DWORD2(v93) = 0;
      *(_QWORD *)v94 = (char *)this - 96;
      *(_OWORD *)&v94[8] = v93;
      v11 = 0LL;
      v96 = 0LL;
      v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v13 = v12;
      if ( v12 )
      {
        *(_QWORD *)v12 = &IAppViewDataSourceAdapter::`vftable';
        v12[3] = 1;
        *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *((_OWORD *)v13 + 1) = *(_OWORD *)v94;
        *((_QWORD *)v13 + 4) = *(_QWORD *)&v94[16];
        *(_QWORD *)v13 = off_1802110D8;
        v11 = v13;
      }
      v92[1] = v11;
      v14 = v85;
      if ( WindowsCreateStringReference(
             L"Windows.Internal.ShellExperience.TopLevelApplication",
             0x34u,
             &hstringHeader,
             &string) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      LODWORD(v82) = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **), _DWORD *, _QWORD, HSTRING, int, char *))(*v14)[6])(
                       v14,
                       v11,
                       0LL,
                       string,
                       3,
                       (char *)this + 736);
      CRVPrivate::VerifyCriticalResult(
        (unsigned __int64)&v82,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const unsigned __int16 *)0x8E5,
        v15);
      if ( v11 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v16 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **)))(*v16)[2])(v16);
    }
    v8 = v82;
  }
  v17 = 0LL;
  v83 = 0LL;
  if ( v8 >= 0 )
  {
    lpVtbl = a2->lpVtbl;
    v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v83);
    LODWORD(v82) = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))lpVtbl->QueryService)(
                     a2,
                     &SID_ImmersiveShellHookService,
                     &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                     v19);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&v82,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x8EF,
           v20) )
    {
      LODWORD(v82) = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v83 + 24LL))(
                       v83,
                       &unk_180220290,
                       18LL,
                       ((unsigned __int64)this + 72) & -(__int64)(this != (CApplicationManager *)96),
                       (char *)this + 704);
      if ( CRVPrivate::VerifyCriticalResult(
             (unsigned __int64)&v82,
             L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
             (const unsigned __int16 *)0x90C,
             v21) )
      {
        v22 = *((_QWORD *)this + 89);
        v17 = v83;
        if ( *(_QWORD *)(v22 + 8) == v83 )
          goto LABEL_31;
        if ( v83 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 8LL))(v83);
        v23 = *(_QWORD *)(v22 + 8);
        *(_QWORD *)(v22 + 8) = v17;
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    v17 = v83;
LABEL_31:
    v8 = v82;
    if ( (int)v82 >= 0 )
    {
      LODWORD(v82) = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 65) + 24LL))(
                       *((_QWORD *)this + 65),
                       a2);
      CRVPrivate::VerifyCriticalResult(
        (unsigned __int64)&v82,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const unsigned __int16 *)0x919,
        v24);
      v8 = v82;
      if ( (int)v82 >= 0 )
      {
        v25 = (_QWORD *)((char *)this + 472);
        v26 = a2->lpVtbl;
        v27 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((char *)this + 472);
        LODWORD(v82) = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))v26->QueryService)(
                         a2,
                         &SID_IImmersiveMonitorService,
                         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                         v27);
        if ( CRVPrivate::VerifyCriticalResult(
               (unsigned __int64)&v82,
               L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
               (const unsigned __int16 *)0x922,
               v28) )
        {
          v29 = a2->lpVtbl;
          v30 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((char *)this + 496);
          LODWORD(v82) = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))v29->QueryService)(
                           a2,
                           &SID_ProcessLifetimeManagerControl,
                           &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
                           v30);
          if ( CRVPrivate::VerifyCriticalResult(
                 (unsigned __int64)&v82,
                 L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                 (const unsigned __int16 *)0x92B,
                 v31) )
          {
            v32 = *((_QWORD *)this + 84);
            if ( v32 )
            {
              *((_QWORD *)this + 84) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            }
            LODWORD(v82) = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                             a2,
                             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                             (char *)this + 672);
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&v82,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x92E,
              v33);
          }
        }
        v8 = v82;
        if ( (int)v82 >= 0 )
        {
          v87 = 0LL;
          LODWORD(v82) = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor **))(*(_QWORD *)*v25 + 64LL))(
                           *v25,
                           &v87);
          if ( CRVPrivate::VerifyCriticalResult(
                 (unsigned __int64)&v82,
                 L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                 (const unsigned __int16 *)0x93C,
                 v34) )
          {
            LODWORD(v82) = CApplicationManager::_CreatePerMonitorComponents(
                             (CApplicationManager *)((char *)this - 96),
                             a2,
                             v87);
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&v82,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x93F,
              v35);
          }
          v36 = v87;
          if ( v87 )
          {
            v87 = 0LL;
            (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v36 + 16LL))(v36);
          }
          v8 = v82;
          if ( (int)v82 >= 0 )
          {
            v37 = (char *)this - 96;
            LODWORD(v82) = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, unsigned __int64))(**((_QWORD **)this + 57) + 40LL))(
                             *((_QWORD *)this + 57),
                             a2,
                             ((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)96));
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&v82,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x948,
              v38);
            v8 = v82;
            if ( (int)v82 >= 0 )
            {
              v39 = WPP_GLOBAL_Control;
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_a48b1226f8c73eed2d41046d9a93f3a8_Traceguids);
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                McTemplateU0(v39, &ImmersiveShell_AppManager_Reconstitution_Start);
              LODWORD(v82) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 56LL))(*((_QWORD *)this + 65));
              if ( CRVPrivate::VerifyCriticalResult(
                     (unsigned __int64)&v82,
                     L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                     (const unsigned __int16 *)0x952,
                     v40) )
              {
                CApplicationManager::_RecoverApplicationViews((CApplicationManager *)((char *)this - 96), v84);
                LODWORD(v82) = RecoverApplicationWindows((struct IImmersiveShellHookNotification *)(((unsigned __int64)this + 72) & -(__int64)(this != (CApplicationManager *)96)));
                if ( CRVPrivate::VerifyCriticalResult(
                       (unsigned __int64)&v82,
                       L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                       (const unsigned __int16 *)0x959,
                       v42) )
                {
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 64LL))(*((_QWORD *)this + 65));
                  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 83) + 32LL))(
                    *((_QWORD *)this + 83),
                    v83);
                  LODWORD(v82) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 60) + 24LL))(
                                   *((_QWORD *)this + 60),
                                   *v25,
                                   v83);
                  if ( CRVPrivate::VerifyCriticalResult(
                         (unsigned __int64)&v82,
                         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                         (const unsigned __int16 *)0x965,
                         v43) )
                  {
                    LODWORD(v82) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 55) + 24LL))(
                                     *((_QWORD *)this + 55),
                                     *((_QWORD *)this + 60),
                                     *v25);
                    if ( CRVPrivate::VerifyCriticalResult(
                           (unsigned __int64)&v82,
                           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           (const unsigned __int16 *)0x968,
                           v44) )
                    {
                      ForegroundWindow = GetForegroundWindow();
                      v46 = ForegroundWindow;
                      if ( ForegroundWindow )
                      {
                        if ( !GetWindow(ForegroundWindow, 4u)
                          || (WindowLongPtrW = GetWindowLongPtrW(v46, -20), v48 = 23LL, (WindowLongPtrW & 0x40000) != 0) )
                        {
                          v48 = 19LL;
                        }
                        (*(void (__fastcall **)(char *, __int64, HWND))(*((_QWORD *)this + 9) + 24LL))(
                          (char *)this + 72,
                          v48,
                          v46);
                      }
                    }
                  }
                }
              }
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                McTemplateU0(v41, &ImmersiveShell_AppManager_Reconstitution_Stop);
              v8 = v82;
              if ( (int)v82 >= 0 )
              {
                (*(void (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 58) + 24LL))(
                  *((_QWORD *)this + 58),
                  a2);
                LODWORD(v82) = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 62) + 168LL))(
                                 *((_QWORD *)this + 62),
                                 7LL,
                                 ((unsigned __int64)this + 168) & -(__int64)(this != (CApplicationManager *)96),
                                 (char *)this + 724);
                CRVPrivate::VerifyCriticalResult(
                  (unsigned __int64)&v82,
                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const unsigned __int16 *)0x992,
                  v49);
                v8 = v82;
                if ( (int)v82 >= 0 )
                {
                  v88 = 0LL;
                  v50 = a2->lpVtbl;
                  v51 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v88);
                  LODWORD(v82) = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64))v50->QueryService)(
                                   a2,
                                   &IID_IImmersiveSessionIdleDetector,
                                   &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                                   v51);
                  if ( CRVPrivate::VerifyCriticalResult(
                         (unsigned __int64)&v82,
                         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                         (const unsigned __int16 *)0x99A,
                         v52) )
                  {
                    LODWORD(v82) = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v88 + 32LL))(
                                     v88,
                                     -(__int64)(this != (CApplicationManager *)96) & ((unsigned __int64)this + 176),
                                     (char *)this + 728);
                    CRVPrivate::VerifyCriticalResult(
                      (unsigned __int64)&v82,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      (const unsigned __int16 *)0x99D,
                      v53);
                  }
                  v54 = v88;
                  if ( v88 )
                  {
                    v88 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
                  }
                  v8 = v82;
                  if ( (int)v82 >= 0 )
                  {
                    v90 = 0LL;
                    v55 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v90);
                    LODWORD(v82) = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*v25)(
                                     *v25,
                                     &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                                     v55);
                    if ( CRVPrivate::VerifyCriticalResult(
                           (unsigned __int64)&v82,
                           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           (const unsigned __int16 *)0x9A5,
                           v56) )
                    {
                      v89 = 0LL;
                      LODWORD(v82) = CMonitorNotificationHelper_CreateInstance(
                                       (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 112) & -(__int64)(this != (CApplicationManager *)96)),
                                       (const struct _GUID *)this + 7,
                                       &v89);
                      if ( CRVPrivate::VerifyCriticalResult(
                             (unsigned __int64)&v82,
                             L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                             (const unsigned __int16 *)0x9AA,
                             v57) )
                      {
                        LODWORD(v82) = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v90 + 24LL))(
                                         v90,
                                         v89,
                                         (char *)this + 732);
                        CRVPrivate::VerifyCriticalResult(
                          (unsigned __int64)&v82,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          (const unsigned __int16 *)0x9AD,
                          v58);
                      }
                      v59 = v89;
                      if ( v89 )
                      {
                        v89 = 0LL;
                        (*(void (__fastcall **)(void *))(*(_QWORD *)v59 + 16LL))(v59);
                      }
                    }
                    v60 = v90;
                    if ( v90 )
                    {
                      v90 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                    }
                    v8 = v82;
                    if ( (int)v82 >= 0 )
                    {
                      LODWORD(v82) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 80LL))(*((_QWORD *)this + 64));
                      CRVPrivate::VerifyCriticalResult(
                        (unsigned __int64)&v82,
                        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        (const unsigned __int16 *)0x9B5,
                        v61);
                      v8 = v82;
                      if ( (int)v82 >= 0 )
                      {
                        v98 = 0LL;
                        v62 = WindowsCreateStringReference(
                                L"Windows.Internal.Shell.Holographic.ContextIdentifier",
                                0x34u,
                                &v97,
                                &v98);
                        if ( v62 < 0 )
                        {
                          Microsoft::WRL::Details::RaiseException(
                            (Microsoft::WRL::Details *)(unsigned int)v62,
                            v63,
                            v64);
                          __debugbreak();
                        }
                        v65 = v98;
                        v66 = *((_QWORD *)this + 86);
                        if ( v66 )
                        {
                          *((_QWORD *)this + 86) = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
                        }
                        LODWORD(v82) = RoGetActivationFactory(
                                         v65,
                                         &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771,
                                         (char *)this + 688);
                        CRVPrivate::VerifyCriticalResult(
                          (unsigned __int64)&v82,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          (const unsigned __int16 *)0x9BC,
                          v67);
                        v8 = v82;
                        if ( (int)v82 >= 0 )
                        {
                          v86 = 0LL;
                          v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
                                 a2,
                                 &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5,
                                 &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5,
                                 &v86);
                          if ( v8 >= 0 )
                          {
                            AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                            v68 = *((_QWORD *)this + 87);
                            *((_QWORD *)this + 87) = v86;
                            v86 = v68;
                            ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                          }
                          v69 = v86;
                          if ( v86 )
                          {
                            v86 = 0LL;
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
                          }
                          if ( v8 >= 0 )
                          {
                            AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                            v70 = *((_QWORD *)this + 69);
                            for ( i = 0LL; i < v70; ++i )
                            {
                              v72 = *(_QWORD *)(*((_QWORD *)this + 68) + 8 * i);
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 120LL))(v72);
                            }
                            ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                            v73 = WPP_GLOBAL_Control;
                            if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
                              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                            {
                              WPP_SF_(
                                *((_QWORD *)WPP_GLOBAL_Control + 2),
                                0xBu,
                                &WPP_a48b1226f8c73eed2d41046d9a93f3a8_Traceguids);
                            }
                            BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) = 1;
                            *(_QWORD *)&v93 = (char *)this - 96;
                            if ( this != (CApplicationManager *)96 )
                              (*(void (__fastcall **)(char *))(*(_QWORD *)v37 + 8LL))((char *)this - 96);
                            v92[0] = (char *)this - 96;
                            if ( this != (CApplicationManager *)96 )
                              (*(void (__fastcall **)(char *))(*(_QWORD *)v37 + 8LL))((char *)this - 96);
                            if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___(
                                        v73,
                                        v92) < 0 )
                            {
                              v75 = (char *)&CApplicationManagerUtility::g_pIAMGlobals[11].Ptr + 5;
                              BYTE5(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) = 1;
                              WakeByAddressAll(v75);
                            }
                            if ( this != (CApplicationManager *)96 )
                              (*(void (__fastcall **)(char *))(*(_QWORD *)v37 + 16LL))((char *)this - 96);
                            v76 = *((_QWORD *)this + 82);
                            if ( v76 )
                            {
                              *((_QWORD *)this + 82) = 0LL;
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
                            }
                            LODWORD(v82) = CVisibilityOverride::s_CreateInstance(
                                             (struct IImmersiveApplicationVisibilityOverride *)(((unsigned __int64)this
                                                                                               + 88) & -(__int64)(this != (CApplicationManager *)96)),
                                             v74,
                                             (void **)this + 82);
                            if ( CRVPrivate::VerifyCriticalResult(
                                   (unsigned __int64)&v82,
                                   L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                   (const unsigned __int16 *)0x9EE,
                                   v77) )
                            {
                              LODWORD(v82) = IUnknown_SetSite(*((IUnknown **)this + 82), (IUnknown *)this - 12);
                              CRVPrivate::VerifyCriticalResult(
                                (unsigned __int64)&v82,
                                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                (const unsigned __int16 *)0x9F1,
                                v78);
                            }
                            v8 = v82;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v17 = v83;
    }
  }
  if ( v17 )
  {
    v83 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v79 = v84;
  if ( v84 )
  {
    v84 = 0LL;
    (*(void (__fastcall **)(struct IViewEventDispatcherCrashRecovery *))(*(_QWORD *)v79 + 16LL))(v79);
  }
  v80 = v91;
  if ( v91 )
  {
    v91 = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v80 + 16LL))(v80);
  }
  return (unsigned int)v8;
}
