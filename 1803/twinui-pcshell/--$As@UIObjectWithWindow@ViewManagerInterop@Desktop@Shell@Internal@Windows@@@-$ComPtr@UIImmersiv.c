/*
 * XREFs of ??$As@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AA27C
 * Callers:
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z @ 0x1801B1B4C (-_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveApplication>::As<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8,
           a2);
}
