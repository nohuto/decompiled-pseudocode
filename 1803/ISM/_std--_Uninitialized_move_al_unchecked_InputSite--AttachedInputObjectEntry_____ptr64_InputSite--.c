/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_InputSite::AttachedInputObjectEntry_____ptr64_InputSite::AttachedInputObjectEntry_____ptr64_std::allocator_InputSite::AttachedInputObjectEntry____::_1_::catch$1 @ 0x1800E3CB6
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@0AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x18000CDF8 (--$_Destroy_range@V-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedI.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_InputSite::AttachedInputObjectEntry_____ptr64_InputSite::AttachedInputObjectEntry_____ptr64_std::allocator_InputSite::AttachedInputObjectEntry____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
