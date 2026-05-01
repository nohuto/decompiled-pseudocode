/*
 * XREFs of _std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::emplace_back_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64____::_1_::catch$107 @ 0x1801EA53A
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@_K@Z @ 0x180025980 (-deallocate@-$_Wrap_alloc@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@Ag.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::emplace_back_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64____::_1_::catch_107(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(
    a1,
    *(_QWORD **)(a2 + 128),
    *(_QWORD *)(a2 + 112));
  throw;
}
