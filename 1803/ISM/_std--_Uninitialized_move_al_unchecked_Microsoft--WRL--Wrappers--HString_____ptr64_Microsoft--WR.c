/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::Wrappers::HString_____ptr64_Microsoft::WRL::Wrappers::HString_____ptr64_std::allocator_Microsoft::WRL::Wrappers::HString____::_1_::catch$2 @ 0x1800E9296
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrappers@WRL@Microsoft@@0AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800AAA60 (--$_Destroy_range@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrapp.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::Wrappers::HString_____ptr64_Microsoft::WRL::Wrappers::HString_____ptr64_std::allocator_Microsoft::WRL::Wrappers::HString____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::Wrappers::HString>>(*(HSTRING **)(a2 + 88), *(HSTRING **)(a2 + 80));
  throw;
}
