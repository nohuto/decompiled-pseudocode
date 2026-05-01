/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1801ABDA4
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow______ptr64_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow______ptr64_std::allocator_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow______::_1_::catch$2 @ 0x1801F7383 (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--ComPtr_IXamlExplorerHostWindow______ptr64.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
