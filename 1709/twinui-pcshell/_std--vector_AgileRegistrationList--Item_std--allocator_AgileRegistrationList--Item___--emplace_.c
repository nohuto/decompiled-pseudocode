/*
 * XREFs of _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch$107 @ 0x1801E7716
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800250AC (--$_Unfancy@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@UIDiscoverRecen.c)
 *     ??$destroy@UItem@AgileRegistrationList@@@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@@Z @ 0x18002591C (--$destroy@UItem@AgileRegistrationList@@@-$_Wrap_alloc@V-$allocator@UItem@AgileRegistrationList@.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@_K@Z @ 0x180025980 (-deallocate@-$_Wrap_alloc@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@Ag.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch_107(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>(a2[19] + 16 * a2[18]);
  std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::destroy<AgileRegistrationList::Item>(v4, v3);
  std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v5, (_QWORD *)a2[19], a2[16]);
  throw;
}
