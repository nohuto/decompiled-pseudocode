/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIDisplayPrimaryDescriptionFactory@DirectDisplay@Graphics@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDisplayPrimaryDescriptionFactory@DirectDisplay@Graphics@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18015B4F8
 * Callers:
 *     ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015B6E8 (-CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Graphics::DirectDisplay::IDisplayPrimaryDescriptionFactory>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_355f2710_6a6a_4802_b5a9_d55c9393d2c9, a2);
}
