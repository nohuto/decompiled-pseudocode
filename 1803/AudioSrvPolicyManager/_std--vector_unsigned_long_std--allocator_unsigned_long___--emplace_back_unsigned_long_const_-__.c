/*
 * XREFs of _std::vector_unsigned_long_std::allocator_unsigned_long___::emplace_back_unsigned_long_const_&___ptr64__::_1_::catch$100 @ 0x180038054
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@K@std@@QEAAXQEAK_K@Z @ 0x18001964C (-deallocate@-$allocator@K@std@@QEAAXQEAK_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800362A1 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_long_std::allocator_unsigned_long___::emplace_back_unsigned_long_const_____ptr64__::_1_::catch_100(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::allocator<unsigned long>::deallocate(a1, *(void **)(a2 + 112), *(_QWORD *)(a2 + 96), a4);
  throw;
}
