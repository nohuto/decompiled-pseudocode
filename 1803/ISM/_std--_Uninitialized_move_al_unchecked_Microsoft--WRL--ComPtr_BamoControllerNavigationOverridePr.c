/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy______ptr64_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy______::_1_::catch$2 @ 0x1800E3C6E
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x18000C8CC (--$_Destroy_range@V-$allocator@V-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy______ptr64_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy______::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
