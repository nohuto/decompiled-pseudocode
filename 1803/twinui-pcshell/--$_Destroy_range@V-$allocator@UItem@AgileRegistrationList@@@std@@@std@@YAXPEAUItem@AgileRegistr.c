/*
 * XREFs of ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@0AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180103420
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_AgileRegistrationList::Item_____ptr64_AgileRegistrationList::Item_____ptr64_std::allocator_AgileRegistrationList::Item____::_1_::catch$3 @ 0x180103672 (_std--_Uninitialized_move_al_unchecked_AgileRegistrationList--Item_____ptr64_AgileRegistrationLi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
