/*
 * XREFs of ?SetHardwareProtection@CHwTextureRenderTarget@@UEAAJ_N@Z @ 0x18019C080
 * Callers:
 *     ?SetHardwareProtection@CHwTextureRenderTarget@@WLA@EAAJ_N@Z @ 0x1800D6340 (-SetHardwareProtection@CHwTextureRenderTarget@@WLA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::SetHardwareProtection(CHwTextureRenderTarget *this, char a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 != ((*(_DWORD *)(*((_QWORD *)this + 26) + 176LL) & 0x80000) != 0) )
  {
    v2 = -2003304315;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304315, 0x229u);
  }
  return v2;
}
