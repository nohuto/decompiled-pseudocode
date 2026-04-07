/*
 * XREFs of ??$As@UICompositorInterop@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800756C8
 * Callers:
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180076234 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositorInterop>(
        _QWORD *a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_25297d5c_3ad4_4c9c_b5cf_e36a38512330, a2);
}
