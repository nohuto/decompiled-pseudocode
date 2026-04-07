/*
 * XREFs of ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x180075704
 * Callers:
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z @ 0x180076AE0 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z.c)
 *     ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x1800771A0 (-ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
        _QWORD *a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_b9bc8ca1_fac7_4bcd_b64a_d33bbe9439bd, a2);
}
