/*
 * XREFs of ?CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@W4DXGI_ALPHA_MODE@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800C4ED4
 * Callers:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800C4C9C (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x1800C4F88 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CalcCacheParametersFromVidMemTexture(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  enum DXGI_FORMAT v4; // ecx
  int PixelFormatColorSpace; // eax
  __int64 v6; // r9
  int v7; // r10d
  int v8; // r11d
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-18h]

  *(_DWORD *)(a4 + 12) = a1[34];
  *(_DWORD *)(a4 + 16) = a1[35];
  v4 = a1[38];
  *(_DWORD *)a4 = v4;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v4, (enum ColorSpace *)(a4 + 8));
  v9 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0x85u);
  }
  else
  {
    *((_QWORD *)&v11 + 1) = *(_QWORD *)(v6 + 12);
    *(_BYTE *)(v6 + 4) = v8 == 3;
    *(_DWORD *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 20) = 0;
    *(_BYTE *)(v6 + 5) = v8 == 1;
    *(_QWORD *)&v11 = 0LL;
    *(_OWORD *)(v6 + 28) = v11;
    *(_DWORD *)(v6 + 44) = *(_DWORD *)(v6 + 36) - *(_DWORD *)(v6 + 28);
    *(_DWORD *)(v6 + 48) = 0;
    *(_DWORD *)(v6 + 52) = 3;
    *(_QWORD *)(v6 + 56) = (unsigned int)(*(_DWORD *)(v6 + 40) - *(_DWORD *)(v6 + 32));
    *(_DWORD *)(v6 + 64) = 3;
    *(_DWORD *)(v6 + 68) = v7;
  }
  return v9;
}
