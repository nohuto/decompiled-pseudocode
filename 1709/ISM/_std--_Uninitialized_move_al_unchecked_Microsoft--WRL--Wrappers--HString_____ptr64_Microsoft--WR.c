/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::Wrappers::HString_____ptr64_Microsoft::WRL::Wrappers::HString_____ptr64_std::allocator_Microsoft::WRL::Wrappers::HString____::_1_::catch$4 @ 0x1800D1201
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@PEAVHString@Wrappers@WRL@Microsoft@@@std@@YAXPEAVHString@Wrappers@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@0@@Z @ 0x180098750 (--$_Destroy_range@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@PEAVHString@Wrappers@WRL@M.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::Wrappers::HString_____ptr64_Microsoft::WRL::Wrappers::HString_____ptr64_std::allocator_Microsoft::WRL::Wrappers::HString____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::Wrappers::HString>,Microsoft::WRL::Wrappers::HString *>(
    *(HSTRING **)(a2 + 88),
    *(HSTRING **)(a2 + 80));
  throw;
}
