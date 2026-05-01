/*
 * XREFs of _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch$67 @ 0x1800B6406
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$destroy@UItem@AgileRegistrationList@@@?$_Default_allocator_traits@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@SAXAEAV?$allocator@UItem@AgileRegistrationList@@@1@QEAUItem@AgileRegistrationList@@@Z @ 0x180103708 (--$destroy@UItem@AgileRegistrationList@@@-$_Default_allocator_traits@V-$allocator@UItem@AgileReg.c)
 */

void __fastcall __noreturn std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch_67(
        __int64 a1,
        __int64 a2)
{
  std::_Default_allocator_traits<std::allocator<AgileRegistrationList::Item>>::destroy<AgileRegistrationList::Item>(
    a1,
    *(_QWORD *)(a2 + 136) + 16LL * *(_QWORD *)(a2 + 128));
  std::_Deallocate(*(char **)(a2 + 136), *(_QWORD *)(a2 + 112), 0x10uLL);
  throw;
}
