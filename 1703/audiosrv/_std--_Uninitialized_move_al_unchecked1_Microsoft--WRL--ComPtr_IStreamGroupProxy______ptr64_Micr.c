/*
 * XREFs of _std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy______::_1_::catch$4 @ 0x1800A802C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@PEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18009FBF4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@PEAV-$ComPtr@.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy______::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>,Microsoft::WRL::ComPtr<IStreamGroupProxy> *>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
