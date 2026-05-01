/*
 * XREFs of _std::_Uninitialized_move_al_unchecked1_AgileRegistrationList::Item_____ptr64_AgileRegistrationList::Item_____ptr64_std::allocator_AgileRegistrationList::Item____::_1_::catch$4 @ 0x180198ED5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@PEAUItem@AgileRegistrationList@@@std@@YAXPEAUItem@AgileRegistrationList@@0AEAU?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@0@@Z @ 0x180025060 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@PEAUItem@AgileRegistrationList.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked1_AgileRegistrationList::Item_____ptr64_AgileRegistrationList::Item_____ptr64_std::allocator_AgileRegistrationList::Item____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<AgileRegistrationList::Item>,AgileRegistrationList::Item *>(
    *(_QWORD **)(a2 + 88),
    *(_QWORD **)(a2 + 80));
  throw;
}
