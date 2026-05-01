/*
 * XREFs of ??1?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@U?$InterfaceList@UIXamlViewHost@@U?$InterfaceList@UIAllUpViewHostInternal@@U?$InterfaceList@UITabletModeChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@MEAA@XZ @ 0x18012F2C8
 * Callers:
 *     ??_GXamlAllUpViewHost@@UEAAPEAXI@Z @ 0x18012CC90 (--_GXamlAllUpViewHost@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@VNil@Details@23@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAA@XZ @ 0x18012CE48 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpVi.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@VNil@Details@23@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180130050 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpV.c)
 * Callees:
 *     ??1MonitorEventListener@@QEAA@XZ @ 0x180130084 (--1MonitorEventListener@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAllUpViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::InterfaceList<IAllUpViewHostInternal,Microsoft::WRL::Details::InterfaceList<ITabletModeChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAllUpViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::InterfaceList<IAllUpViewHostInternal,Microsoft::WRL::Details::InterfaceList<ITabletModeChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_DWORD *)(a1 + 140) = -1073741823;
  MonitorEventListener::~MonitorEventListener((MonitorEventListener *)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
