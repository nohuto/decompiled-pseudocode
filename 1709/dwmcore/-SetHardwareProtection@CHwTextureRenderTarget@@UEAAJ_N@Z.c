/*
 * XREFs of ?SetHardwareProtection@CHwTextureRenderTarget@@UEAAJ_N@Z @ 0x1801AD630
 * Callers:
 *     ?SetHardwareProtection@CHwTextureRenderTarget@@WMA@EAAJ_N@Z @ 0x1800C6B40 (-SetHardwareProtection@CHwTextureRenderTarget@@WMA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::SetHardwareProtection(CHwTextureRenderTarget *this, char a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 != ((*(_DWORD *)(*((_QWORD *)this + 28) + 168LL) & 0x80000) != 0) )
  {
    v2 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980085, 0x202u);
  }
  return v2;
}
