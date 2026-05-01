/*
 * XREFs of _lambda_d4c350abf5d24183546902bae9e0768c_::_lambda_d4c350abf5d24183546902bae9e0768c__0 @ 0x180205178
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18020994C (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802B3EEC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultit.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_d4c350abf5d24183546902bae9e0768c_::_lambda_d4c350abf5d24183546902bae9e0768c__0(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 *a4,
        _OWORD *a5,
        _OWORD *a6,
        __int64 *a7,
        __int64 *a8,
        _QWORD *a9,
        __int64 *a10,
        __int64 *a11)
{
  _QWORD *v12; // r10
  __int64 v14; // rcx

  v12 = a3;
  v14 = *a2;
  *(_QWORD *)a1 = *a2;
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::InternalAddRef(v14);
  *(_QWORD *)(a1 + 8) = *v12;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 8));
  *(_QWORD *)(a1 + 16) = __abi_winrt_ptr_ctor(*a4);
  *(_OWORD *)(a1 + 24) = *a5;
  *(_OWORD *)(a1 + 40) = *a6;
  *(_QWORD *)(a1 + 56) = __abi_winrt_ptr_ctor(*a7);
  *(_QWORD *)(a1 + 64) = __abi_winrt_ptr_ctor(*a8);
  *(_QWORD *)(a1 + 72) = *a9;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 72));
  *(_QWORD *)(a1 + 80) = __abi_winrt_ptr_ctor(*a10);
  *(_QWORD *)(a1 + 88) = __abi_winrt_ptr_ctor(*a11);
  return a1;
}
