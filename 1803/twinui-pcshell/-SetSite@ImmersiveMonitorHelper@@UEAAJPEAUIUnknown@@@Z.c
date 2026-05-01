/*
 * XREFs of ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x18022B3E0
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180229EA0 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18022A580 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImmersiveMonitorHelper::SetSite(ImmersiveMonitorHelper *this, struct IUnknown *a2)
{
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  if ( !a2 )
  {
    if ( *((_DWORD *)this + 22) )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             (const GUID *const)&SID_IImmersiveMonitorService,
             &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 32LL))(ppvOut, *((unsigned int *)this + 22));
      *((_DWORD *)this + 22) = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( *((_DWORD *)this + 23) )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &IID_IActiveZBandNotificationForMonitorService,
             &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 32LL))(ppvOut, *((unsigned int *)this + 23));
      *((_DWORD *)this + 23) = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((CWinRTApplicationView **)this + 2, (CWinRTApplicationView *)a2);
  return 0LL;
}
