/*
 * XREFs of ??0ApplicationViewBackedViewHostItem@@QEAA@XZ @ 0x1800E00C4
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800D9E64 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

ApplicationViewBackedViewHostItem *__fastcall ApplicationViewBackedViewHostItem::ApplicationViewBackedViewHostItem(
        ApplicationViewBackedViewHostItem *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 32);
  Microsoft::WRL::FtmBase::FtmBase((ApplicationViewBackedViewHostItem *)((char *)this + 32));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IImmersiveApplicationPresentationListener,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IImmersiveApplicationPresentationListener,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IImmersiveApplicationPresentationListener,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationPresentationListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IImmersiveApplicationPresentationListener,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IImmersiveApplicationPresentationListener'};
  *v1 = &ApplicationViewBackedViewHostItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ApplicationViewBackedViewHostItem::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IImmersiveApplicationPresentationListener,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &ApplicationViewBackedViewHostItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationPresentationListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 3) = &ApplicationViewBackedViewHostItem::`vftable'{for `IImmersiveApplicationPresentationListener'};
  *v1 = &ApplicationViewBackedViewHostItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 108) = 0;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 18);
  InitializeSRWLock((PSRWLOCK)this + 19);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 26) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 27);
  InitializeSRWLock((PSRWLOCK)this + 28);
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = (char *)this + 264;
  *((_QWORD *)this + 35) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 36);
  InitializeSRWLock((PSRWLOCK)this + 37);
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 44) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 45);
  InitializeSRWLock((PSRWLOCK)this + 46);
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = (char *)this + 408;
  *((_QWORD *)this + 53) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 54);
  InitializeSRWLock((PSRWLOCK)this + 55);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = (char *)this + 480;
  return this;
}
