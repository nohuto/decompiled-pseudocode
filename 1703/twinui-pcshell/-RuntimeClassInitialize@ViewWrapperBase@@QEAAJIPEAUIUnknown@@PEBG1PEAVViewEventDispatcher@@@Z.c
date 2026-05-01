/*
 * XREFs of ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180112F74
 * Callers:
 *     ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x1801108D4 (-RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVV.c)
 *     ?RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180111010 (-RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherCrashRecovery@@U?$InterfaceList@UIViewManagerControl@@U?$InterfaceList@UIImmersiveShellHookNotification@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD2A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherCrashRecovery@@U?$InterfaceList@UIViewManagerControl@@U?$InterfaceList@UIImmersiveShellHookNotification@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD350 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@.c)
 *     ??$ViewWrapperCreated@AEAIAEAPEBGAEAPEBG@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEBG1@Z @ 0x18011938C (--$ViewWrapperCreated@AEAIAEAPEBGAEAPEBG@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEBG1@Z.c)
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x18011B7C0 (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::RuntimeClassInitialize(
        ViewWrapperBase *this,
        int a2,
        struct IUnknown *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *sourceString,
        struct ViewEventDispatcher *string)
{
  __int64 v9; // rcx
  struct ViewEventDispatcher *v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  HRESULT v13; // edi
  unsigned __int64 v14; // rax
  HRESULT v15; // esi
  HSTRING v16; // rcx
  HSTRING v18; // rcx
  _QWORD v19[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v21; // [rsp+98h] [rbp+38h] BYREF
  const unsigned __int16 *v22; // [rsp+A8h] [rbp+48h] BYREF

  v22 = a4;
  v21 = a2;
  *((_DWORD *)this + 33) = a2;
  if ( *((struct IUnknown **)this + 21) != a3 )
  {
    if ( a3 )
      ((void (__fastcall *)(struct IUnknown *))a3->lpVtbl->AddRef)(a3);
    v9 = *((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = string;
  if ( *((struct ViewEventDispatcher **)this + 19) != string )
  {
    if ( string )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,Microsoft::WRL::Details::InterfaceList<IViewEventDispatcherCrashRecovery,Microsoft::WRL::Details::InterfaceList<IViewManagerControl,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef((__int64)string);
    v11 = *((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = v10;
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,Microsoft::WRL::Details::InterfaceList<IViewEventDispatcherCrashRecovery,Microsoft::WRL::Details::InterfaceList<IViewManagerControl,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v11);
  }
  v19[1] = this;
  v19[0] = off_1801B75A0;
  v19[7] = v19;
  WindowReadyState::SetCallback((char *)this + 328, v19);
  v12 = -1LL;
  v13 = -2147024362;
  if ( a4 )
  {
    string = 0LL;
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    if ( v14 <= 0xFFFFFFFF )
    {
      v15 = WindowsCreateString(a4, v14, (HSTRING *)&string);
      if ( v15 >= 0 )
      {
        v16 = (HSTRING)*((_QWORD *)this + 17);
        *((_QWORD *)this + 17) = string;
        WindowsDeleteString(v16);
      }
    }
    else
    {
      v15 = -2147024362;
    }
  }
  else
  {
    v15 = -2147467261;
  }
  if ( v15 >= 0 )
  {
    if ( sourceString )
    {
      string = 0LL;
      do
        ++v12;
      while ( sourceString[v12] );
      if ( v12 <= 0xFFFFFFFF )
      {
        v13 = WindowsCreateString(sourceString, v12, (HSTRING *)&string);
        if ( v13 >= 0 )
        {
          v18 = (HSTRING)*((_QWORD *)this + 18);
          *((_QWORD *)this + 18) = string;
          WindowsDeleteString(v18);
        }
      }
    }
    else
    {
      v13 = -2147467261;
    }
    if ( v13 >= 0 )
    {
      ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int &,unsigned short const * &,unsigned short const * &>(
        &v21,
        &v22,
        &sourceString);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5D,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5C,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
}
