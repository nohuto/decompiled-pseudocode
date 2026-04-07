/*
 * XREFs of ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18003F3B0
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18003F038 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x18003F4E4 (-GetControlMode@PerceptionSimulationSettings@@SA-AW4SimulationControlMode@@XZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800695EC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18006962C (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected(void)
{
  char v0; // di
  CONFIGRET Device_Interface_List_SizeW; // eax
  DWORD v2; // eax
  unsigned int v3; // r8d
  __int64 v4; // rdx
  WCHAR *v5; // rax
  void *v6; // rdx
  unsigned int v7; // r8d
  const char *v8; // r9
  WCHAR *v9; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  DWORD v11; // eax
  unsigned int v12; // r8d
  ULONG ulFlags; // [rsp+20h] [rbp-38h]
  ULONG pulLen; // [rsp+30h] [rbp-28h] BYREF
  GUID InterfaceClassGuid; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v0 = 0;
  InterfaceClassGuid = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  while ( 1 )
  {
    pulLen = 0;
    Device_Interface_List_SizeW = CM_Get_Device_Interface_List_SizeW(&pulLen, &InterfaceClassGuid, 0LL, 0);
    v2 = CM_MapCrToWin32Err(Device_Interface_List_SizeW, 0x507u);
    if ( v2 )
    {
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x8A, v3, (const char *)v2, ulFlags);
      JUMPOUT(0x1800612A8LL);
    }
    v4 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v4 = -1LL;
    v5 = (WCHAR *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v4);
    v9 = v5;
    if ( !v5 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(retaddr, v6, v7, v8);
      __debugbreak();
    }
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(&InterfaceClassGuid, 0LL, v5, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
    {
      v11 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
      if ( v11 )
      {
        wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x98, v12, (const char *)v11, ulFlags);
        __debugbreak();
      }
      v0 = 1;
      if ( *v9 )
        break;
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v9);
    if ( v0 )
      return (unsigned int)PerceptionSimulationSettings::GetControlMode() != 0;
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v9);
  return 1;
}
