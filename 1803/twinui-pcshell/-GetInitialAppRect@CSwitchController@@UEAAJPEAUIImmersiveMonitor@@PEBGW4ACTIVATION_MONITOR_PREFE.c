/*
 * XREFs of ?GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFERENCE@@PEAUtagRECT@@@Z @ 0x1802B1DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1802B2810 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1802B2810.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::GetInitialAppRect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        LPRECT lprc)
{
  int MonitorForAppSwitchWithPreference; // ebx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  SetRectEmpty(lprc);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
  MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                        a1 - 88,
                                        a2,
                                        a4,
                                        a3,
                                        &v11);
  if ( MonitorForAppSwitchWithPreference >= 0 )
    MonitorForAppSwitchWithPreference = (*(__int64 (__fastcall **)(__int64, LPRECT))(*(_QWORD *)v11 + 88LL))(v11, lprc);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
