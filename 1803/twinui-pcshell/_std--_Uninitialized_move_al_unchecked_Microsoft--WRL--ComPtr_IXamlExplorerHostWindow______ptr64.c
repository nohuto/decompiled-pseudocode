/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow______ptr64_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow______ptr64_std::allocator_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow______::_1_::catch$2 @ 0x1801F7383
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1801ABDA4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow______ptr64_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow______ptr64_std::allocator_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow______::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
