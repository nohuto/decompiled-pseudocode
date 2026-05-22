/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding________ptr64_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding________ptr64_std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding________::_1_::catch$4 @ 0x1800CD74C
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@PEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@2@@std@@YAXPEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@0@0AEAU?$_Wrap_alloc@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x18001FCE4 (--$_Destroy_range@V-$allocator@U-$pair@KV-$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding________ptr64_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding________ptr64_std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding________::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>,std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
