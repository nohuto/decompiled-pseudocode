/*
 * XREFs of ??$As@UIApplicationViewBackedViewHostItemPrivate@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBackedViewHostItemPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AA240
 * Callers:
 *     std::_Find_if_unchecked_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Holographic::IViewHostItem______ptr64__lambda_59ad48e223c0890c092e71751c67a96b___ @ 0x18009EBAC (std--_Find_if_unchecked_Microsoft--WRL--ComPtr_Windows--Internal--Shell--Holographic--IViewHostI.c)
 *     std::_Find_if_unchecked_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Holographic::IViewHostItem______ptr64__lambda_608159b66b8a89cf37da542e5f21d3a6___ @ 0x18009EC5C (std--_Find_if_unchecked_Microsoft--WRL--ComPtr_Windows--Internal--Shell--Holographi_ea_18009EC5C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<IApplicationViewBackedViewHostItemPrivate>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_86ccf8b6_d952_45b2_b3ad_bf46c2eec142,
           a2);
}
