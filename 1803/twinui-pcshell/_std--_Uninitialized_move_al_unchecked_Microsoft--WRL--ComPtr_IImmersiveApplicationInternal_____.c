/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal______ptr64_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal______ptr64_std::allocator_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal______::_1_::catch$2 @ 0x1801036E3
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@0@@Z @ 0x180103460 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal______ptr64_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal______ptr64_std::allocator_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal______::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
