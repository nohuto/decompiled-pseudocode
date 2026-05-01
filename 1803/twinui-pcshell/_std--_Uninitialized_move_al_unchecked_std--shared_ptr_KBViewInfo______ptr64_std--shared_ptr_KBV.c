/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_std::shared_ptr_KBViewInfo______ptr64_std::shared_ptr_KBViewInfo______ptr64_std::allocator_std::shared_ptr_KBViewInfo______::_1_::catch$5 @ 0x180194F4A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x1801BFB60 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_std::shared_ptr_KBViewInfo______ptr64_std::shared_ptr_KBViewInfo______ptr64_std::allocator_std::shared_ptr_KBViewInfo______::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
