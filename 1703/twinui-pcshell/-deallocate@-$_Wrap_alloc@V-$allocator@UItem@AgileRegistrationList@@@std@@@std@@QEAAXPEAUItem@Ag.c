/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@_K@Z @ 0x180025114
 * Callers:
 *     _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch$102 @ 0x180198EF9 (_std--vector_AgileRegistrationList--Item_std--allocator_AgileRegistrationList--Item___--emplace_.c)
 *     _std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::emplace_back_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64____::_1_::catch$102 @ 0x18019BAFE (_std--vector_std--pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std--alloc.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch$108 @ 0x18019DE40 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_PeoplePaneViewIn.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 0x10uLL);
}
