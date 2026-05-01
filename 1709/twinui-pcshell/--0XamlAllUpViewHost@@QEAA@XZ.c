/*
 * XREFs of ??0XamlAllUpViewHost@@QEAA@XZ @ 0x180157D08
 * Callers:
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18015FA3C (--$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

XamlAllUpViewHost *__fastcall XamlAllUpViewHost::XamlAllUpViewHost(XamlAllUpViewHost *this)
{
  char *v2; // rcx
  _QWORD *v3; // rdi
  XamlAllUpViewHost *result; // rax

  *((_DWORD *)this + 16) = -2;
  v2 = (char *)this + 24;
  *((_DWORD *)v2 + 11) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)v2);
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &CMultitaskingViewHostBase<IAllUpViewHost>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  v3 = (_QWORD *)((char *)this + 136);
  *((_QWORD *)this + 1) = &CMultitaskingViewHostBase<IAllUpViewHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = (char *)this + 8;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 15) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener>::`vftable';
  *((_QWORD *)this + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener>::`vftable'{for `IAllUpViewHostInternal'};
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 17) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChangeListener>'};
  *((_DWORD *)this + 37) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &XamlAllUpViewHost::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 1) = &XamlAllUpViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 15) = &XamlAllUpViewHost::`vftable';
  *((_QWORD *)this + 16) = &XamlAllUpViewHost::`vftable'{for `IAllUpViewHostInternal'};
  *v3 = &XamlAllUpViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChangeListener>'};
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 32) = v3;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 44) = (char *)this + 408;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = (char *)this + 312;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 45) = (char *)this + 368;
  *((_DWORD *)this + 92) = 0;
  *((_BYTE *)this + 372) = 0;
  *((_BYTE *)this + 432) = 0;
  *((_DWORD *)this + 102) = 0;
  *((_QWORD *)this + 52) = "ShowXamlTaskView";
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 55) = 1LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  memset((char *)this + 448, 0, 0x90uLL);
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 39) = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  result = this;
  *((_DWORD *)this + 156) = 0;
  *((_DWORD *)this + 18) = 2;
  return result;
}
