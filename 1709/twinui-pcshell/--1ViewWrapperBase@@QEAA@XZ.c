/*
 * XREFs of ??1ViewWrapperBase@@QEAA@XZ @ 0x18012897C
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801275EC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPV.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18012796C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILega.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801283F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatc.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::~ViewWrapperBase(ViewWrapperBase *this, __int64 a2)
{
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  HSTRING v10; // rcx
  HSTRING v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 i; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx

  v3 = (volatile signed __int32 *)*((_QWORD *)this + 60);
  if ( v3 )
  {
    *((_QWORD *)this + 60) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v4 = *((_QWORD *)this + 59);
  if ( v4 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 58);
  if ( v5 )
  {
    *((_QWORD *)this + 58) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 56);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != (_QWORD)this + 392;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, a2);
    *((_QWORD *)this + 56) = 0LL;
  }
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 39);
  if ( v7 )
  {
    *((_QWORD *)this + 39) = 0LL;
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 22);
  if ( v9 )
  {
    *((_QWORD *)this + 22) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::Release(v9);
  }
  v10 = (HSTRING)*((_QWORD *)this + 21);
  if ( v10 )
    WindowsDeleteString(v10);
  v11 = (HSTRING)*((_QWORD *)this + 20);
  if ( v11 )
    WindowsDeleteString(v11);
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( *((_QWORD *)this + 14) )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 15); ++i )
    {
      v14 = *((_QWORD *)this + 14);
      v15 = *(_QWORD *)(v14 + 8 * i);
      if ( v15 )
      {
        *(_QWORD *)(v14 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v16 = *((_QWORD *)this + 11);
  if ( v16 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
}
