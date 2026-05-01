/*
 * XREFs of ??1CImmersiveApp@@MEAA@XZ @ 0x18005103C
 * Callers:
 *     ??_GCImmersiveApp@@MEAAPEAXI@Z @ 0x180050E80 (--_GCImmersiveApp@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x180050EFC (--1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@UIImmersiveApplication@@U?$InterfaceList@UIImmersiveApplicationHolographic@@U?$InterfaceList@UIImmersiveApplicationInternal@@U?$InterfaceList@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@U?$InterfaceList@UIServiceProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@QEAA@XZ @ 0x18005AA18 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@VCWRLObjectWithGI.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::~CImmersiveApp(CImmersiveApp *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)this = &CImmersiveApp::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveApplication,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>>>>>,1,1>'};
  *((_QWORD *)this + 4) = &CImmersiveApp::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 5) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveApplication,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>>>,1,1>'};
  *((_QWORD *)this + 9) = &CImmersiveApp::`vftable'{for `IImmersiveApplication'};
  *((_QWORD *)this + 10) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>,1,0>'};
  *((_QWORD *)this + 11) = &CImmersiveApp::`vftable'{for `IImmersiveApplicationInternal'};
  *((_QWORD *)this + 12) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>,1,0>'};
  *((_QWORD *)this + 13) = &CImmersiveApp::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility'};
  *((_QWORD *)this + 18) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLink,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 25) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>,1,1>'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 19) + 8LL) + 152) = &CImmersiveApp::`vftable'{for `ObjectWithClassName'};
  v2 = *(int *)(*((_QWORD *)this + 19) + 8LL);
  *(_DWORD *)((char *)this + v2 + 148) = v2 - 656;
  CoTaskMemFree(*((LPVOID *)this + 63));
  v3 = (char *)*((_QWORD *)this + 89);
  *((_QWORD *)this + 89) = 0LL;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = *((_QWORD *)this + 87);
  if ( v4 )
  {
    *((_QWORD *)this + 87) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 86);
  if ( v5 )
  {
    *((_QWORD *)this + 86) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 82);
  if ( v6 )
  {
    *((_QWORD *)this + 82) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 80);
  if ( v7 )
  {
    *((_QWORD *)this + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (void *)*((_QWORD *)this + 70);
  if ( v8 )
  {
    CoTaskMemFree(v8);
    *((_QWORD *)this + 70) = 0LL;
  }
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  v9 = (void *)*((_QWORD *)this + 65);
  if ( v9 )
  {
    CoTaskMemFree(v9);
    *((_QWORD *)this + 65) = 0LL;
  }
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  CImmersiveApp::CImmersiveWindowCollection::~CImmersiveWindowCollection((CImmersiveApp *)((char *)this + 224));
  v10 = *((_QWORD *)this + 27);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v10));
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveApplication,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>>>,1,1>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveApplication,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>>>,1,1>((CImmersiveApp *)((char *)this + 40));
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
