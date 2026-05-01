/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IUnknown______ptr64_Microsoft::WRL::ComPtr_IUnknown______ptr64_std::allocator_Microsoft::WRL::ComPtr_IUnknown______::_1_::catch$2 @ 0x180190E7F
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@0@@Z @ 0x180190E00 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IUnknown______ptr64_Microsoft::WRL::ComPtr_IUnknown______ptr64_std::allocator_Microsoft::WRL::ComPtr_IUnknown______::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>(
    *(CWinRTApplicationView ***)(a2 + 88),
    *(CWinRTApplicationView ***)(a2 + 80));
  throw;
}
