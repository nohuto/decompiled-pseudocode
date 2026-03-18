/*
 * XREFs of ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x1801BA470
 * Callers:
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@WMA@EAAJ_N@Z @ 0x1800C6D30 (-SetHardwareProtection@CHDRConversionRenderTarget@@WMA@EAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x1801B8B80 (-SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::SetHardwareProtection(CHDRConversionRenderTarget *this, char a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx

  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 71);
  v4 = CHwFullScreenRenderTarget::SetHardwareProtection(this, a2);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x321u);
  return v5;
}
