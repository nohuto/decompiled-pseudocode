/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_25b1f1d8f440e7dcc4a4f15c551c995c__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x1802C3200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$_Func_base@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@QEAA@XZ @ 0x18013A1B8 (--0-$_Func_base@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@QEAA@XZ.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_25b1f1d8f440e7dcc4a4f15c551c995c__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  if ( !a2 )
    __fastfail(7u);
  wistd::_Func_base<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Func_base<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>(a2);
  *v4 = off_180322960;
  v4[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v4 + 1);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
