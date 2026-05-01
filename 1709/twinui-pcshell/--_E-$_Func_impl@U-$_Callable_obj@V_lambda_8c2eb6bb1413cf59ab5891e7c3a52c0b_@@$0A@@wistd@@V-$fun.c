/*
 * XREFs of ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_8c2eb6bb1413cf59ab5891e7c3a52c0b_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XAEBKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@@details@2@XAEBKU_Nil@2@U52@U52@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x1800CE0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_8c2eb6bb1413cf59ab5891e7c3a52c0b_,0>,wistd::details::function_allocator<wistd::_Func_class<void,unsigned long const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,unsigned long const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  *Block = off_180204AF0;
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
