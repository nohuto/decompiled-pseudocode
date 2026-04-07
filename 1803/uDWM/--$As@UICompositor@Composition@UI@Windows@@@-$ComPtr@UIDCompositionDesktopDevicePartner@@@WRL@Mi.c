/*
 * XREFs of ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003BAF0
 * Callers:
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18003B65C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800475AC (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x180047CC8 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180038664 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
           a2);
}
