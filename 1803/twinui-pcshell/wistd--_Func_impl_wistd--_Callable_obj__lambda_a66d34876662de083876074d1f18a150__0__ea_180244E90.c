/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_a66d34876662de083876074d1f18a150__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x180244E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_a66d34876662de083876074d1f18a150__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  if ( !a2 )
    __fastfail(7u);
  *a2 = off_1803213E8;
  a2[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2 + 1);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
