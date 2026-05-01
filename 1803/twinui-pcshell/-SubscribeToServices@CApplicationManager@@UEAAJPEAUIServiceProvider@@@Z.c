/*
 * XREFs of ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010C7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800051EC (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029EA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImme.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800904F4 (--$GetActivationFactory@V-$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___ @ 0x180103280 (CIAMGlobals--QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180103888 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x18010EDA8 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?_FinalizeApplicationRecovery@CApplicationManager@@AEAAXXZ @ 0x18010F460 (-_FinalizeApplicationRecovery@CApplicationManager@@AEAAXXZ.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x180111218 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 *     WPP_SF_ @ 0x180112178 (WPP_SF_.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180112698 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x180112C48 (-s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@P.c)
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x180113070 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 *     ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x180113864 (-s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CApplicationManager::SubscribeToServices(CApplicationManager *this, struct IServiceProvider *a2)
{
  CCriticalFailureHandler *v4; // rcx
  int PerMonitorComponents; // ebx
  __int64 v6; // r8
  void *v7; // rdi
  PSRWLOCK v8; // r15
  CCriticalFailureHandler *v9; // rcx
  char *v10; // rdi
  char *v11; // rax
  char *v12; // rbx
  __int64 v13; // rbx
  CCriticalFailureHandler *v14; // rcx
  _QWORD *v15; // r12
  __int64 v16; // rbx
  CCriticalFailureHandler *v17; // rcx
  CCriticalFailureHandler *v18; // rcx
  char *v19; // r15
  void *v20; // rcx
  CApplicationManagerUtility *ForegroundWindow; // rax
  HWND v22; // rdx
  CApplicationManagerUtility *v23; // rdi
  HWND v24; // rdx
  bool IsForcedAppWindow; // al
  unsigned __int64 v26; // rdx
  CCriticalFailureHandler *v27; // rcx
  CCriticalFailureHandler *v28; // rcx
  CCriticalFailureHandler *v29; // rcx
  CCriticalFailureHandler *v30; // rcx
  CCriticalFailureHandler *v31; // rcx
  __int64 v32; // rcx
  volatile int *v33; // rdx
  void *v34; // rcx
  char *v35; // rbx
  int v36; // r10d
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  int v41; // edi
  char *v42; // rcx
  unsigned __int64 *v44; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v45; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v46; // [rsp+30h] [rbp-D8h]
  int v47[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h] BYREF
  void (__fastcall ***v49)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // [rsp+58h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  struct IImmersiveMonitor *v51; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-98h] BYREF
  void *v53; // [rsp+78h] [rbp-90h] BYREF
  __int64 v54; // [rsp+80h] [rbp-88h] BYREF
  char *v55; // [rsp+88h] [rbp-80h]
  struct IViewEventDispatcherCrashRecovery *v56; // [rsp+90h] [rbp-78h] BYREF
  PVOID v57; // [rsp+98h] [rbp-70h] BYREF
  PVOID Ptr; // [rsp+A0h] [rbp-68h] BYREF
  char *v59; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B0h] [rbp-58h] BYREF
  char *v61; // [rsp+C0h] [rbp-48h]
  __int64 v62; // [rsp+C8h] [rbp-40h]
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp-38h] BYREF
  HSTRING_HEADER v64; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v65; // [rsp+108h] [rbp+0h]

  v62 = -2LL;
  v57 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, PVOID *))a2->lpVtbl->QueryService)(
                           a2,
                           &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                           &GUID_52840c9b_dbca_427b_94cd_6989ee80a480,
                           &v57);
  v47[0] = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v4, v47);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    PerMonitorComponents = v47[0];
  }
  if ( PerMonitorComponents >= 0 )
    goto LABEL_8;
  if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v4,
      v47,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x924u,
      v44,
      v46);
    PerMonitorComponents = v47[0];
  }
  if ( PerMonitorComponents >= 0 )
  {
LABEL_8:
    v7 = v57;
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr != v57 )
    {
      Ptr = v57;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&Ptr);
      Ptr = v8[14].Ptr;
      v8[14].Ptr = v7;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
    }
  }
  v56 = 0LL;
  if ( PerMonitorComponents >= 0 )
  {
    v49 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
    PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, void (__fastcall ****)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **)))a2->lpVtbl->QueryService)(
                             a2,
                             &SID_ViewEventDispatcher,
                             &GUID_f36451a9_014a_43ea_9492_ff81c012e15f,
                             &v49);
    v47[0] = PerMonitorComponents;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, v47);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      PerMonitorComponents = v47[0];
    }
    if ( PerMonitorComponents >= 0 )
      goto LABEL_18;
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        v47,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x92Fu,
        v44,
        v46);
      PerMonitorComponents = v47[0];
    }
    if ( PerMonitorComponents >= 0 )
    {
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
      (**v49)(v49, &GUID_58c1ac38_4edf_4ada_aa81_375958b4c848, &v56);
      *(_QWORD *)&v60 = CApplicationManager::_HandleViewEvent;
      DWORD2(v60) = 0;
      hstringHeader.Reserved.Reserved1 = (char *)this - 88;
      *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v60;
      v10 = 0LL;
      v61 = 0LL;
      v11 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      if ( v11 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v11);
        *(HSTRING_HEADER *)(v12 + 16) = hstringHeader;
        *(_QWORD *)v12 = off_180323F18;
        v10 = v12;
        v61 = v12;
      }
      *(_QWORD *)&v60 = v10;
      v13 = (__int64)v49;
      if ( WindowsCreateStringReference(
             L"Windows.Internal.ShellExperience.TopLevelApplication",
             0x34u,
             (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
             (HSTRING *)&hstringHeader) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      v46 = (unsigned __int64 *)((char *)this + 728);
      LODWORD(v44) = 3;
      PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, PVOID))(*(_QWORD *)v13 + 48LL))(
                               v13,
                               v10,
                               0LL,
                               hstringHeader.Reserved.Reserved1);
      v47[0] = PerMonitorComponents;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v14, v47);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        PerMonitorComponents = v47[0];
      }
      if ( PerMonitorComponents < 0 && PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v14,
          v47,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x93Eu,
          v44,
          v46);
        PerMonitorComponents = v47[0];
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
  }
  v48 = 0LL;
  if ( PerMonitorComponents >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
    PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
                             a2,
                             &SID_ImmersiveShellHookService,
                             &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                             &v48);
    v47[0] = PerMonitorComponents;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v4, v47);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      PerMonitorComponents = v47[0];
    }
    if ( PerMonitorComponents >= 0 )
      goto LABEL_236;
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        v47,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x948u,
        v44,
        v46);
      PerMonitorComponents = v47[0];
    }
    if ( PerMonitorComponents >= 0 )
    {
LABEL_236:
      v45 = (unsigned __int64 *)((char *)this + 696);
      PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v48 + 24LL))(
                               v48,
                               &unk_1803A1F00,
                               18LL,
                               ((unsigned __int64)this + 72) & -(__int64)(this != (CApplicationManager *)88));
      v47[0] = PerMonitorComponents;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v4, v47);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        PerMonitorComponents = v47[0];
      }
      if ( PerMonitorComponents >= 0 )
        goto LABEL_237;
      if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v4,
          v47,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x965u,
          v45,
          v46);
        PerMonitorComponents = v47[0];
      }
      if ( PerMonitorComponents >= 0 )
      {
LABEL_237:
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(*((_QWORD *)this + 88) + 8LL), v48);
        PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 64)
                                                                                            + 24LL))(
                                 *((_QWORD *)this + 64),
                                 a2);
        v47[0] = PerMonitorComponents;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v4, v47);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          PerMonitorComponents = v47[0];
        }
        if ( PerMonitorComponents >= 0 )
          goto LABEL_238;
        if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v4,
            v47,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x972u,
            v45,
            v46);
          PerMonitorComponents = v47[0];
        }
        if ( PerMonitorComponents >= 0 )
        {
LABEL_238:
          v15 = (_QWORD *)((char *)this + 464);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 58);
          PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                   a2,
                                   &SID_IImmersiveMonitorService,
                                   &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                                   (char *)this + 464);
          v47[0] = PerMonitorComponents;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v4, v47);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            PerMonitorComponents = v47[0];
          }
          if ( PerMonitorComponents >= 0 )
            goto LABEL_239;
          if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v4,
              v47,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x97Bu,
              v45,
              v46);
            PerMonitorComponents = v47[0];
          }
          if ( PerMonitorComponents >= 0 )
          {
LABEL_239:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
            PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                     a2,
                                     &SID_ProcessLifetimeManagerControl,
                                     &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
                                     (char *)this + 488);
            v47[0] = PerMonitorComponents;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v4, v47);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              PerMonitorComponents = v47[0];
            }
            if ( PerMonitorComponents >= 0 )
              goto LABEL_240;
            if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v4,
                v47,
                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                0x984u,
                v45,
                v46);
              PerMonitorComponents = v47[0];
            }
            if ( PerMonitorComponents >= 0 )
            {
LABEL_240:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 83);
              PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                       a2,
                                       &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                                       &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                                       (char *)this + 664);
              v47[0] = PerMonitorComponents;
              if ( !CRVPrivate::cfhImmersiveShellStartup )
              {
                CCriticalFailureHandler::GetFakeFailure(v4, v47);
                CRVPrivate::cfhImmersiveShellStartup = 1;
                PerMonitorComponents = v47[0];
              }
              if ( PerMonitorComponents >= 0 )
                goto LABEL_241;
              if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v4,
                  v47,
                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  0x987u,
                  v45,
                  v46);
                PerMonitorComponents = v47[0];
              }
              if ( PerMonitorComponents >= 0 )
              {
LABEL_241:
                v51 = 0LL;
                v16 = *v15;
                Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v51);
                PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v16 + 64LL))(
                                         v16,
                                         &v51);
                v47[0] = PerMonitorComponents;
                if ( !CRVPrivate::cfhImmersiveShellStartup )
                {
                  CCriticalFailureHandler::GetFakeFailure(v17, v47);
                  CRVPrivate::cfhImmersiveShellStartup = 1;
                  PerMonitorComponents = v47[0];
                }
                if ( PerMonitorComponents >= 0 )
                  goto LABEL_80;
                if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v17,
                    v47,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    0x995u,
                    v45,
                    v46);
                  PerMonitorComponents = v47[0];
                }
                if ( PerMonitorComponents >= 0 )
                {
LABEL_80:
                  PerMonitorComponents = CApplicationManager::_CreatePerMonitorComponents(
                                           (CApplicationManager *)((char *)this - 88),
                                           a2,
                                           v51);
                  v47[0] = PerMonitorComponents;
                  if ( !CRVPrivate::cfhImmersiveShellStartup )
                  {
                    CCriticalFailureHandler::GetFakeFailure(v18, v47);
                    CRVPrivate::cfhImmersiveShellStartup = 1;
                    PerMonitorComponents = v47[0];
                  }
                  if ( PerMonitorComponents < 0
                    && PerMonitorComponents != -2147024882
                    && PerMonitorComponents != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v18,
                      v47,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      0x998u,
                      v45,
                      v46);
                    PerMonitorComponents = v47[0];
                  }
                }
                Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v51);
                if ( PerMonitorComponents >= 0 )
                {
                  v19 = (char *)this - 88;
                  PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, unsigned __int64))(**((_QWORD **)this + 56) + 40LL))(
                                           *((_QWORD *)this + 56),
                                           a2,
                                           ((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)88));
                  v47[0] = PerMonitorComponents;
                  if ( !CRVPrivate::cfhImmersiveShellStartup )
                  {
                    CCriticalFailureHandler::GetFakeFailure(v4, v47);
                    CRVPrivate::cfhImmersiveShellStartup = 1;
                    PerMonitorComponents = v47[0];
                  }
                  if ( PerMonitorComponents >= 0 )
                    goto LABEL_242;
                  if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v4,
                      v47,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      0x9A1u,
                      v45,
                      v46);
                    PerMonitorComponents = v47[0];
                  }
                  if ( PerMonitorComponents >= 0 )
                  {
LABEL_242:
                    v20 = WPP_GLOBAL_Control;
                    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      WPP_SF_(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        10LL,
                        &WPP_dec5a53844bb36396a136e6751054188_Traceguids);
                    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                      McTemplateU0((__int64)v20, (__int64)&ImmersiveShell_AppManager_Reconstitution_Start);
                    PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 56LL))(*((_QWORD *)this + 64));
                    v47[0] = PerMonitorComponents;
                    if ( !CRVPrivate::cfhImmersiveShellStartup )
                    {
                      CCriticalFailureHandler::GetFakeFailure(v4, v47);
                      CRVPrivate::cfhImmersiveShellStartup = 1;
                      PerMonitorComponents = v47[0];
                    }
                    if ( PerMonitorComponents >= 0 )
                      goto LABEL_106;
                    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                    {
                      CCriticalFailureHandler::HandleFailure(
                        v4,
                        v47,
                        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        0x9ABu,
                        v45,
                        v46);
                      PerMonitorComponents = v47[0];
                    }
                    if ( PerMonitorComponents >= 0 )
                    {
LABEL_106:
                      CApplicationManager::_RecoverApplicationViews((CApplicationManager *)((char *)this - 88), v56);
                      PerMonitorComponents = RecoverApplicationWindows((struct IImmersiveShellHookNotification *)(((unsigned __int64)this + 72) & -(__int64)(this != (CApplicationManager *)88)));
                      v47[0] = PerMonitorComponents;
                      if ( !CRVPrivate::cfhImmersiveShellStartup )
                      {
                        CCriticalFailureHandler::GetFakeFailure(v4, v47);
                        CRVPrivate::cfhImmersiveShellStartup = 1;
                        PerMonitorComponents = v47[0];
                      }
                      if ( PerMonitorComponents >= 0 )
                        goto LABEL_113;
                      if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                      {
                        CCriticalFailureHandler::HandleFailure(
                          v4,
                          v47,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          0x9B2u,
                          v45,
                          v46);
                        PerMonitorComponents = v47[0];
                      }
                      if ( PerMonitorComponents >= 0 )
                      {
LABEL_113:
                        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 64LL))(*((_QWORD *)this + 64));
                        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 82) + 32LL))(
                          *((_QWORD *)this + 82),
                          v48);
                        PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 59)
                                                                                                  + 24LL))(
                                                 *((_QWORD *)this + 59),
                                                 *v15,
                                                 v48);
                        v47[0] = PerMonitorComponents;
                        if ( !CRVPrivate::cfhImmersiveShellStartup )
                        {
                          CCriticalFailureHandler::GetFakeFailure(v4, v47);
                          CRVPrivate::cfhImmersiveShellStartup = 1;
                          PerMonitorComponents = v47[0];
                        }
                        if ( PerMonitorComponents >= 0 )
                          goto LABEL_120;
                        if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                        {
                          CCriticalFailureHandler::HandleFailure(
                            v4,
                            v47,
                            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            0x9BEu,
                            v45,
                            v46);
                          PerMonitorComponents = v47[0];
                        }
                        if ( PerMonitorComponents >= 0 )
                        {
LABEL_120:
                          PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 54) + 24LL))(
                                                   *((_QWORD *)this + 54),
                                                   *((_QWORD *)this + 59),
                                                   *v15);
                          v47[0] = PerMonitorComponents;
                          if ( !CRVPrivate::cfhImmersiveShellStartup )
                          {
                            CCriticalFailureHandler::GetFakeFailure(v4, v47);
                            CRVPrivate::cfhImmersiveShellStartup = 1;
                            PerMonitorComponents = v47[0];
                          }
                          if ( PerMonitorComponents >= 0 )
                            goto LABEL_127;
                          if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              v4,
                              v47,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x9C1u,
                              v45,
                              v46);
                            PerMonitorComponents = v47[0];
                          }
                          if ( PerMonitorComponents >= 0 )
                          {
LABEL_127:
                            ForegroundWindow = (CApplicationManagerUtility *)GetForegroundWindow();
                            v23 = ForegroundWindow;
                            if ( ForegroundWindow )
                            {
                              if ( !CApplicationManagerUtility::IsOwnedWindow(ForegroundWindow, v22)
                                || (IsForcedAppWindow = CApplicationManagerUtility::IsForcedAppWindow(v23, v24),
                                    v26 = 23LL,
                                    IsForcedAppWindow) )
                              {
                                v26 = 19LL;
                              }
                              CApplicationManager::OnShellHookMessage(
                                (CApplicationManager *)((char *)this + 72),
                                v26,
                                (HWND)v23);
                            }
                          }
                        }
                      }
                    }
                    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                      McTemplateU0((__int64)v4, (__int64)&ImmersiveShell_AppManager_Reconstitution_Stop);
                    if ( PerMonitorComponents >= 0 )
                    {
                      (*(void (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 57) + 24LL))(
                        *((_QWORD *)this + 57),
                        a2);
                      PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 61) + 168LL))(
                                               *((_QWORD *)this + 61),
                                               7LL,
                                               ((unsigned __int64)this + 176) & -(__int64)(this != (CApplicationManager *)88),
                                               (char *)this + 716);
                      v47[0] = PerMonitorComponents;
                      if ( !CRVPrivate::cfhImmersiveShellStartup )
                      {
                        CCriticalFailureHandler::GetFakeFailure(v4, v47);
                        CRVPrivate::cfhImmersiveShellStartup = 1;
                        PerMonitorComponents = v47[0];
                      }
                      if ( PerMonitorComponents >= 0 )
                        goto LABEL_243;
                      if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                      {
                        CCriticalFailureHandler::HandleFailure(
                          v4,
                          v47,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          0x9EBu,
                          v45,
                          v46);
                        PerMonitorComponents = v47[0];
                      }
                      if ( PerMonitorComponents >= 0 )
                      {
LABEL_243:
                        v52 = 0LL;
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
                        PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
                                                 a2,
                                                 &IID_IImmersiveSessionIdleDetector,
                                                 &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                                                 &v52);
                        v47[0] = PerMonitorComponents;
                        if ( !CRVPrivate::cfhImmersiveShellStartup )
                        {
                          CCriticalFailureHandler::GetFakeFailure(v27, v47);
                          CRVPrivate::cfhImmersiveShellStartup = 1;
                          PerMonitorComponents = v47[0];
                        }
                        if ( PerMonitorComponents >= 0 )
                          goto LABEL_149;
                        if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                        {
                          CCriticalFailureHandler::HandleFailure(
                            v27,
                            v47,
                            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            0x9F3u,
                            v45,
                            v46);
                          PerMonitorComponents = v47[0];
                        }
                        if ( PerMonitorComponents >= 0 )
                        {
LABEL_149:
                          PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v52 + 32LL))(
                                                   v52,
                                                   ((unsigned __int64)this + 184) & ((unsigned __int128)-(__int128)(unsigned __int64)v19 >> 64),
                                                   (char *)this + 720);
                          v47[0] = PerMonitorComponents;
                          if ( !CRVPrivate::cfhImmersiveShellStartup )
                          {
                            CCriticalFailureHandler::GetFakeFailure(v28, v47);
                            CRVPrivate::cfhImmersiveShellStartup = 1;
                            PerMonitorComponents = v47[0];
                          }
                          if ( PerMonitorComponents < 0
                            && PerMonitorComponents != -2147024882
                            && PerMonitorComponents != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              v28,
                              v47,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x9F6u,
                              v45,
                              v46);
                            PerMonitorComponents = v47[0];
                          }
                        }
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
                        if ( PerMonitorComponents >= 0 )
                        {
                          v54 = 0LL;
                          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
                          PerMonitorComponents = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v15)(
                                                   *v15,
                                                   &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                                                   &v54);
                          v47[0] = PerMonitorComponents;
                          if ( !CRVPrivate::cfhImmersiveShellStartup )
                          {
                            CCriticalFailureHandler::GetFakeFailure(v29, v47);
                            CRVPrivate::cfhImmersiveShellStartup = 1;
                            PerMonitorComponents = v47[0];
                          }
                          if ( PerMonitorComponents >= 0 )
                            goto LABEL_163;
                          if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              v29,
                              v47,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x9FEu,
                              v45,
                              v46);
                            PerMonitorComponents = v47[0];
                          }
                          if ( PerMonitorComponents >= 0 )
                          {
LABEL_163:
                            v53 = 0LL;
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
                            PerMonitorComponents = CMonitorNotificationHelper::s_CreateInstance(
                                                     (struct IImmersiveMonitorNotification *)(((unsigned __int64)this
                                                                                             + 120) & -(__int64)(this != (CApplicationManager *)88)),
                                                     (const struct _GUID *)((char *)this + 120),
                                                     &v53);
                            v47[0] = PerMonitorComponents;
                            if ( !CRVPrivate::cfhImmersiveShellStartup )
                            {
                              CCriticalFailureHandler::GetFakeFailure(v30, v47);
                              CRVPrivate::cfhImmersiveShellStartup = 1;
                              PerMonitorComponents = v47[0];
                            }
                            if ( PerMonitorComponents >= 0 )
                              goto LABEL_170;
                            if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                            {
                              CCriticalFailureHandler::HandleFailure(
                                v30,
                                v47,
                                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                0xA03u,
                                v45,
                                v46);
                              PerMonitorComponents = v47[0];
                            }
                            if ( PerMonitorComponents >= 0 )
                            {
LABEL_170:
                              PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v54 + 24LL))(
                                                       v54,
                                                       v53,
                                                       (char *)this + 724);
                              v47[0] = PerMonitorComponents;
                              if ( !CRVPrivate::cfhImmersiveShellStartup )
                              {
                                CCriticalFailureHandler::GetFakeFailure(v31, v47);
                                CRVPrivate::cfhImmersiveShellStartup = 1;
                                PerMonitorComponents = v47[0];
                              }
                              if ( PerMonitorComponents < 0
                                && PerMonitorComponents != -2147024882
                                && PerMonitorComponents != -2144862209 )
                              {
                                CCriticalFailureHandler::HandleFailure(
                                  v31,
                                  v47,
                                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                  0xA06u,
                                  v45,
                                  v46);
                                PerMonitorComponents = v47[0];
                              }
                            }
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
                          }
                          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
                          if ( PerMonitorComponents >= 0 )
                          {
                            PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 88LL))(*((_QWORD *)this + 63));
                            v47[0] = PerMonitorComponents;
                            if ( !CRVPrivate::cfhImmersiveShellStartup )
                            {
                              CCriticalFailureHandler::GetFakeFailure(v4, v47);
                              CRVPrivate::cfhImmersiveShellStartup = 1;
                              PerMonitorComponents = v47[0];
                            }
                            if ( PerMonitorComponents >= 0 )
                              goto LABEL_244;
                            if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                            {
                              CCriticalFailureHandler::HandleFailure(
                                v4,
                                v47,
                                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                0xA0Eu,
                                v45,
                                v46);
                              PerMonitorComponents = v47[0];
                            }
                            if ( PerMonitorComponents >= 0 )
                            {
LABEL_244:
                              v65 = 0LL;
                              Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                                &v64,
                                L"Windows.Internal.Shell.Holographic.ContextIdentifier",
                                0x35u,
                                0x34u);
                              PerMonitorComponents = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
                                                       v65,
                                                       (__int64 *)this + 85);
                              v47[0] = PerMonitorComponents;
                              if ( !CRVPrivate::cfhImmersiveShellStartup )
                              {
                                CCriticalFailureHandler::GetFakeFailure(v4, v47);
                                CRVPrivate::cfhImmersiveShellStartup = 1;
                                PerMonitorComponents = v47[0];
                              }
                              if ( PerMonitorComponents >= 0 )
                                goto LABEL_245;
                              if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                              {
                                CCriticalFailureHandler::HandleFailure(
                                  v4,
                                  v47,
                                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                  0xA15u,
                                  v45,
                                  v46);
                                PerMonitorComponents = v47[0];
                              }
                              if ( PerMonitorComponents >= 0 )
                              {
LABEL_245:
                                v50 = 0LL;
                                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
                                PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
                                                         a2,
                                                         &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5,
                                                         &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5,
                                                         &v50);
                                v47[0] = PerMonitorComponents;
                                if ( PerMonitorComponents >= 0 )
                                {
                                  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                                  v32 = *((_QWORD *)this + 86);
                                  *((_QWORD *)this + 86) = v50;
                                  v50 = v32;
                                  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                                }
                                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
                                if ( PerMonitorComponents >= 0 )
                                {
                                  CApplicationManager::_FinalizeApplicationRecovery((CApplicationManager *)((char *)this - 88));
                                  v34 = WPP_GLOBAL_Control;
                                  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
                                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                                  {
                                    WPP_SF_(
                                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                                      11LL,
                                      &WPP_dec5a53844bb36396a136e6751054188_Traceguids);
                                  }
                                  BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) = 1;
                                  v35 = (char *)this - 88;
                                  v55 = (char *)this - 88;
                                  v36 = 0x7FFFFFFF;
                                  if ( this != (CApplicationManager *)88 )
                                  {
                                    v37 = *((_QWORD *)v19 + 47);
                                    while ( 1 )
                                    {
                                      v34 = (void *)((unsigned __int64)v37 >> 63);
                                      if ( v37 < 0 )
                                        break;
                                      if ( (_DWORD)v37 != 0x7FFFFFFF )
                                      {
                                        v34 = (void *)(v37 + 1);
                                        v38 = v37;
                                        v37 = _InterlockedCompareExchange64(
                                                (volatile signed __int64 *)v19 + 47,
                                                v37 + 1,
                                                v37);
                                        if ( v38 != v37 )
                                          continue;
                                      }
                                      goto LABEL_205;
                                    }
                                    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
                                      (Microsoft::WRL::Details *)(2 * v37 + 16),
                                      v33);
LABEL_205:
                                    v35 = v55;
                                  }
                                  v59 = v35;
                                  if ( v35 )
                                  {
                                    v39 = *((_QWORD *)v35 + 47);
                                    while ( 1 )
                                    {
                                      v34 = (void *)((unsigned __int64)v39 >> 63);
                                      if ( v39 < 0 )
                                        break;
                                      if ( (_DWORD)v39 != v36 )
                                      {
                                        v34 = (void *)(v39 + 1);
                                        v40 = v39;
                                        v39 = _InterlockedCompareExchange64(
                                                (volatile signed __int64 *)v35 + 47,
                                                v39 + 1,
                                                v39);
                                        if ( v40 != v39 )
                                          continue;
                                      }
                                      goto LABEL_213;
                                    }
                                    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
                                      (Microsoft::WRL::Details *)(2 * v39 + 16),
                                      v33);
LABEL_213:
                                    v35 = v55;
                                  }
                                  v41 = CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___(
                                          v34,
                                          (__int64 *)&v59);
                                  if ( v59 )
                                    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::Release((__int64)v59);
                                  if ( v41 < 0 )
                                  {
                                    v42 = (char *)&CApplicationManagerUtility::g_pIAMGlobals[13].Ptr + 5;
                                    BYTE5(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) = 1;
                                    WakeByAddressAll(v42);
                                  }
                                  if ( v35 )
                                    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::Release((__int64)v35);
                                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 81);
                                  PerMonitorComponents = CVisibilityOverride::s_CreateInstance(
                                                           (struct IImmersiveApplicationVisibilityOverride *)(((unsigned __int64)this + 96) & -(__int64)(this != (CApplicationManager *)88)),
                                                           (const struct _GUID *)this + 6,
                                                           (void **)this + 81);
                                  v47[0] = PerMonitorComponents;
                                  if ( !CRVPrivate::cfhImmersiveShellStartup )
                                  {
                                    CCriticalFailureHandler::GetFakeFailure(v4, v47);
                                    CRVPrivate::cfhImmersiveShellStartup = 1;
                                    PerMonitorComponents = v47[0];
                                  }
                                  if ( PerMonitorComponents >= 0 )
                                    goto LABEL_227;
                                  if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
                                  {
                                    CCriticalFailureHandler::HandleFailure(
                                      v4,
                                      v47,
                                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                      0xA47u,
                                      v45,
                                      v46);
                                    PerMonitorComponents = v47[0];
                                  }
                                  if ( PerMonitorComponents >= 0 )
                                  {
LABEL_227:
                                    PerMonitorComponents = IUnknown_SetSite(
                                                             *((IUnknown **)this + 81),
                                                             (IUnknown *)this - 11);
                                    v47[0] = PerMonitorComponents;
                                    if ( !CRVPrivate::cfhImmersiveShellStartup )
                                    {
                                      CCriticalFailureHandler::GetFakeFailure(v4, v47);
                                      CRVPrivate::cfhImmersiveShellStartup = 1;
                                      PerMonitorComponents = v47[0];
                                    }
                                    if ( PerMonitorComponents < 0
                                      && PerMonitorComponents != -2147024882
                                      && PerMonitorComponents != -2144862209 )
                                    {
                                      CCriticalFailureHandler::HandleFailure(
                                        v4,
                                        v47,
                                        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                        0xA4Au,
                                        v45,
                                        v46);
                                      PerMonitorComponents = v47[0];
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
              }
            }
          }
        }
      }
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)v4, 0, v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
  return (unsigned int)PerMonitorComponents;
}
