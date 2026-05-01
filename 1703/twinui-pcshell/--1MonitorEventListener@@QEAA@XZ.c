/*
 * XREFs of ??1MonitorEventListener@@QEAA@XZ @ 0x180130084
 * Callers:
 *     ??1?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@U?$InterfaceList@UIXamlViewHost@@U?$InterfaceList@UIAllUpViewHostInternal@@U?$InterfaceList@UITabletModeChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@MEAA@XZ @ 0x18012F2C8 (--1-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@U-$InterfaceL.c)
 *     ??_EXamlAltTabViewHost@@UEAAPEAXI@Z @ 0x18013EBD0 (--_EXamlAltTabViewHost@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlViewHost@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18013FD50 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAltTab.c)
 *     ??_GXamlSnapAssistViewHost@@UEAAPEAXI@Z @ 0x1801404D0 (--_GXamlSnapAssistViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MonitorEventListener::~MonitorEventListener(MonitorEventListener *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
    {
      *((_QWORD *)this + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
