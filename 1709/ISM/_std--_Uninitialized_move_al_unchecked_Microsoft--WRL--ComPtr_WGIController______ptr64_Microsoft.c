/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_WGIController______ptr64_Microsoft::WRL::ComPtr_WGIController______ptr64_std::allocator_Microsoft::WRL::ComPtr_WGIController______::_1_::catch$4 @ 0x1800D14E5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@PEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAXPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18009EB64 (--$_Destroy_range@V-$allocator@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@PEAV-$ComPtr@VWGI.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_WGIController______ptr64_Microsoft::WRL::ComPtr_WGIController______ptr64_std::allocator_Microsoft::WRL::ComPtr_WGIController______::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<WGIController>>,Microsoft::WRL::ComPtr<WGIController> *>(
    *(volatile signed __int64 ***)(a2 + 88),
    *(volatile signed __int64 ***)(a2 + 80));
  throw;
}
