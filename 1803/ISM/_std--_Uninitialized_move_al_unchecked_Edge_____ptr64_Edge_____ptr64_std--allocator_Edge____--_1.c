/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Edge_____ptr64_Edge_____ptr64_std::allocator_Edge____::_1_::catch$19 @ 0x1800E7233
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV?$allocator@VEdge@@@0@@Z @ 0x180067E60 (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV-$allocator@VEdge@@@0@@Z.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Edge_____ptr64_Edge_____ptr64_std::allocator_Edge____::_1_::catch_19(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Edge>>(*(__int64 **)(a2 + 88), *(__int64 **)(a2 + 80));
  throw;
}
