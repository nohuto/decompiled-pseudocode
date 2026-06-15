/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::WeakRef_____ptr64_Microsoft::WRL::WeakRef_____ptr64_std::allocator_Microsoft::WRL::WeakRef____::_1_::catch$4 @ 0x180039FD1
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@PEAVWeakRef@WRL@Microsoft@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@@Z @ 0x180091F0C (--$_Destroy_range@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@PEAVWeakRef@WRL@Microsoft@@@std@@YA.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::WeakRef_____ptr64_Microsoft::WRL::WeakRef_____ptr64_std::allocator_Microsoft::WRL::WeakRef____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef *>(
    *(_QWORD *)(a2 + 88),
    *(_QWORD *)(a2 + 80));
  throw;
}
