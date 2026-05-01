/*
 * XREFs of ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x18010C04C
 * Callers:
 *     _lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_ @ 0x1801086E0 (_lambda_746ce81ff21a836f4d6b75f33bf24800_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherCrashRecovery@@U?$InterfaceList@UIViewManagerControl@@U?$InterfaceList@UIImmersiveShellHookNotification@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD2A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v25[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v29; // [rsp+68h] [rbp+10h] BYREF
  wil *v30; // [rsp+70h] [rbp+18h] BYREF
  __int64 v31; // [rsp+78h] [rbp+20h] BYREF

  v25[1] = -2LL;
  v1 = (ViewManagerBridge *)this;
  try
  {
    v2 = this + 10;
    v3 = this[10];
    if ( v3 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = CoreUICreate(v2);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x50A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(), ViewManagerBridge *))(*(_QWORD *)*v2
                                                                                                  + 264LL))(
           *v2,
           *((_QWORD *)v1 + 16),
           lambda_fac38c699c8bb63e0b9dd6c10e48dd3a_::_lambda_invoker_cdecl_,
           v1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x513,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    v30 = 0LL;
    v6 = CoreUIFactoryCreate(&v30);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x517,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(wil *, GUID *, __int64))(*(_QWORD *)v30 + 24LL))(
           v30,
           &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d,
           (__int64)v1 + 88);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x51A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    v31 = 0LL;
    v8 = (*(__int64 (__fastcall **)(wil *, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v30 + 40LL))(
           v30,
           L"System\\NavigationServer_ShellViewManager",
           *((unsigned int *)v1 + 22),
           &v31);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x51C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 56LL))(v31, (__int64)v1 + 8);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x51F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    v10 = *((_QWORD *)v1 + 12);
    if ( v10 )
    {
      *((_QWORD *)v1 + 12) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v31)(
            v31,
            &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d,
            (__int64)v1 + 96);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x522,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(wil *, GUID *, unsigned int *))(*(_QWORD *)v30 + 24LL))(
            v30,
            &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9,
            &v29);
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x526,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    v25[0] = 0LL;
    v13 = (*(__int64 (__fastcall **)(wil *, const wchar_t *, _QWORD, _QWORD *))(*(_QWORD *)v30 + 40LL))(
            v30,
            L"System\\NavigationServer_ClientViewCreator",
            v29,
            v25);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x528,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    v14 = *((_QWORD *)v1 + 13);
    if ( v14 )
    {
      *((_QWORD *)v1 + 13) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))v25[0])(
            v25[0],
            &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9,
            (__int64)v1 + 104);
    if ( v15 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x529,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 224LL))(*v2);
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x52C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v16);
    v18 = v25[0];
    if ( v25[0] )
    {
      v25[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(wil *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  catch ( ... )
  {
    *((_DWORD *)this + 35) = wil::ResultFromCaughtException(v20, &v24, v17);
    if ( !SetEvent(this[15]) )
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x86F, v22, v23);
    v1 = (ViewManagerBridge *)this;
  }
  v21 = *((_QWORD *)v1 + 9);
  if ( v21 )
  {
    *((_QWORD *)v1 + 9) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,Microsoft::WRL::Details::InterfaceList<IViewEventDispatcherCrashRecovery,Microsoft::WRL::Details::InterfaceList<IViewManagerControl,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v21);
  }
}
