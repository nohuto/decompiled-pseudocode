/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18002DE00
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@WBA@EAAPEAXI@Z @ 0x18002E0B0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCI_ea_18002E0B0.c)
 * Callees:
 *     ??1?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@VCIAMSpecialWindowBase@@U?$InterfaceList@UIFallbackWindow@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIRawElementProviderSimple@@U?$InterfaceList@UIInvokeProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@MEAA@XZ @ 0x18002DAAC (--1-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@VCIAMSpecialWindowBase@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<CIAMSpecialWindowBase,Microsoft::WRL::Details::InterfaceList<IFallbackWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IRawElementProviderSimple,Microsoft::WRL::Details::InterfaceList<IInvokeProvider,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<CIAMSpecialWindowBase,Microsoft::WRL::Details::InterfaceList<IFallbackWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IRawElementProviderSimple,Microsoft::WRL::Details::InterfaceList<IInvokeProvider,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
