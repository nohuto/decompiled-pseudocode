/*
 * XREFs of ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x180026B10
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029EA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImme.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x180043F90 (-PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800900A4 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveMode::HandleActivationDeprecated(_DWORD *a1, int a2, char a3)
{
  __int64 v6; // r15
  int v7; // ebx
  bool v8; // al
  int v9; // ecx
  signed int ApartmentId; // ebx
  int v11; // edi
  CWRLObjectWithGITSite *v12; // rcx
  int (*v13)(CWRLObjectWithGITSite *__hidden, const struct _GUID *, void **); // rax
  void *v14; // rcx
  bool v15; // r14
  IUnknown *v16; // rcx
  void (*Release)(void); // rax
  int v18; // edx
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  void (__fastcall *v22)(CApplicationManager *__hidden, const struct MODE_TRANSITION_INFORMATION *const); // rax
  void *v23; // rcx
  int v25; // ecx
  int v26; // eax
  int cchValue; // [rsp+28h] [rbp-E0h]
  unsigned int v28[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-C8h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v31[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-98h]
  signed int v34; // [rsp+78h] [rbp-90h]
  WCHAR Filename[264]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v32 = -2LL;
  v28[0] = 0;
  v6 = (unsigned __int64)(a1 + 24) & -(__int64)(a1 != (_DWORD *)88);
  v33 = v6;
  v7 = *(_DWORD *)(v6 + 0x2C);
  v8 = v7 == 2;
  if ( v7 != 2 )
  {
    v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( !`_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    {
      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
      {
        v25 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v25;
      }
      else
      {
        v25 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      }
      if ( v25 != 1 )
      {
LABEL_4:
        v8 = 0;
        goto LABEL_5;
      }
      if ( v7 != 1 )
        goto LABEL_44;
      v26 = IsAppCompatModeEnabled(16LL);
      v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v26 )
        v9 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v9;
    }
    if ( v9 == 1 )
      goto LABEL_44;
    goto LABEL_4;
  }
LABEL_5:
  if ( !v8 )
  {
LABEL_6:
    ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v6) ? 0x8001010E : 0;
    goto LABEL_7;
  }
LABEL_44:
  if ( *(_DWORD *)(v6 + 40) == -3 )
    goto LABEL_6;
  ApartmentId = SHCoGetApartmentId(v28);
  if ( ApartmentId >= 0 && v28[0] != *(_DWORD *)(v6 + 40) )
    ApartmentId = -2147417842;
  if ( ApartmentId >= 0 )
    goto LABEL_6;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentId,
    cchValue);
LABEL_7:
  v34 = ApartmentId;
  v11 = -1;
  if ( a2 == 1 )
  {
    v11 = 0;
  }
  else if ( a2 == 8 || a2 == 10 || a2 == 12 )
  {
    v11 = 1;
  }
  ppvOut = 0LL;
  v12 = (CWRLObjectWithGITSite *)(a1 - 14);
  punk = 0LL;
  v28[0] = 2;
  v13 = *(int (**)(CWRLObjectWithGITSite *__hidden, const struct _GUID *, void **))(*((_QWORD *)a1 - 7) + 32LL);
  if ( v13 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v12, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  else
    ((void (__fastcall *)(CWRLObjectWithGITSite *, GUID *, IUnknown **))v13)(
      v12,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
  v14 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = IUnknown_QueryService(
          punk,
          &IID_IImmersiveApplicationManager,
          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
          &ppvOut) >= 0;
  v16 = punk;
  if ( punk )
  {
    punk = 0LL;
    Release = (void (*)(void))v16->lpVtbl->Release;
    if ( (char *)Release == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::Release(v16);
    else
      Release();
  }
  if ( v15 )
  {
    if ( v11 == -1 || !a3 )
    {
      v18 = a1[69];
      v19 = v18;
    }
    else
    {
      v18 = v11;
      v19 = a1[69];
    }
    v20 = a1[40];
    v21 = a1[62];
    v31[0] = v19;
    v31[1] = v18;
    v31[2] = v21;
    v31[3] = v20;
    v31[4] = a2;
    v22 = *(void (__fastcall **)(CApplicationManager *__hidden, const struct MODE_TRANSITION_INFORMATION *const))(*(_QWORD *)ppvOut + 24LL);
    if ( v22 == CApplicationManager::PerformModeBasedCallouts )
      CApplicationManager::PerformModeBasedCallouts(
        (CApplicationManager *)ppvOut,
        (const struct MODE_TRANSITION_INFORMATION *const)v31);
    else
      v22((CApplicationManager *)ppvOut, (const struct MODE_TRANSITION_INFORMATION *const)v31);
  }
  if ( a3 && v11 != -1 && v11 != a1[69] )
    a1[69] = v11;
  v23 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
  return 0LL;
}
