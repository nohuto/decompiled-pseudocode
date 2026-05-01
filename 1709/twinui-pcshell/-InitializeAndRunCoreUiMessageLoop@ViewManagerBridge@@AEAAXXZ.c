/*
 * XREFs of ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x1801370E0
 * Callers:
 *     _lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_ @ 0x180132F50 (_lambda_746ce81ff21a836f4d6b75f33bf24800_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801283F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatc.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewManagerBridge::InitializeAndRunCoreUiMessageLoop(HANDLE *this)
{
  ViewManagerBridge *v1; // rdi
  _QWORD *v2; // rsi
  HANDLE v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rcx
  wil *v20; // rcx
  __int64 v21; // rcx
  const char *v22; // r9
  __int64 v23; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v24[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v28; // [rsp+68h] [rbp+10h] BYREF
  wil *v29; // [rsp+70h] [rbp+18h] BYREF
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v24[1] = -2LL;
  v1 = (ViewManagerBridge *)this;
  try
  {
    v2 = this + 12;
    v3 = this[12];
    if ( v3 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = CoreUICreate(v2);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x50D,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(), ViewManagerBridge *))(*(_QWORD *)*v2
                                                                                                  + 264LL))(
           *v2,
           *((_QWORD *)v1 + 18),
           lambda_fac38c699c8bb63e0b9dd6c10e48dd3a_::_lambda_invoker_cdecl_,
           v1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x516,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    v29 = 0LL;
    v6 = CoreUIFactoryCreate(&v29);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x51A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(wil *, GUID *, __int64))(*(_QWORD *)v29 + 24LL))(
           v29,
           &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d,
           (__int64)v1 + 104);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x51D,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    v30 = 0LL;
    v8 = (*(__int64 (__fastcall **)(wil *, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v29 + 40LL))(
           v29,
           L"System\\NavigationServer_ShellViewManager",
           *((unsigned int *)v1 + 26),
           &v30);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x51F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 56LL))(v30, (__int64)v1 + 8);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x522,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    v10 = *((_QWORD *)v1 + 14);
    if ( v10 )
    {
      *((_QWORD *)v1 + 14) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v30)(
            v30,
            &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d,
            (__int64)v1 + 112);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x525,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(wil *, GUID *, unsigned int *))(*(_QWORD *)v29 + 24LL))(
            v29,
            &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9,
            &v28);
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x529,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    v24[0] = 0LL;
    v13 = (*(__int64 (__fastcall **)(wil *, const wchar_t *, _QWORD, _QWORD *))(*(_QWORD *)v29 + 40LL))(
            v29,
            L"System\\NavigationServer_ClientViewCreator",
            v28,
            v24);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x52B,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    v14 = *((_QWORD *)v1 + 15);
    if ( v14 )
    {
      *((_QWORD *)v1 + 15) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))v24[0])(
            v24[0],
            &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9,
            (__int64)v1 + 120);
    if ( v15 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x52C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 224LL))(*v2);
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x52F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v16);
    v18 = v24[0];
    if ( v24[0] )
    {
      v24[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(wil *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  catch ( ... )
  {
    *((_DWORD *)this + 39) = wil::ResultFromCaughtException(v20, &v23, v17);
    if ( !SetEvent(this[17]) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v22);
    v1 = (ViewManagerBridge *)this;
  }
  v21 = *((_QWORD *)v1 + 11);
  if ( v21 )
  {
    *((_QWORD *)v1 + 11) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::Release(v21);
  }
}
