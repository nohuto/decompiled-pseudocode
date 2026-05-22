/*
 * XREFs of ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@XU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x180042E40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12_,0>,wistd::details::function_allocator<wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::_Func_base<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
