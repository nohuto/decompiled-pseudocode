/*
 * XREFs of ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x1801B4A00
 * Callers:
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x1801B4B28 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?GetTextureFormat@CSectionBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x1801B4E30 (-GetTextureFormat@CSectionBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x18007DA30 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::CalcPixelFormatInfo(CSectionBitmapRealization *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  int v3; // ecx

  v1 = 0;
  if ( IsValidPixelFormat(*((_DWORD *)this + 107)) )
  {
    *(_DWORD *)(v2 + 440) = v3;
    *(_DWORD *)(v2 + 444) = *(_DWORD *)(v2 + 120);
    *(_DWORD *)(v2 + 448) = *(_DWORD *)(v2 + 164);
    *(_BYTE *)(v2 + 452) = 1;
  }
  else
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC2u);
  }
  return v1;
}
