/*
 * XREFs of ??$destroy@UItem@AgileRegistrationList@@@?$_Default_allocator_traits@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@SAXAEAV?$allocator@UItem@AgileRegistrationList@@@1@QEAUItem@AgileRegistrationList@@@Z @ 0x180103708
 * Callers:
 *     _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch$67 @ 0x1800B6406 (_std--vector_AgileRegistrationList--Item_std--allocator_AgileRegistrationList--Item___--emplace_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<AgileRegistrationList::Item>>::destroy<AgileRegistrationList::Item>(
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
