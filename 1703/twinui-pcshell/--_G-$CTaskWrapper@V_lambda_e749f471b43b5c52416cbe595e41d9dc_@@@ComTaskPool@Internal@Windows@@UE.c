/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_e749f471b43b5c52416cbe595e41d9dc_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180111C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UIUAPViewWrapper@@U?$InterfaceList@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FC480 (-Release@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UIUAPViewWrapper@@U-.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e749f471b43b5c52416cbe595e41d9dc_>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  volatile signed __int64 *v4; // rcx

  v4 = (volatile signed __int64 *)Block[2];
  if ( v4 )
  {
    Block[2] = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<IUAPViewWrapper,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v4);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
