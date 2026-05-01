/*
 * XREFs of ??$As@UITabletModeViewManager@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802D9774
 * Callers:
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1802DB3F0 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1802DF370 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<ITabletModeViewManager>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
           a2);
}
