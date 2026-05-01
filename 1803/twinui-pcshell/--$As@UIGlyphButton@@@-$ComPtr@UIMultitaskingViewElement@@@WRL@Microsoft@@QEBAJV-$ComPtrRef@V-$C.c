/*
 * XREFs of ??$As@UIGlyphButton@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGlyphButton@@@WRL@Microsoft@@@Details@12@@Z @ 0x180287C20
 * Callers:
 *     ?_RepaintCloseButton@CSwitchItemElement@@IEAAXXZ @ 0x18028977C (-_RepaintCloseButton@CSwitchItemElement@@IEAAXXZ.c)
 *     ?SetDisabledButton@CScrollButtonContainer@@UEAAXW4ScrollButton@@@Z @ 0x1802A1B30 (-SetDisabledButton@CScrollButtonContainer@@UEAAXW4ScrollButton@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IGlyphButton>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_5bed2cad_118b_40f9_a117_1e4d56972a52,
           a2);
}
