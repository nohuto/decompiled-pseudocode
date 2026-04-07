/*
 * XREFs of ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_83c7ca59d1c53b82e1b987045eea254d_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XAEBKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@@details@2@XAEBKU_Nil@2@U52@U52@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x1800187D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_83c7ca59d1c53b82e1b987045eea254d_,0>,wistd::details::function_allocator<wistd::_Func_class<void,unsigned long const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,unsigned long const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::_Func_base<void,unsigned long const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
