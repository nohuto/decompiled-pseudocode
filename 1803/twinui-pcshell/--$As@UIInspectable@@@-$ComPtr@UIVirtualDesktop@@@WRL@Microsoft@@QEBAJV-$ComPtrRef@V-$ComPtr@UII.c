/*
 * XREFs of ??$As@UIInspectable@@@?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180261678
 * Callers:
 *     ?CreateBackgroundThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x180262050 (-CreateBackgroundThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIT.c)
 *     ?CreateThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x180262210 (-CreateThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IInspectable>(_QWORD *a1, UAPViewWrapper **a2)
{
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, UAPViewWrapper **))*a1)(
           *a1,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a2);
}
