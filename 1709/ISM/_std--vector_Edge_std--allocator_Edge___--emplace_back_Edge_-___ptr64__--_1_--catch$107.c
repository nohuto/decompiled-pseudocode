/*
 * XREFs of _std::vector_Edge_std::allocator_Edge___::emplace_back_Edge_&___ptr64__::_1_::catch$107 @ 0x1800CDDE6
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@VEdge@@@std@@@std@@QEAAXPEAVEdge@@_K@Z @ 0x18002AE28 (-deallocate@-$_Wrap_alloc@V-$allocator@VEdge@@@std@@@std@@QEAAXPEAVEdge@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Edge_std::allocator_Edge___::emplace_back_Edge_____ptr64__::_1_::catch_107(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<Edge>>::deallocate(a1, *(_QWORD **)(a2 + 128), *(_QWORD *)(a2 + 112));
  throw;
}
