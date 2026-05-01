/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@Details@WRL@Microsoft@@MEAA@XZ @ 0x18016DD6C
 * Callers:
 *     ??_EXamlAltTabViewHost@@UEAAPEAXI@Z @ 0x18016CD40 (--_EXamlAltTabViewHost@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18016E1C0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UISnapAs.c)
 *     ??_GXamlSnapAssistViewHost@@UEAAPEAXI@Z @ 0x18016E8A0 (--_GXamlSnapAssistViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1MonitorEventListener@@QEAA@XZ @ 0x18015D934 (--1MonitorEventListener@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlViewHost>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlViewHost>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_DWORD *)(a1 + 132) = -1073741823;
  MonitorEventListener::~MonitorEventListener((MonitorEventListener *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
