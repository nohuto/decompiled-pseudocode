/*
 * XREFs of _std::_Uninitialized_move_al_unchecked1_std::shared_ptr_PeoplePaneViewInfo______ptr64_std::shared_ptr_PeoplePaneViewInfo______ptr64_std::allocator_std::shared_ptr_PeoplePaneViewInfo______::_1_::catch$6 @ 0x18019DED6
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@PEAV?$shared_ptr@UPeoplePaneViewInfo@@@2@@std@@YAXPEAV?$shared_ptr@UPeoplePaneViewInfo@@@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@0@@Z @ 0x1800ECFE8 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@PEAV-$shared_ptr@U.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked1_std::shared_ptr_PeoplePaneViewInfo______ptr64_std::shared_ptr_PeoplePaneViewInfo______ptr64_std::allocator_std::shared_ptr_PeoplePaneViewInfo______::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<PeoplePaneViewInfo>>,std::shared_ptr<PeoplePaneViewInfo> *>(
    *(volatile signed __int32 ***)(a2 + 88),
    *(volatile signed __int32 ***)(a2 + 80));
  throw;
}
