/*
 * XREFs of ?GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18020B57C
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x18020B7B0 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlAllUpViewHost::GetMonitorForHWND(
        XamlAllUpViewHost *this,
        HWND a2,
        struct IImmersiveMonitor **a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  struct IImmersiveMonitor *v8; // rbx
  struct IImmersiveMonitor *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 41);
  v6 = *((_QWORD *)this + 42);
  while ( 1 )
  {
    if ( v4 == v6 )
      return 2147647531LL;
    if ( (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 48LL) + 40LL))(*(_QWORD *)(*(_QWORD *)v4 + 48LL)) == a2 )
      break;
    v4 += 8LL;
  }
  v8 = *(struct IImmersiveMonitor **)(*(_QWORD *)v4 + 40LL);
  v9 = v8;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
  *a3 = v8;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
