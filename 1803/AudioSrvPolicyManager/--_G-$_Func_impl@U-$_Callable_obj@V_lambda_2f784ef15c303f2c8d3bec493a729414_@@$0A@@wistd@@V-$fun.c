/*
 * XREFs of ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_2f784ef15c303f2c8d3bec493a729414_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@@details@2@_NPEAX_KPEAX_KIU_Nil@2@U52@@wistd@@UEAAPEAXI@Z @ 0x180008160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_2f784ef15c303f2c8d3bec493a729414_,0>,wistd::details::function_allocator<wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>>,bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::_Func_base<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
