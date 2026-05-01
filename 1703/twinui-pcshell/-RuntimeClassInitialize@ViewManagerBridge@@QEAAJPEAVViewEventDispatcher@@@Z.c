/*
 * XREFs of ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x1801085DC
 * Callers:
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@QEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@@012@$$QEBQEAVViewEventDispatcher@@@Z @ 0x1800FE284 (--$MakeAndInitialize@VViewManagerBridge@@V1@QEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800CA37C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FCBA0 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceList@UIMessageProxyLis.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherCrashRecovery@@U?$InterfaceList@UIViewManagerControl@@U?$InterfaceList@UIImmersiveShellHookNotification@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD2A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherCrashRecovery@@U?$InterfaceList@UIViewManagerControl@@U?$InterfaceList@UIImmersiveShellHookNotification@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD350 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@.c)
 */

__int64 __fastcall ViewManagerBridge::RuntimeClassInitialize(
        struct ViewEventDispatcher **this,
        struct ViewEventDispatcher *a2)
{
  ViewManagerBridge *v3; // rbx
  __int64 v4; // rcx
  int LastError; // edi
  __int64 v6; // rdx
  signed __int32 v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (ViewManagerBridge *)this;
  if ( this[9] != a2 )
  {
    if ( a2 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,Microsoft::WRL::Details::InterfaceList<IViewEventDispatcherCrashRecovery,Microsoft::WRL::Details::InterfaceList<IViewManagerControl,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef((__int64)a2);
    v4 = *((_QWORD *)v3 + 9);
    *((_QWORD *)v3 + 9) = a2;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,Microsoft::WRL::Details::InterfaceList<IViewEventDispatcherCrashRecovery,Microsoft::WRL::Details::InterfaceList<IViewManagerControl,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v4);
  }
  LastError = wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
                (void **)v3 + 15,
                1,
                0LL);
  if ( LastError < 0 )
  {
    v6 = 116LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
  LastError = wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
                (void **)v3 + 16,
                1,
                0LL);
  if ( LastError < 0 )
  {
    v6 = 118LL;
    goto LABEL_8;
  }
  if ( v3 )
  {
    do
      v7 = *((_DWORD *)v3 + 17);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)v3 + 17, v7 + 1, v7) );
  }
  if ( SHCreateThread(lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_, v3, 0x1000u, 0LL) )
  {
    v3 = 0LL;
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x86,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                  v8);
  }
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IViewManagerBridge,Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::InterfaceList<IMessageListListener,Microsoft::WRL::Details::InterfaceList<IMessageMapListener,Microsoft::WRL::Details::InterfaceList<Navigation::Server::IShellViewManagerListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v3);
  return (unsigned int)LastError;
}
