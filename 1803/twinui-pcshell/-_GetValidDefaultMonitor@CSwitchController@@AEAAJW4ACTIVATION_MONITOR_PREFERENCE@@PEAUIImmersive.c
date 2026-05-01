/*
 * XREFs of ?_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveMonitor@@PEAPEAU3@PEA_N@Z @ 0x1802B28E0
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1802B2740 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1802B2810 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1802B2810.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::_GetValidDefaultMonitor(__int64 a1, int a2, __int64 a3, __int64 *a4, _BYTE *a5)
{
  _BYTE *v8; // rsi
  unsigned int v9; // edi
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a1;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0;
  v9 = -2147019873;
  a5 = (_BYTE *)a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&a5);
  if ( a3 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 48LL))(a3, &v11) >= 0 )
    {
      if ( (_DWORD)v11 )
      {
        a5 = 0LL;
        *a4 = a3;
        v9 = 0;
        if ( a2 == 1 )
          *v8 = 1;
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&a5);
  return v9;
}
