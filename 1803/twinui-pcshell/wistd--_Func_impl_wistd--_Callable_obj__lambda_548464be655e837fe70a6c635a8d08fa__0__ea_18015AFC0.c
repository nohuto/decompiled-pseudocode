/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::__Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_ @ 0x18015AFC0
 * Callers:
 *     ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JI_K_JU_Nil@wistd@@U12@U12@U12@@wistd@@@details@2@JI_K_JU_Nil@2@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x18015B400 (--_E-$_Func_impl@U-$_Callable_obj@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$0A@@wistd@@V-$fun.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::__Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_(
        _QWORD *a1)
{
  __int64 v2; // rcx
  void (*v3)(void); // rax
  void **result; // rax

  *a1 = off_18031FCF0;
  v2 = a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v2,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      v3();
  }
  result = &wistd::_Func_base<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  *a1 = &wistd::_Func_base<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  return result;
}
