/*
 * XREFs of ??$As@UIDisplayDeviceInterop@@@?$ComPtr@UIDisplayDevice@DirectDisplay@Graphics@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDisplayDeviceInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18015B4BC
 * Callers:
 *     ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015B6E8 (-CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Graphics::DirectDisplay::IDisplayDevice>::As<IDisplayDeviceInterop>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
           a2);
}
