/*
 * XREFs of ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18013D1FC
 * Callers:
 *     ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x18013AB88 (-RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVV.c)
 *     ?RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18013B2B8 (-RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801283F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatc.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18012C63C (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??$ViewWrapperCreated@AEAIAEAPEBGAEAPEBG@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEBG1@Z @ 0x180143D60 (--$ViewWrapperCreated@AEAIAEAPEBGAEAPEBG@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEBG1@Z.c)
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x180145AC0 (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::RuntimeClassInitialize(
        ViewWrapperBase *this,
        int a2,
        struct IUnknown *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        struct ViewEventDispatcher *a6)
{
  const unsigned __int16 *v6; // rsi
  __int64 v9; // rcx
  struct ViewEventDispatcher *v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rcx
  int v14; // edi
  int v15; // esi
  _QWORD v17[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v19; // [rsp+88h] [rbp+28h] BYREF
  const unsigned __int16 *v20; // [rsp+98h] [rbp+38h] BYREF

  v20 = a4;
  v19 = a2;
  *((_DWORD *)this + 39) = a2;
  v6 = a4;
  if ( *((struct IUnknown **)this + 24) != a3 )
  {
    if ( a3 )
      ((void (__fastcall *)(struct IUnknown *))a3->lpVtbl->AddRef)(a3);
    v9 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = a6;
  if ( *((struct ViewEventDispatcher **)this + 22) != a6 )
  {
    if ( a6 )
    {
      v11 = *((_QWORD *)a6 + 34);
      a6 = (struct ViewEventDispatcher *)v11;
      while ( v11 >= 0 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 34, v11 + 1, v11);
        if ( v12 == v11 )
          goto LABEL_12;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_12:
      v6 = v20;
    }
    v13 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v10;
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::Release(v13);
  }
  v17[1] = this;
  v17[0] = off_18020CCC0;
  v17[7] = v17;
  WindowReadyState::SetCallback((char *)this + 352, v17);
  v14 = -2147467261;
  if ( v6 )
    v15 = Windows::Internal::String::_InitializeHelper((HSTRING *)this + 20, v6);
  else
    v15 = -2147467261;
  if ( v15 >= 0 )
  {
    if ( a5 )
      v14 = Windows::Internal::String::_InitializeHelper((HSTRING *)this + 21, a5);
    if ( v14 >= 0 )
    {
      ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int &,unsigned short const * &,unsigned short const * &>(
        &v19,
        &v20,
        &a5);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
}
