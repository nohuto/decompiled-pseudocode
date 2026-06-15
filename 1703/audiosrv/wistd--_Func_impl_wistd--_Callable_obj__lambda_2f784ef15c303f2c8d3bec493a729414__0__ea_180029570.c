/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Delete_this @ 0x180029570
 * Callers:
 *     ?_Tidy@?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@IEAAXXZ @ 0x180028904 (-_Tidy@-$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@IEAAXXZ.c)
 * Callees:
 *     ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_2f784ef15c303f2c8d3bec493a729414_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@@details@2@_NPEAX_KPEAX_KIU_Nil@2@U52@@wistd@@UEAAPEAXI@Z @ 0x1800294E0 (--_G-$_Func_impl@U-$_Callable_obj@V_lambda_2f784ef15c303f2c8d3bec493a729414_@@$0A@@wistd@@V-$fun.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  _QWORD *(__fastcall *v3)(_QWORD *, char); // rax
  _QWORD *result; // rax

  v3 = *(_QWORD *(__fastcall **)(_QWORD *, char))(*a1 + 32LL);
  if ( v3 == wistd::_Func_impl<wistd::_Callable_obj<_lambda_2f784ef15c303f2c8d3bec493a729414_,0>,wistd::details::function_allocator<wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>>,bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`scalar deleting destructor' )
    result = wistd::_Func_impl<wistd::_Callable_obj<_lambda_2f784ef15c303f2c8d3bec493a729414_,0>,wistd::details::function_allocator<wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>>,bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`scalar deleting destructor'(
               a1,
               0);
  else
    result = v3(a1, 0);
  if ( a2 )
    __fastfail(7u);
  return result;
}
