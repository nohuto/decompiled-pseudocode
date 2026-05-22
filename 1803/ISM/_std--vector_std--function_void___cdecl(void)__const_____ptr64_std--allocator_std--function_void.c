/*
 * XREFs of _std::vector_std::function_void___cdecl(void)__const_____ptr64_std::allocator_std::function_void___cdecl(void)__const_____ptr64___::emplace_back_std::function_void___cdecl(void)__const_____ptr64_const_&___ptr64__::_1_::catch$99 @ 0x1800E9CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x18000A3B4 (-deallocate@-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_void___const_____ptr64_std::allocator_std::function_void___cdecl_void___const_____ptr64___::emplace_back_std::function_void___cdecl_void___const_____ptr64_const_____ptr64__::_1_::catch_99(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
    a1,
    *(_QWORD *)(a2 + 96),
    *(_QWORD *)(a2 + 112));
  throw;
}
