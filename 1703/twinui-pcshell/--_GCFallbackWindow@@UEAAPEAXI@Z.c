/*
 * XREFs of ??_GCFallbackWindow@@UEAAPEAXI@Z @ 0x18002CE24
 * Callers:
 *     ??_ECFallbackWindow@@WBA@EAAPEAXI@Z @ 0x18002E020 (--_ECFallbackWindow@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@VCIAMSpecialWindowBase@@U?$InterfaceList@UIFallbackWindow@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIRawElementProviderSimple@@U?$InterfaceList@UIInvokeProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@MEAA@XZ @ 0x18002DAAC (--1-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@VCIAMSpecialWindowBase@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CFallbackWindow *__fastcall CFallbackWindow::`scalar deleting destructor'(CFallbackWindow *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<CIAMSpecialWindowBase,Microsoft::WRL::Details::InterfaceList<IFallbackWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IRawElementProviderSimple,Microsoft::WRL::Details::InterfaceList<IInvokeProvider,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<CIAMSpecialWindowBase,Microsoft::WRL::Details::InterfaceList<IFallbackWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IRawElementProviderSimple,Microsoft::WRL::Details::InterfaceList<IInvokeProvider,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
