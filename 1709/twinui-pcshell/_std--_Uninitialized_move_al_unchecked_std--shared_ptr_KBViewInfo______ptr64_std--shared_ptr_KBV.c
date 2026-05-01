/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_std::shared_ptr_KBViewInfo______ptr64_std::shared_ptr_KBViewInfo______ptr64_std::allocator_std::shared_ptr_KBViewInfo______::_1_::catch$6 @ 0x1801ECA98
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@0@@Z @ 0x1800EBD28 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@PE.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_std::shared_ptr_KBViewInfo______ptr64_std::shared_ptr_KBViewInfo______ptr64_std::allocator_std::shared_ptr_KBViewInfo______::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,std::shared_ptr<PenWorkspace::Discover::AppUsageData> *>(
    *(volatile signed __int32 ***)(a2 + 88),
    *(volatile signed __int32 ***)(a2 + 80));
  throw;
}
