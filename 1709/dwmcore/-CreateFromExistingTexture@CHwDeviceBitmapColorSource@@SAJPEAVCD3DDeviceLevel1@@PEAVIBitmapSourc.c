/*
 * XREFs of ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18008573C
 * Callers:
 *     ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18007EC00 (-CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV-$TMilRect@IUMilRect.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1801B70CC (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180085100 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800856EC (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ??2CHwDeviceBitmapColorSource@@CAPEAX_K@Z @ 0x180085868 (--2CHwDeviceBitmapColorSource@@CAPEAX_K@Z.c)
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x180085890 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@W4DXGI_ALPHA_MODE@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1801B68CC (-CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CreateFromExistingTexture(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        CHwDeviceBitmapColorSource **a7)
{
  signed int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned int v13; // ebx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  CHwDeviceBitmapColorSource *v16; // rax
  CHwDeviceBitmapColorSource *v17; // rsi
  __int64 v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-A1h]
  struct D3D11_TEXTURE2D_DESC v21; // [rsp+30h] [rbp-91h] BYREF
  _BYTE v22[12]; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v23; // [rsp+6Ch] [rbp-55h]
  unsigned int v24; // [rsp+70h] [rbp-51h]
  int v25; // [rsp+A4h] [rbp-1Dh]
  _BYTE v26[16]; // [rsp+B0h] [rbp-11h] BYREF

  v25 = 0;
  if ( *(_QWORD *)(a6 + 240) )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v26, a5);
    v11 = CHwDeviceBitmapColorSource::CalcCacheParametersFromVidMemTexture(a6, *(unsigned int *)(v19 + 4), a4, v22);
    v13 = v11;
    if ( v11 >= 0 )
      goto LABEL_3;
    v20 = 236;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v20);
    return v13;
  }
  v11 = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(a2, *(unsigned int *)(a6 + 144), a5);
  v13 = v11;
  if ( v11 < 0 )
  {
    v20 = 244;
    goto LABEL_13;
  }
LABEL_3:
  v14 = *(_OWORD *)(a6 + 128);
  v15 = *(_OWORD *)(a6 + 144);
  v21.MiscFlags = *(_DWORD *)(a6 + 168);
  *(_OWORD *)&v21.Width = v14;
  *(_QWORD *)&v21.BindFlags = *(_QWORD *)(a6 + 160);
  *(_OWORD *)&v21.Format = v15;
  v16 = (CHwDeviceBitmapColorSource *)CHwDeviceBitmapColorSource::operator new(v12);
  if ( v16 )
    v17 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v16, a1, v23, v24, &v21, a3);
  else
    v17 = 0LL;
  if ( v17 )
  {
    (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v17)(v17);
    *((_QWORD *)v17 + 21) = a6;
    _InterlockedIncrement((volatile signed __int32 *)(a6 + 8));
    CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v17, a2, 0LL, (__int64)v22);
    *a7 = v17;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x104u);
  }
  return v13;
}
