/*
 * XREFs of ??1?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@VCIAMSpecialWindowBase@@U?$InterfaceList@UIFallbackWindow@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIRawElementProviderSimple@@U?$InterfaceList@UIInvokeProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@MEAA@XZ @ 0x18002DAAC
 * Callers:
 *     ??_GCFallbackWindow@@UEAAPEAXI@Z @ 0x18002CE24 (--_GCFallbackWindow@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18002DE00 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCIAMSpecialWind.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<CIAMSpecialWindowBase,Microsoft::WRL::Details::InterfaceList<IFallbackWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IRawElementProviderSimple,Microsoft::WRL::Details::InterfaceList<IInvokeProvider,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<CIAMSpecialWindowBase,Microsoft::WRL::Details::InterfaceList<IFallbackWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IRawElementProviderSimple,Microsoft::WRL::Details::InterfaceList<IInvokeProvider,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>(
        __int64 a1)
{
  int result; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 92) = -1073741823;
  *(_QWORD *)(a1 + 16) = &CIAMSpecialWindowBase::`vftable';
  result = DestroyWindow(*(HWND *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
