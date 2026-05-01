/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_ @ 0x180205B44
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::DismissAnimationCompleted__lambda_7d544a6ebe9fabad27cf83ed972508d6___ @ 0x1802028EC (WindowsInternal--ComposableShell--Experiences--Switcher--DismissAnimationCompleted--DismissAnima.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x180205068 (_lambda_7d544a6ebe9fabad27cf83ed972508d6_--_lambda_7d544a6ebe9fabad27cf83ed972508d6_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  *a1 = &off_180432190;
  lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(a1 + 1, a2);
  __abi_winrt_ptr_dtor(a2[1]);
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
