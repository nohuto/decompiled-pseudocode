/*
 * XREFs of ??$destroy@UItem@AgileRegistrationList@@@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@@Z @ 0x180025040
 * Callers:
 *     _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch$102 @ 0x180198EF9 (_std--vector_AgileRegistrationList--Item_std--allocator_AgileRegistrationList--Item___--emplace_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::destroy<AgileRegistrationList::Item>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
