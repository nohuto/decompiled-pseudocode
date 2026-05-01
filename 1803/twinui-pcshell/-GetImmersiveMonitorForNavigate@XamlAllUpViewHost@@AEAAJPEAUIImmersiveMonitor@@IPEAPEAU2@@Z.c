/*
 * XREFs of ?GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAPEAU2@@Z @ 0x18020B3BC
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x18020B7B0 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::GetImmersiveMonitorForNavigate(
        XamlAllUpViewHost *this,
        struct IImmersiveMonitor *a2,
        int a3,
        struct IImmersiveMonitor **a4)
{
  struct IImmersiveMonitor **v8; // rbx
  __int64 v9; // rbx
  struct IImmersiveMonitor *v11; // [rsp+60h] [rbp+8h] BYREF

  v8 = (struct IImmersiveMonitor **)((char *)this + 240);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 30);
  *a4 = *v8;
  v9 = *((_QWORD *)this + 29);
  if ( v9 && (unsigned __int64)((__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 3) > 1 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v11);
    if ( (*(int (__fastcall **)(__int64, bool, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v9 + 104LL))(
           v9,
           a3 == 5,
           a2,
           &v11) >= 0 )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
      *a4 = v11;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v11);
  }
  return 0LL;
}
