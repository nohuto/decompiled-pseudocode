/*
 * XREFs of ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x180032430
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180031EA4 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x18003253C (-GetControlMode@PerceptionSimulationSettings@@SA-AW4SimulationControlMode@@XZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180070238 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180070278 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected(void)
{
  char v0; // di
  __int64 v1; // rdx
  WCHAR *v2; // rax
  void *v3; // rdx
  unsigned int v4; // r8d
  const char *v5; // r9
  WCHAR *v6; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  DWORD v8; // eax
  unsigned int v9; // r8d
  CONFIGRET Device_Interface_List_SizeW; // eax
  DWORD v12; // eax
  unsigned int v13; // r8d
  ULONG ulFlags; // [rsp+20h] [rbp-38h]
  ULONG BufferLen; // [rsp+30h] [rbp-28h] BYREF
  GUID InterfaceClassGuid; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v0 = 0;
  InterfaceClassGuid = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  while ( 1 )
  {
    BufferLen = 0;
    Device_Interface_List_SizeW = CM_Get_Device_Interface_List_SizeW(&BufferLen, &InterfaceClassGuid, 0LL, 0);
    v12 = CM_MapCrToWin32Err(Device_Interface_List_SizeW, 0x507u);
    if ( v12 )
    {
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x8A, v13, (const char *)v12, ulFlags);
      __debugbreak();
    }
    v1 = 2LL * BufferLen;
    if ( !is_mul_ok(BufferLen, 2uLL) )
      v1 = -1LL;
    v2 = (WCHAR *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v1);
    v6 = v2;
    if ( !v2 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(retaddr, v3, v4, v5);
      JUMPOUT(0x180032539LL);
    }
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(&InterfaceClassGuid, 0LL, v2, BufferLen, 0);
    if ( Device_Interface_ListW != 26 )
    {
      v8 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
      if ( v8 )
      {
        wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x98, v9, (const char *)v8, ulFlags);
        JUMPOUT(0x18006265CLL);
      }
      v0 = 1;
      if ( *v6 )
        break;
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v6);
    if ( v0 )
      return (unsigned int)PerceptionSimulationSettings::GetControlMode() != 0;
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v6);
  return 1;
}
