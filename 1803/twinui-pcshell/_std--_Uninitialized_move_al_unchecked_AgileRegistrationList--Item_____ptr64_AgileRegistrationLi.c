/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_AgileRegistrationList::Item_____ptr64_AgileRegistrationList::Item_____ptr64_std::allocator_AgileRegistrationList::Item____::_1_::catch$3 @ 0x180103672
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@0AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180103420 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_AgileRegistrationList::Item_____ptr64_AgileRegistrationList::Item_____ptr64_std::allocator_AgileRegistrationList::Item____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
