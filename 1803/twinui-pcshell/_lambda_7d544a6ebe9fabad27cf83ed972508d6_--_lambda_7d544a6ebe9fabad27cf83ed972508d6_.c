/*
 * XREFs of _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x180205068
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5683c41a0d5b3fdfd49831f290fa76db___ @ 0x180202714 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_5683c41a0d5b3fdfd49831f290fa76db.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::DismissAnimationCompleted__lambda_7d544a6ebe9fabad27cf83ed972508d6___ @ 0x1802028EC (WindowsInternal--ComposableShell--Experiences--Switcher--DismissAnimationCompleted--DismissAnima.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_5683c41a0d5b3fdfd49831f290fa76db__void_::__abi_FunctorCapture__lambda_5683c41a0d5b3fdfd49831f290fa76db__void_ @ 0x180205AE4 (Platform--Details--__abi_FunctorCapture__lambda_5683c41a0d5b3fdfd49831f290fa76db__void_--__abi_F.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_ @ 0x180205B44 (Platform--Details--__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_--__abi_F.c)
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x18020A864 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  a1[1] = __abi_winrt_ptr_ctor(a2[1]);
  return a1;
}
