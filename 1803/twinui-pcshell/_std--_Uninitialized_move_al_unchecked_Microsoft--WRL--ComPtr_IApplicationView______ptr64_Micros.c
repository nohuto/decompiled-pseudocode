/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IApplicationView______ptr64_Microsoft::WRL::ComPtr_IApplicationView______ptr64_std::allocator_Microsoft::WRL::ComPtr_IApplicationView______::_1_::catch$2 @ 0x1801BFC9B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x1801BFB2C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IApplicationView______ptr64_Microsoft::WRL::ComPtr_IApplicationView______ptr64_std::allocator_Microsoft::WRL::ComPtr_IApplicationView______::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
    *(CWinRTApplicationView ***)(a2 + 88),
    *(CWinRTApplicationView ***)(a2 + 80));
  throw;
}
