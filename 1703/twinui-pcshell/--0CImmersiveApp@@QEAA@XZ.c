/*
 * XREFs of ??0CImmersiveApp@@QEAA@XZ @ 0x1800509B0
 * Callers:
 *     ?CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x180059B2C (-CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitAppViewData@ImmersiveApplicationLayout@@YAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18017F518 (-InitAppViewData@ImmersiveApplicationLayout@@YAXPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CImmersiveApp *__fastcall CImmersiveApp::CImmersiveApp(CImmersiveApp *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  struct APPLICATION_VIEW_DATA *v4; // rdx
  struct APPLICATION_VIEW_DATA *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx

  *((_QWORD *)this + 19) = &CImmersiveApp::`vbtable';
  *((_QWORD *)this + 101) = &ObjectWithClassName::`vftable';
  v2 = (RTL_SRWLOCK *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((CImmersiveApp *)((char *)this + 8));
  v2[4].Ptr = &CWRLObjectWithGITSite::`vftable';
  LODWORD(v2[6].Ptr) = 0;
  v2[7].Ptr = 0LL;
  InitializeSRWLock(v2 + 5);
  v2[12].Ptr = &Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::`vftable';
  v2[13].Ptr = 0LL;
  InitializeSRWLock(v2 + 14);
  InitializeSRWLock(v2 + 15);
  LODWORD(v2[16].Ptr) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  v2[17].Ptr = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLink,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(PVOID *)((char *)&v2[18].Ptr + *((int *)v2[18].Ptr + 2)) = &ObjectWithClassName::`vftable';
  v2[19].Ptr = 0LL;
  v2[20].Ptr = 0LL;
  LODWORD(v2[21].Ptr) = 0;
  v2[22].Ptr = 0LL;
  LOWORD(v2[23].Ptr) = 0;
  *((_QWORD *)this + 27) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `IInspectable'};
  v2->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveApplication,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>>>>>,1,1>'};
  *((_QWORD *)this + 4) = &CImmersiveApp::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 5) = &CImmersiveApp::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveApplication,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>>>,1,1>'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `IImmersiveApplication'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>,1,0>'};
  *((_QWORD *)this + 11) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `IImmersiveApplicationInternal'};
  *((_QWORD *)this + 12) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>,1,0>'};
  *((_QWORD *)this + 13) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility'};
  *((_QWORD *)this + 18) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLink,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 25) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>,1,1>'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 19) + 8LL) + 152) = &ObjectWithClassName::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CImmersiveApp::`vftable'{for `IInspectable'};
  v2->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveApplication,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>>>>>,1,1>'};
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
  v3 = *(int *)(*((_QWORD *)this + 19) + 8LL);
  *(_DWORD *)((char *)this + v3 + 148) = v3 - 656;
  SetRectEmpty((LPRECT)this + 15);
  *((_DWORD *)this + 60) = 1;
  CopyRect((LPRECT)this + 14, (const RECT *)this + 15);
  ImmersiveApplicationLayout::InitAppViewData((CImmersiveApp *)((char *)this + 256), v4);
  *((_DWORD *)this + 64) = -1;
  ImmersiveApplicationLayout::InitAppViewData((CImmersiveApp *)((char *)this + 292), v5);
  *((_DWORD *)this + 73) = -1;
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = this;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_WORD *)this + 204) = 0;
  *(_QWORD *)((char *)this + 412) = 0LL;
  *((_DWORD *)this + 105) = 0;
  v6 = (_QWORD *)((char *)this + 424);
  v7 = 0LL;
  if ( (char *)this + 424 <= (char *)this + 456 )
  {
    do
    {
      *v6++ = 0LL;
      ++v7;
    }
    while ( v7 != ((char *)this + 456 >= (char *)this + 424 ? 4 : 0) );
  }
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 124) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_BYTE *)this + 516) = 0;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 136) = 1;
  *((_QWORD *)this + 69) = L"ApplicationViewCloakType";
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_DWORD *)this + 146) = 0;
  *((_QWORD *)this + 80) = 0LL;
  *((_BYTE *)this + 648) = 0;
  *((_QWORD *)this + 82) = 0LL;
  *((_DWORD *)this + 166) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *(_QWORD *)((char *)this + 668) = 0LL;
  *((_WORD *)this + 338) = 0;
  *((_DWORD *)this + 170) = 0;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_BYTE *)this + 704) = 0;
  *((_DWORD *)this + 177) = 1;
  *((_QWORD *)this + 89) = 0LL;
  *((_BYTE *)this + 720) = 0;
  *((_DWORD *)this + 182) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_DWORD *)this + 183) = -1;
  *((_DWORD *)this + 184) = -1;
  *((_DWORD *)this + 185) = -1;
  *((_DWORD *)this + 186) = -1;
  *((_DWORD *)this + 187) = -1;
  *((_DWORD *)this + 188) = -1;
  *((_DWORD *)this + 189) = -1;
  *((_DWORD *)this + 190) = -1;
  *((_DWORD *)this + 191) = -1;
  *((_DWORD *)this + 192) = -1;
  *((_DWORD *)this + 193) = -1;
  *((_DWORD *)this + 194) = -1;
  *((_DWORD *)this + 195) = -1;
  *((_DWORD *)this + 196) = -1;
  *((_DWORD *)this + 197) = -1;
  *((_DWORD *)this + 198) = -1;
  *(_QWORD *)((char *)this + 604) = 0LL;
  *(_QWORD *)((char *)this + 596) = 0LL;
  *(_QWORD *)((char *)this + 588) = 0LL;
  *(_QWORD *)((char *)this + 628) = 0LL;
  *(_QWORD *)((char *)this + 612) = 0LL;
  *(_QWORD *)((char *)this + 620) = 0LL;
  return this;
}
