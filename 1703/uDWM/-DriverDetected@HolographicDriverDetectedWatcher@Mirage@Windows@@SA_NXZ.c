/*
 * XREFs of ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x180049564
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180049418 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180074A88 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180074AF8 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

char Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected(void)
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
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x75, v3, (const char *)v2, ulFlags);
      JUMPOUT(0x18006DA0CLL);
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
        wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x83, v12, (const char *)v11, ulFlags);
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
      return 0;
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v9);
  return 1;
}
