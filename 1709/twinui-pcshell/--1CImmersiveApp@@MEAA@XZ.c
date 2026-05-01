/*
 * XREFs of ??1CImmersiveApp@@MEAA@XZ @ 0x180053454
 * Callers:
 *     ??_GCImmersiveApp@@MEAAPEAXI@Z @ 0x1800532E0 (--_GCImmersiveApp@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x180053314 (--1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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

  *(_QWORD *)this = &CImmersiveApp::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>'};
  *((_QWORD *)this + 6) = &CImmersiveApp::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 7) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>'};
  *((_QWORD *)this + 12) = &CImmersiveApp::`vftable'{for `IImmersiveApplication'};
  *((_QWORD *)this + 13) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>'};
  *((_QWORD *)this + 14) = &CImmersiveApp::`vftable'{for `IImmersiveApplicationInternal'};
  *((_QWORD *)this + 15) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>'};
  *((_QWORD *)this + 16) = &CImmersiveApp::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility'};
  *((_QWORD *)this + 22) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLink>'};
  *((_QWORD *)this + 30) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 24) + 8LL) + 192) = &CImmersiveApp::`vftable'{for `ObjectWithClassName'};
  v2 = *(int *)(*((_QWORD *)this + 24) + 8LL);
  *(_DWORD *)((char *)this + v2 + 188) = v2 - 656;
  CoTaskMemFree(*((LPVOID *)this + 68));
  v3 = (char *)*((_QWORD *)this + 94);
  *((_QWORD *)this + 94) = 0LL;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = *((_QWORD *)this + 92);
  if ( v4 )
  {
    *((_QWORD *)this + 92) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 91);
  if ( v5 )
  {
    *((_QWORD *)this + 91) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 87);
  if ( v6 )
  {
    *((_QWORD *)this + 87) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 85);
  if ( v7 )
  {
    *((_QWORD *)this + 85) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (void *)*((_QWORD *)this + 75);
  if ( v8 )
  {
    CoTaskMemFree(v8);
    *((_QWORD *)this + 75) = 0LL;
  }
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  v9 = (void *)*((_QWORD *)this + 70);
  if ( v9 )
  {
    CoTaskMemFree(v9);
    *((_QWORD *)this + 70) = 0LL;
  }
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  CImmersiveApp::CImmersiveWindowCollection::~CImmersiveWindowCollection((CImmersiveApp *)((char *)this + 264));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>(this);
}
