/*
 * XREFs of ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x1801F3D10
 * Callers:
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@WNI@EAAJ_N@Z @ 0x1800DE420 (-SetHardwareProtection@CHDRConversionRenderTarget@@WNI@EAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x1801F2360 (-SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::SetHardwareProtection(CHDRConversionRenderTarget *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 76);
  v4 = CHwFullScreenRenderTarget::SetHardwareProtection(this, a2);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x33Eu);
  return v5;
}
