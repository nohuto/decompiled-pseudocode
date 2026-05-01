/*
 * XREFs of ??1CImmersiveApp@@MEAA@XZ @ 0x18004D2F4
 * Callers:
 *     ??_GCImmersiveApp@@MEAAPEAXI@Z @ 0x18004D750 (--_GCImmersiveApp@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPresentationLayer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800166C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPres.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18001B260 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180090150 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18010A848 (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::~CImmersiveApp(CImmersiveApp *this)
{
  __int64 v2; // rcx
  volatile int *v3; // rdx
  char *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  unsigned __int64 v12; // rdi
  CSplashScreen *v13; // rcx
  void *v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned int (__fastcall *v17)(__int64, volatile int *); // rax
  __int64 v18; // rcx
  Microsoft::WRL::Details::WeakReferenceImpl *v19; // r10
  Microsoft::WRL::Details::WeakReferenceImpl *(__fastcall *v20)(Microsoft::WRL::Details::WeakReferenceImpl *, char); // rax
  void (__fastcall *v21)(struct Microsoft::WRL::Details::ModuleBase *); // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx

  *(_QWORD *)this = &CImmersiveApp::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>>'};
  *((_QWORD *)this + 5) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>>'};
  *((_QWORD *)this + 6) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>>'};
  *((_QWORD *)this + 11) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>>'};
  *((_QWORD *)this + 12) = &CImmersiveApp::`vftable'{for `IImmersiveApplication2'};
  *((_QWORD *)this + 13) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>'};
  *((_QWORD *)this + 14) = &CImmersiveApp::`vftable'{for `IImmersiveApplicationInternal'};
  *((_QWORD *)this + 15) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>'};
  *((_QWORD *)this + 16) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::Selector<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>>'};
  *((_QWORD *)this + 22) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLink>'};
  *((_QWORD *)this + 30) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>>,IServiceProvider>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>>'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 24) + 8LL) + 192) = &CImmersiveApp::`vftable'{for `ObjectWithClassName'};
  v2 = *(int *)(*((_QWORD *)this + 24) + 8LL);
  *(_DWORD *)((char *)this + v2 + 188) = v2 - 664;
  CoTaskMemFree(*((LPVOID *)this + 68));
  v4 = (char *)*((_QWORD *)this + 94);
  *((_QWORD *)this + 94) = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 92);
  if ( v5 )
  {
    *((_QWORD *)this + 92) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 91);
  if ( v6 )
  {
    *((_QWORD *)this + 91) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 87);
  if ( v7 )
  {
    *((_QWORD *)this + 87) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 85);
  if ( v8 )
  {
    *((_QWORD *)this + 85) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (void *)*((_QWORD *)this + 75);
  if ( v9 )
  {
    CoTaskMemFree(v9);
    *((_QWORD *)this + 75) = 0LL;
  }
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  v10 = (void *)*((_QWORD *)this + 70);
  if ( v10 )
  {
    CoTaskMemFree(v10);
    *((_QWORD *)this + 70) = 0LL;
  }
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  v11 = (void *)*((_QWORD *)this + 63);
  if ( v11 )
  {
    v12 = 0LL;
    if ( *((_QWORD *)this + 64) )
    {
      do
        IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(*((_QWORD *)this + 63) + 8 * v12++);
      while ( v12 < *((_QWORD *)this + 64) );
      v11 = (void *)*((_QWORD *)this + 63);
    }
    CoTaskMemFree(v11);
    *((_QWORD *)this + 63) = 0LL;
  }
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  v13 = (CSplashScreen *)*((_QWORD *)this + 62);
  if ( v13 )
  {
    *((_QWORD *)this + 62) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(v13);
  }
  v14 = (void *)*((_QWORD *)this + 52);
  if ( v14 )
  {
    v15 = 0LL;
    if ( *((_QWORD *)this + 53) )
    {
      do
        IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(*((_QWORD *)this + 52) + 8 * v15++);
      while ( v15 < *((_QWORD *)this + 53) );
      v14 = (void *)*((_QWORD *)this + 52);
    }
    CoTaskMemFree(v14);
    *((_QWORD *)this + 52) = 0LL;
  }
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  v16 = *((_QWORD *)this + 50);
  if ( v16 )
  {
    *((_QWORD *)this + 50) = 0LL;
    v17 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v16 + 16LL);
    if ( v17 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(
        v16,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release);
    else
      ((void (__fastcall *)(__int64))v17)(v16);
  }
  v18 = *((_QWORD *)this + 47);
  if ( v18 )
  {
    *((_QWORD *)this + 47) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( *((__int64 *)this + 32) < 0
    && !Microsoft::WRL::Details::SafeUnknownDecrementReference(
          (Microsoft::WRL::Details *)(2LL * *((_QWORD *)this + 32) + 12),
          v3) )
  {
    if ( v19 )
    {
      v20 = *(Microsoft::WRL::Details::WeakReferenceImpl *(__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, char))(*(_QWORD *)v19 + 32LL);
      if ( v20 == Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor' )
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v19, 1);
      else
        v20(v19, 1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v21 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                + 16LL);
      if ( (char *)v21 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
      else
        v21(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v22 = *((_QWORD *)this + 28);
  if ( v22 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = *((_QWORD *)this + 26);
  if ( v23 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = *((_QWORD *)this + 25);
  if ( v24 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = *((_QWORD *)this + 18);
  if ( v25 )
  {
    *((_QWORD *)this + 18) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v25);
  }
  *((_QWORD *)this + 6) = &CWRLObjectWithGITSite::`vftable';
  v26 = *((_DWORD *)this + 18);
  if ( v26 )
  {
    GlobalInterfaceTable::Revoke(v26);
    *((_DWORD *)this + 18) = 0;
  }
  v27 = *((_QWORD *)this + 10);
  if ( v27 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = *((_QWORD *)this + 4);
  if ( v28 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
}
