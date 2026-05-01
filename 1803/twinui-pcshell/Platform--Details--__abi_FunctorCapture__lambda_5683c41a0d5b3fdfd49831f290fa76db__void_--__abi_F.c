/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_5683c41a0d5b3fdfd49831f290fa76db__void_::__abi_FunctorCapture__lambda_5683c41a0d5b3fdfd49831f290fa76db__void_ @ 0x180205AE4
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5683c41a0d5b3fdfd49831f290fa76db___ @ 0x180202714 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_5683c41a0d5b3fdfd49831f290fa76db.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x180205068 (_lambda_7d544a6ebe9fabad27cf83ed972508d6_--_lambda_7d544a6ebe9fabad27cf83ed972508d6_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_5683c41a0d5b3fdfd49831f290fa76db__void_::__abi_FunctorCapture__lambda_5683c41a0d5b3fdfd49831f290fa76db__void_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  *a1 = &off_1804321A0;
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
