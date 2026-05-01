/*
 * XREFs of ?WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18022A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800F5AE0 (-GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::WorkAreaMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  int Monitor; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IImmersiveMonitor *v10; // [rsp+40h] [rbp+8h] BYREF
  HMONITOR v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 27);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 120LL))(*((_QWORD *)this + 27)) )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
    Monitor = ImmersiveMonitorHelper::GetMonitor(*((ImmersiveMonitorHelper **)this + 12), &v10);
    v7 = Monitor;
    if ( Monitor < 0 )
    {
      v8 = 266LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)Monitor);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
      return v7;
    }
    Monitor = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, HMONITOR *))(*(_QWORD *)v10 + 40LL))(v10, &v11);
    v7 = Monitor;
    if ( Monitor < 0 )
    {
      v8 = 268LL;
      goto LABEL_12;
    }
    if ( a2 == v11 )
    {
      Monitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 104LL))(*((_QWORD *)this + 9));
      v7 = Monitor;
      if ( Monitor < 0 )
      {
        v8 = 271LL;
        goto LABEL_12;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
  }
  return 0LL;
}
