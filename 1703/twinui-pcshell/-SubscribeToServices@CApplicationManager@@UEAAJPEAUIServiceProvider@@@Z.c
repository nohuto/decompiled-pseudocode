/*
 * XREFs of ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     WPP_SF_ @ 0x180006A8C (WPP_SF_.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x180010964 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x180015BF0 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@VCApplicationManager@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@01@PEAVCApplicationManager@@P83@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@5678@@Z@Z @ 0x1800182C0 (--$Callback@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PE.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_6f3dfa547e2ecbb13d4169c92b8d6cb6___ @ 0x180018310 (CIAMGlobals--QueueViewManagementTask__lambda_6f3dfa547e2ecbb13d4169c92b8d6cb6___.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     TemplateEventDescriptor @ 0x180025530 (TemplateEventDescriptor.c)
 *     ?CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18002ABD4 (-CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEA.c)
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x18002B3D4 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 *     ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x18002B8C8 (-s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CApplicationManager::SubscribeToServices(CApplicationManager *this, struct IServiceProvider *a2)
{
  __int64 v4; // r9
  PSRWLOCK v5; // rdi
  PVOID v6; // rbx
  PVOID Ptr; // rcx
  __int64 v8; // r9
  struct IViewEventDispatcherCrashRecovery *v9; // rcx
  void (__fastcall ***v10)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // rdi
  __int64 v11; // rbx
  __int64 v12; // r9
  void (__fastcall ***v13)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // rcx
  __int64 v14; // rbx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r9
  _QWORD *v22; // r15
  struct IServiceProviderVtbl *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // r9
  struct IImmersiveMonitor *v32; // rcx
  char *v33; // rbx
  __int64 v34; // r9
  void *v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // r9
  __int64 v40; // r9
  HWND ForegroundWindow; // rax
  HWND v42; // rdi
  LONG_PTR WindowLongPtrW; // rax
  __int64 v44; // rdx
  __int64 v45; // r9
  struct IServiceProviderVtbl *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // r9
  __int64 v54; // r9
  void *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // r9
  HRESULT StringReference; // eax
  int v59; // edx
  unsigned int v60; // r8d
  __int64 v61; // r14
  __int64 v62; // rcx
  __int64 v63; // r9
  unsigned __int64 v64; // r14
  unsigned __int64 i; // rdi
  __int64 v66; // rcx
  void *v67; // rcx
  const struct _GUID *v68; // rdx
  char *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r9
  __int64 v72; // r9
  struct IViewEventDispatcherCrashRecovery *v73; // rcx
  PVOID v74; // rbx
  HRESULT PerMonitorComponents; // [rsp+48h] [rbp-69h] BYREF
  __int64 v77; // [rsp+50h] [rbp-61h] BYREF
  struct IViewEventDispatcherCrashRecovery *v78; // [rsp+58h] [rbp-59h] BYREF
  __int128 v79; // [rsp+68h] [rbp-49h] BYREF
  void (__fastcall ***v80)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // [rsp+78h] [rbp-39h] BYREF
  struct IImmersiveMonitor *v81; // [rsp+80h] [rbp-31h] BYREF
  __int64 v82; // [rsp+88h] [rbp-29h] BYREF
  PVOID v83; // [rsp+90h] [rbp-21h] BYREF
  void *v84[2]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v85; // [rsp+A8h] [rbp-9h]
  HSTRING string; // [rsp+B0h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp+7h] BYREF

  v85 = -2LL;
  v83 = 0LL;
  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, PVOID *))a2->lpVtbl->QueryService)(
                           a2,
                           &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                           &GUID_b644fe9d_3090_4a41_9f18_465a5f445272,
                           &v83);
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&PerMonitorComponents,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x896,
         v4) )
  {
    v5 = CApplicationManagerUtility::g_pIAMGlobals;
    v6 = v83;
    if ( CApplicationManagerUtility::g_pIAMGlobals[12].Ptr != v83 )
    {
      if ( v83 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v83 + 8LL))(v83);
      Ptr = v5[12].Ptr;
      v5[12].Ptr = v6;
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
  }
  v78 = 0LL;
  if ( PerMonitorComponents >= 0 )
  {
    v80 = 0LL;
    PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, void (__fastcall ****)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **)))a2->lpVtbl->QueryService)(
                             a2,
                             &SID_ViewEventDispatcher,
                             &GUID_f36451a9_014a_43ea_9492_ff81c012e15f,
                             &v80);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&PerMonitorComponents,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x8A1,
           v8) )
    {
      v9 = v78;
      if ( v78 )
      {
        v78 = 0LL;
        (*(void (__fastcall **)(struct IViewEventDispatcherCrashRecovery *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      (**v80)(v80, &GUID_58c1ac38_4edf_4ada_aa81_375958b4c848, &v78);
      *(_QWORD *)&v79 = CApplicationManager::_HandleViewEvent;
      DWORD2(v79) = 0;
      *(_OWORD *)v84 = v79;
      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,CApplicationManager,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>(
        &v79,
        (char *)this - 72,
        v84);
      v10 = v80;
      if ( WindowsCreateStringReference(
             L"Windows.Internal.ShellExperience.TopLevelApplication",
             0x34u,
             &hstringHeader,
             &string) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      v11 = v79;
      PerMonitorComponents = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **), _QWORD, _QWORD, HSTRING, int, char *))(*v10)[6])(
                               v10,
                               v79,
                               0LL,
                               string,
                               3,
                               (char *)this + 680);
      CRVPrivate::VerifyCriticalResult(
        (unsigned __int64)&PerMonitorComponents,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const unsigned __int16 *)0x8B0,
        v12);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v13 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **)))(*v13)[2])(v13);
    }
  }
  v14 = 0LL;
  v77 = 0LL;
  if ( PerMonitorComponents >= 0 )
  {
    lpVtbl = a2->lpVtbl;
    v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v77);
    PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))lpVtbl->QueryService)(
                             a2,
                             &SID_ImmersiveShellHookService,
                             &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                             v16);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&PerMonitorComponents,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x8BA,
           v17) )
    {
      PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v77 + 24LL))(
                               v77,
                               &unk_1801C7940,
                               18LL,
                               ((unsigned __int64)this + 56) & -(__int64)(this != (CApplicationManager *)72),
                               (char *)this + 648);
      if ( CRVPrivate::VerifyCriticalResult(
             (unsigned __int64)&PerMonitorComponents,
             L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
             (const unsigned __int16 *)0x8D7,
             v18) )
      {
        v19 = *((_QWORD *)this + 82);
        v14 = v77;
        if ( *(_QWORD *)(v19 + 8) == v77 )
          goto LABEL_26;
        if ( v77 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 8LL))(v77);
        v20 = *(_QWORD *)(v19 + 8);
        *(_QWORD *)(v19 + 8) = v14;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    v14 = v77;
LABEL_26:
    if ( PerMonitorComponents >= 0 )
    {
      PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 59)
                                                                                          + 24LL))(
                               *((_QWORD *)this + 59),
                               a2);
      CRVPrivate::VerifyCriticalResult(
        (unsigned __int64)&PerMonitorComponents,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const unsigned __int16 *)0x8E4,
        v21);
      if ( PerMonitorComponents >= 0 )
      {
        v22 = (_QWORD *)((char *)this + 424);
        v23 = a2->lpVtbl;
        v24 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((char *)this + 424);
        PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))v23->QueryService)(
                                 a2,
                                 &SID_IImmersiveMonitorService,
                                 &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                                 v24);
        if ( CRVPrivate::VerifyCriticalResult(
               (unsigned __int64)&PerMonitorComponents,
               L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
               (const unsigned __int16 *)0x8ED,
               v25) )
        {
          v26 = *((_QWORD *)this + 56);
          if ( v26 )
          {
            *((_QWORD *)this + 56) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
          PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                   a2,
                                   &SID_ProcessLifetimeManagerControl,
                                   &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
                                   (char *)this + 448);
          if ( CRVPrivate::VerifyCriticalResult(
                 (unsigned __int64)&PerMonitorComponents,
                 L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                 (const unsigned __int16 *)0x8F6,
                 v27) )
          {
            v28 = *((_QWORD *)this + 78);
            if ( v28 )
            {
              *((_QWORD *)this + 78) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
            PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                     a2,
                                     &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                                     &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                                     (char *)this + 624);
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&PerMonitorComponents,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x8F9,
              v29);
          }
        }
        if ( PerMonitorComponents >= 0 )
        {
          v81 = 0LL;
          PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor **))(*(_QWORD *)*v22 + 64LL))(
                                   *v22,
                                   &v81);
          if ( CRVPrivate::VerifyCriticalResult(
                 (unsigned __int64)&PerMonitorComponents,
                 L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                 (const unsigned __int16 *)0x907,
                 v30) )
          {
            PerMonitorComponents = CApplicationManager::_CreatePerMonitorComponents(
                                     (CApplicationManager *)((char *)this - 72),
                                     a2,
                                     v81);
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&PerMonitorComponents,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x90A,
              v31);
          }
          v32 = v81;
          if ( v81 )
          {
            v81 = 0LL;
            (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v32 + 16LL))(v32);
          }
          if ( PerMonitorComponents >= 0 )
          {
            v33 = (char *)this - 72;
            PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, unsigned __int64))(**((_QWORD **)this + 51) + 40LL))(
                                     *((_QWORD *)this + 51),
                                     a2,
                                     ((unsigned __int64)this + 128) & -(__int64)(this != (CApplicationManager *)72));
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&PerMonitorComponents,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x913,
              v34);
            if ( PerMonitorComponents >= 0 )
            {
              v35 = WPP_GLOBAL_Control;
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_8bd202aa8a883acb924286472c3692bf_Traceguids);
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                TemplateEventDescriptor(v35, &ImmersiveShell_AppManager_Reconstitution_Start);
              PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 56LL))(*((_QWORD *)this + 59));
              if ( CRVPrivate::VerifyCriticalResult(
                     (unsigned __int64)&PerMonitorComponents,
                     L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                     (const unsigned __int16 *)0x91D,
                     v36) )
              {
                CApplicationManager::_RecoverApplicationViews((CApplicationManager *)((char *)this - 72), v78);
                PerMonitorComponents = RecoverApplicationWindows((struct IImmersiveShellHookNotification *)(((unsigned __int64)this + 56) & -(__int64)(this != (CApplicationManager *)72)));
                if ( CRVPrivate::VerifyCriticalResult(
                       (unsigned __int64)&PerMonitorComponents,
                       L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                       (const unsigned __int16 *)0x924,
                       v38) )
                {
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 64LL))(*((_QWORD *)this + 59));
                  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 77) + 32LL))(
                    *((_QWORD *)this + 77),
                    v77);
                  PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 54)
                                                                                            + 24LL))(
                                           *((_QWORD *)this + 54),
                                           *v22,
                                           v77);
                  if ( CRVPrivate::VerifyCriticalResult(
                         (unsigned __int64)&PerMonitorComponents,
                         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                         (const unsigned __int16 *)0x930,
                         v39) )
                  {
                    PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 49)
                                                                                             + 24LL))(
                                             *((_QWORD *)this + 49),
                                             *((_QWORD *)this + 54),
                                             *v22);
                    if ( CRVPrivate::VerifyCriticalResult(
                           (unsigned __int64)&PerMonitorComponents,
                           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           (const unsigned __int16 *)0x933,
                           v40) )
                    {
                      ForegroundWindow = GetForegroundWindow();
                      v42 = ForegroundWindow;
                      if ( ForegroundWindow )
                      {
                        if ( !GetWindow(ForegroundWindow, 4u)
                          || (WindowLongPtrW = GetWindowLongPtrW(v42, -20), v44 = 23LL, (WindowLongPtrW & 0x40000) != 0) )
                        {
                          v44 = 19LL;
                        }
                        (*(void (__fastcall **)(char *, __int64, HWND))(*((_QWORD *)this + 7) + 24LL))(
                          (char *)this + 56,
                          v44,
                          v42);
                      }
                    }
                  }
                }
              }
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                TemplateEventDescriptor(v37, &ImmersiveShell_AppManager_Reconstitution_Stop);
              if ( PerMonitorComponents >= 0 )
              {
                (*(void (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 52) + 24LL))(
                  *((_QWORD *)this + 52),
                  a2);
                PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 56) + 168LL))(
                                         *((_QWORD *)this + 56),
                                         7LL,
                                         ((unsigned __int64)this + 144) & -(__int64)(this != (CApplicationManager *)72),
                                         (char *)this + 668);
                CRVPrivate::VerifyCriticalResult(
                  (unsigned __int64)&PerMonitorComponents,
                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const unsigned __int16 *)0x95D,
                  v45);
                if ( PerMonitorComponents >= 0 )
                {
                  v82 = 0LL;
                  v46 = a2->lpVtbl;
                  v47 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v82);
                  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64))v46->QueryService)(
                                           a2,
                                           &IID_IImmersiveSessionIdleDetector,
                                           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                                           v47);
                  if ( CRVPrivate::VerifyCriticalResult(
                         (unsigned __int64)&PerMonitorComponents,
                         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                         (const unsigned __int16 *)0x965,
                         v48) )
                  {
                    PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v82 + 32LL))(
                                             v82,
                                             -(__int64)(this != (CApplicationManager *)72) & ((unsigned __int64)this
                                                                                            + 152),
                                             (char *)this + 672);
                    CRVPrivate::VerifyCriticalResult(
                      (unsigned __int64)&PerMonitorComponents,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      (const unsigned __int16 *)0x968,
                      v49);
                  }
                  v50 = v82;
                  if ( v82 )
                  {
                    v82 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
                  }
                  if ( PerMonitorComponents >= 0 )
                  {
                    *(_QWORD *)&v79 = 0LL;
                    v51 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v79);
                    PerMonitorComponents = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*v22)(
                                             *v22,
                                             &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                                             v51);
                    if ( CRVPrivate::VerifyCriticalResult(
                           (unsigned __int64)&PerMonitorComponents,
                           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           (const unsigned __int16 *)0x970,
                           v52) )
                    {
                      v84[0] = 0LL;
                      PerMonitorComponents = CMonitorNotificationHelper_CreateInstance(
                                               (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 96) & -(__int64)(this != (CApplicationManager *)72)),
                                               (const struct _GUID *)this + 6,
                                               v84);
                      if ( CRVPrivate::VerifyCriticalResult(
                             (unsigned __int64)&PerMonitorComponents,
                             L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                             (const unsigned __int16 *)0x975,
                             v53) )
                      {
                        PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(*(_QWORD *)v79 + 24LL))(
                                                 v79,
                                                 v84[0],
                                                 (char *)this + 676);
                        CRVPrivate::VerifyCriticalResult(
                          (unsigned __int64)&PerMonitorComponents,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          (const unsigned __int16 *)0x978,
                          v54);
                      }
                      v55 = v84[0];
                      if ( v84[0] )
                      {
                        v84[0] = 0LL;
                        (*(void (__fastcall **)(void *))(*(_QWORD *)v55 + 16LL))(v55);
                      }
                    }
                    v56 = v79;
                    if ( (_QWORD)v79 )
                    {
                      *(_QWORD *)&v79 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
                    }
                    if ( PerMonitorComponents >= 0 )
                    {
                      PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 58) + 80LL))(*((_QWORD *)this + 58));
                      CRVPrivate::VerifyCriticalResult(
                        (unsigned __int64)&PerMonitorComponents,
                        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        (const unsigned __int16 *)0x980,
                        v57);
                      if ( PerMonitorComponents >= 0 )
                      {
                        *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
                        StringReference = WindowsCreateStringReference(
                                            L"Windows.Internal.Shell.Holographic.ContextIdentifier",
                                            0x34u,
                                            (HSTRING_HEADER *)&string,
                                            (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
                        if ( StringReference < 0 )
                        {
                          Microsoft::WRL::Details::RaiseException(
                            (Microsoft::WRL::Details *)(unsigned int)StringReference,
                            v59,
                            v60);
                          __debugbreak();
                        }
                        v61 = *(_QWORD *)&hstringHeader.Reserved.Reserved2[16];
                        v62 = *((_QWORD *)this + 80);
                        if ( v62 )
                        {
                          *((_QWORD *)this + 80) = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
                        }
                        PerMonitorComponents = RoGetActivationFactory(
                                                 v61,
                                                 &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771,
                                                 (char *)this + 640);
                        CRVPrivate::VerifyCriticalResult(
                          (unsigned __int64)&PerMonitorComponents,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          (const unsigned __int16 *)0x987,
                          v63);
                        if ( PerMonitorComponents >= 0 )
                        {
                          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                          v64 = *((_QWORD *)this + 63);
                          for ( i = 0LL; i < v64; ++i )
                          {
                            v66 = *(_QWORD *)(*((_QWORD *)this + 62) + 8 * i);
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 120LL))(v66);
                          }
                          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                          v67 = WPP_GLOBAL_Control;
                          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
                            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                          {
                            WPP_SF_(
                              *((_QWORD *)WPP_GLOBAL_Control + 2),
                              0xBu,
                              &WPP_8bd202aa8a883acb924286472c3692bf_Traceguids);
                          }
                          BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) = 1;
                          v84[0] = (char *)this - 72;
                          if ( this != (CApplicationManager *)72 )
                            (*(void (__fastcall **)(char *))(*(_QWORD *)v33 + 8LL))((char *)this - 72);
                          *(_QWORD *)&v79 = (char *)this - 72;
                          if ( this != (CApplicationManager *)72 )
                            (*(void (__fastcall **)(char *))(*(_QWORD *)v33 + 8LL))((char *)this - 72);
                          if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_6f3dfa547e2ecbb13d4169c92b8d6cb6___(
                                      v67,
                                      &v79) < 0 )
                          {
                            v69 = (char *)&CApplicationManagerUtility::g_pIAMGlobals[11].Ptr + 5;
                            BYTE5(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) = 1;
                            WakeByAddressAll(v69);
                          }
                          if ( this != (CApplicationManager *)72 )
                            (*(void (__fastcall **)(char *))(*(_QWORD *)v33 + 16LL))((char *)this - 72);
                          v70 = *((_QWORD *)this + 76);
                          if ( v70 )
                          {
                            *((_QWORD *)this + 76) = 0LL;
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
                          }
                          PerMonitorComponents = CVisibilityOverride::s_CreateInstance(
                                                   (struct IImmersiveApplicationVisibilityOverride *)(((unsigned __int64)this + 72) & -(__int64)(this != (CApplicationManager *)72)),
                                                   v68,
                                                   (void **)this + 76);
                          if ( CRVPrivate::VerifyCriticalResult(
                                 (unsigned __int64)&PerMonitorComponents,
                                 L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                 (const unsigned __int16 *)0x9AD,
                                 v71) )
                          {
                            PerMonitorComponents = IUnknown_SetSite(*((IUnknown **)this + 76), (IUnknown *)this - 9);
                            CRVPrivate::VerifyCriticalResult(
                              (unsigned __int64)&PerMonitorComponents,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              (const unsigned __int16 *)0x9B0,
                              v72);
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
      v14 = v77;
    }
  }
  if ( v14 )
  {
    v77 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v73 = v78;
  if ( v78 )
  {
    v78 = 0LL;
    (*(void (__fastcall **)(struct IViewEventDispatcherCrashRecovery *))(*(_QWORD *)v73 + 16LL))(v73);
  }
  v74 = v83;
  if ( v83 )
  {
    v83 = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v74 + 16LL))(v74);
  }
  return (unsigned int)PerMonitorComponents;
}
