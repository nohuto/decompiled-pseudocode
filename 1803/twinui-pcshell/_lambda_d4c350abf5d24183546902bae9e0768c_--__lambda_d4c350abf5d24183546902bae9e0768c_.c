/*
 * XREFs of _lambda_d4c350abf5d24183546902bae9e0768c_::__lambda_d4c350abf5d24183546902bae9e0768c_ @ 0x1802071D8
 * Callers:
 *     ??_E?$XamlExplorerHostWindowCreatedCallback@V_lambda_d4c350abf5d24183546902bae9e0768c_@@@@UEAAPEAXI@Z @ 0x1802088D0 (--_E-$XamlExplorerHostWindowCreatedCallback@V_lambda_d4c350abf5d24183546902bae9e0768c_@@@@UEAAPE.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18020994C (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$12 @ 0x180209FAA (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$12.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18020E4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObs_ea_18020E4C0.c)
 */

__int64 __fastcall lambda_d4c350abf5d24183546902bae9e0768c_::__lambda_d4c350abf5d24183546902bae9e0768c_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  __abi_winrt_ptr_dtor(a1[11]);
  __abi_winrt_ptr_dtor(a1[10]);
  v2 = a1[9];
  if ( v2 )
  {
    a1[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  __abi_winrt_ptr_dtor(a1[8]);
  __abi_winrt_ptr_dtor(a1[7]);
  __abi_winrt_ptr_dtor(a1[2]);
  result = Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 1);
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(v4);
  }
  return result;
}
