/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_WGIController______ptr64_Microsoft::WRL::ComPtr_WGIController______ptr64_std::allocator_Microsoft::WRL::ComPtr_WGIController______::_1_::catch$2 @ 0x1800E7669
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@0@@Z @ 0x180077C2C (--$_Destroy_range@V-$allocator@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Co.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_WGIController______ptr64_Microsoft::WRL::ComPtr_WGIController______ptr64_std::allocator_Microsoft::WRL::ComPtr_WGIController______::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<WGIController>>>(
    *(volatile signed __int64 ***)(a2 + 88),
    *(volatile signed __int64 ***)(a2 + 80));
  throw;
}
