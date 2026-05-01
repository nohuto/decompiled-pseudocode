/*
 * XREFs of _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo__const_&___ptr64__::_1_::catch$73 @ 0x1801EC9F9
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800250AC (--$_Unfancy@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@UIDiscoverRecen.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@_K@Z @ 0x180025980 (-deallocate@-$_Wrap_alloc@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@Ag.c)
 *     ??$destroy@V?$shared_ptr@UKBViewInfo@@@std@@@?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@QEAAXPEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x1800EC144 (--$destroy@V-$shared_ptr@UKBViewInfo@@@std@@@-$_Wrap_alloc@V-$allocator@V-$shared_ptr@UKBViewInf.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo__const_____ptr64__::_1_::catch_73(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>(a2[17] + 16 * a2[16]);
  std::_Wrap_alloc<std::allocator<std::shared_ptr<KBViewInfo>>>::destroy<std::shared_ptr<KBViewInfo>>(v4, v3);
  std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v5, (_QWORD *)a2[17], a2[14]);
  throw;
}
