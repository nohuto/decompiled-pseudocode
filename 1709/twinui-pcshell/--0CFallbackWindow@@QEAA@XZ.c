/*
 * XREFs of ??0CFallbackWindow@@QEAA@XZ @ 0x18002E624
 * Callers:
 *     ?CFallbackWindow_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F2DC (-CFallbackWindow_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CFallbackWindow *__fastcall CFallbackWindow::CFallbackWindow(CFallbackWindow *this)
{
  CFallbackWindow *result; // rax

  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithSite>'};
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 3) = &CIAMSpecialWindowBase::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = &Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *(_QWORD *)this = &CFallbackWindow::`vftable'{for `CWRLObjectWithSite'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>::`vftable'{for `IFallbackWindow'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>'};
  *((_QWORD *)this + 11) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>::`vftable'{for `IRawElementProviderSimple'};
  *((_QWORD *)this + 12) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInvokeProvider>'};
  *((_DWORD *)this + 27) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)this + 29) = 1;
  *(_QWORD *)this = &CFallbackWindow::`vftable'{for `CWRLObjectWithSite'};
  *((_QWORD *)this + 3) = &CFallbackWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>'};
  *((_QWORD *)this + 9) = &CFallbackWindow::`vftable'{for `IFallbackWindow'};
  *((_QWORD *)this + 10) = &CFallbackWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>'};
  *((_QWORD *)this + 11) = &CFallbackWindow::`vftable'{for `IRawElementProviderSimple'};
  *((_QWORD *)this + 12) = &CFallbackWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInvokeProvider>'};
  result = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
