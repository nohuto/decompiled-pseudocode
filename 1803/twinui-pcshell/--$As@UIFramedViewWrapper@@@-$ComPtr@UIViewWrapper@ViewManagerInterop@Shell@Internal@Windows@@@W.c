/*
 * XREFs of ??$As@UIFramedViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFramedViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F78DC
 * Callers:
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x18013362C (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<IFramedViewWrapper>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20,
           a2);
}
