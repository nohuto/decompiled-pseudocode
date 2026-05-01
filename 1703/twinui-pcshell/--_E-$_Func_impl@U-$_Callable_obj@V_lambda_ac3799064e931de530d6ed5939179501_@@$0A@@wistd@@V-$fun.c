/*
 * XREFs of ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_ac3799064e931de530d6ed5939179501_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@@details@2@JKU_Nil@2@U52@U52@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x18015EC50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_ac3799064e931de530d6ed5939179501_,0>,wistd::details::function_allocator<wistd::_Func_class<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  *Block = off_1801B97C8;
  v4 = Block[1];
  if ( v4 )
  {
    Block[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *Block = &wistd::_Func_base<long,unsigned int,unsigned __int64,__int64,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
