/*
 * XREFs of ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800CE0D8
 * Callers:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800CDB30 (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x1801F450C (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x1800C8820 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(
        __int64 a1,
        int a2,
        _OWORD *a3,
        int a4,
        __int64 a5)
{
  _DWORD *v8; // r12
  _DWORD *v9; // r13
  int PixelFormatColorSpace; // eax
  char v11; // bp
  unsigned int v12; // esi
  int v13; // r9d
  int v14; // eax
  bool v15; // zf
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v19; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+38h] [rbp-50h] BYREF
  int v22; // [rsp+3Ch] [rbp-4Ch]
  int v23; // [rsp+40h] [rbp-48h]

  v8 = (_DWORD *)(a5 + 16);
  v9 = (_DWORD *)(a5 + 12);
  PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(
                            a1,
                            a5 + 12,
                            a5 + 16);
  v11 = 0;
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v19 = 48;
    goto LABEL_19;
  }
  if ( *v9 > 0x1000000u || *v8 > 0x1000000u )
  {
    v12 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292287, 0x35u);
    return v12;
  }
  *(_DWORD *)a5 = a2;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 24LL))(a1, &v21);
  v13 = 1;
  if ( v21 == a2 )
  {
    if ( !v23 || (v14 = 2, v23 != 1) )
      v14 = 1;
    *(_DWORD *)(a5 + 8) = v14;
    goto LABEL_8;
  }
  PixelFormatColorSpace = GetPixelFormatColorSpace(a2, (enum ColorSpace *)(a5 + 8));
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v19 = 73;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PixelFormatColorSpace, v19);
    return v12;
  }
LABEL_8:
  *(_DWORD *)(a5 + 24) = 0;
  v15 = v22 == v13;
  *(_BYTE *)(a5 + 4) = v22 == 3;
  *(_BYTE *)(a5 + 5) = v15;
  *(_OWORD *)(a5 + 28) = *a3;
  v16 = *(_DWORD *)(a5 + 36) - *(_DWORD *)(a5 + 28);
  *(_QWORD *)(a5 + 44) = v16;
  *(_DWORD *)(a5 + 52) = 3;
  v17 = *(_DWORD *)(a5 + 40) - *(_DWORD *)(a5 + 32);
  *(_QWORD *)(a5 + 56) = v17;
  *(_DWORD *)(a5 + 64) = 3;
  if ( v16 != *v9 || v17 != *v8 )
    v11 = v13;
  *(_BYTE *)(a5 + 20) = v11;
  *(_DWORD *)(a5 + 68) = a4;
  return v12;
}
