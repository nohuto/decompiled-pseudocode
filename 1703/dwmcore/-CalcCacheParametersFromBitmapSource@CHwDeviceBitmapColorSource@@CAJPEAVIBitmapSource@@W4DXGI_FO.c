/*
 * XREFs of ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800C505C
 * Callers:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800C4C9C (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18019FC00 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x1800C4F88 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(
        __int64 a1,
        int a2,
        _OWORD *a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rsi
  _DWORD *v10; // r15
  _DWORD *v11; // r12
  int PixelFormatColorSpace; // eax
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  bool v20; // zf
  unsigned int v21; // [rsp+20h] [rbp-38h]

  v5 = a5;
  v10 = (_DWORD *)(a5 + 16);
  v11 = (_DWORD *)(a5 + 12);
  PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(
                            a1,
                            a5 + 12,
                            a5 + 16);
  v13 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v21 = 49;
    goto LABEL_22;
  }
  if ( *v11 > 0x1000000u || *v10 > 0x1000000u )
  {
    v13 = -2003292287;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292287, 0x36u);
    return v13;
  }
  *(_DWORD *)v5 = a2;
  PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &a5);
  v13 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v21 = 67;
    goto LABEL_22;
  }
  if ( (_DWORD)a5 == a2 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    if ( !v14 || (v20 = v14 == 1, v15 = 2, !v20) )
      v15 = 1;
    *(_DWORD *)(v5 + 8) = v15;
    goto LABEL_9;
  }
  PixelFormatColorSpace = GetPixelFormatColorSpace(a2, (enum ColorSpace *)(v5 + 8));
  v13 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v21 = 74;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v21);
    return v13;
  }
LABEL_9:
  *(_BYTE *)(v5 + 4) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) == 3;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  *(_DWORD *)(v5 + 24) = 0;
  *(_BYTE *)(v5 + 5) = v16 == 1;
  *(_OWORD *)(v5 + 28) = *a3;
  v17 = *(_DWORD *)(v5 + 36) - *(_DWORD *)(v5 + 28);
  *(_QWORD *)(v5 + 44) = v17;
  *(_DWORD *)(v5 + 52) = 3;
  v18 = *(_DWORD *)(v5 + 40) - *(_DWORD *)(v5 + 32);
  *(_QWORD *)(v5 + 56) = v18;
  *(_DWORD *)(v5 + 64) = 3;
  *(_BYTE *)(v5 + 20) = v17 != *v11 || v18 != *v10;
  *(_DWORD *)(v5 + 68) = a4;
  return v13;
}
