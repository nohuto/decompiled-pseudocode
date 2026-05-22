/*
 * XREFs of _std::vector_InputInfo_std::allocator_InputInfo___::emplace_back_InputInfo_const_&___ptr64__::_1_::catch$72 @ 0x1800CFA01
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UInputInfo@@@std@@@std@@QEAAXPEAUInputInfo@@_K@Z @ 0x180067658 (-deallocate@-$_Wrap_alloc@V-$allocator@UInputInfo@@@std@@@std@@QEAAXPEAUInputInfo@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_InputInfo_std::allocator_InputInfo___::emplace_back_InputInfo_const_____ptr64__::_1_::catch_72(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<InputInfo>>::deallocate(a1, *(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 96));
  throw;
}
