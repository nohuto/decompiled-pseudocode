/*
 * XREFs of ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@PEAUItem@AgileRegistrationList@@@std@@YAXPEAUItem@AgileRegistrationList@@0AEAU?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@0@@Z @ 0x18002593C
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_AgileRegistrationList::Item_____ptr64_AgileRegistrationList::Item_____ptr64_std::allocator_AgileRegistrationList::Item____::_1_::catch$4 @ 0x1801E76F2 (_std--_Uninitialized_move_al_unchecked_AgileRegistrationList--Item_____ptr64_AgileRegistrationLi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Destroy_range<std::allocator<AgileRegistrationList::Item>,AgileRegistrationList::Item *>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      if ( *v3 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      v3 += 2;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
