/*
 * XREFs of _lambda_7d544a6ebe9fabad27cf83ed972508d6_::__lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x18020719C
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5683c41a0d5b3fdfd49831f290fa76db____::_1_::dtor$0 @ 0x1802027D8 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_5683c41a0d5b3fdfd49831f290fa76d.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::DismissAnimationCompleted__lambda_7d544a6ebe9fabad27cf83ed972508d6____::_1_::dtor$0 @ 0x1802029B0 (_WindowsInternal--ComposableShell--Experiences--Switcher--DismissAnimationCompleted--DismissAnim.c)
 *     _MonitorFrame::DismissAnimated_::_1_::dtor$7 @ 0x18020AA7F (_MonitorFrame--DismissAnimated_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall lambda_7d544a6ebe9fabad27cf83ed972508d6_::__lambda_7d544a6ebe9fabad27cf83ed972508d6_(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = __abi_winrt_ptr_dtor(a1[1]);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
