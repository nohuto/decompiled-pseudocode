/*
 * XREFs of ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800CDB30
 * Callers:
 *     ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CC11C (-CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV-$TMilRect@IUMilRect.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1801F478C (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800CDCC8 (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x1800CDDAC (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ??2CHwDeviceBitmapColorSource@@CAPEAX_K@Z @ 0x1800CE0B0 (--2CHwDeviceBitmapColorSource@@CAPEAX_K@Z.c)
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800CE0D8 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@W4DXGI_ALPHA_MODE@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1801F3F8C (-CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@.c)
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
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned int v12; // ebx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  CHwDeviceBitmapColorSource *v15; // rax
  CHwDeviceBitmapColorSource *v16; // rsi
  __int64 v18; // rax
  unsigned int v19; // [rsp+20h] [rbp-A1h]
  struct D3D11_TEXTURE2D_DESC v20; // [rsp+30h] [rbp-91h] BYREF
  _BYTE v21[12]; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v22; // [rsp+6Ch] [rbp-55h]
  unsigned int v23; // [rsp+70h] [rbp-51h]
  int v24; // [rsp+A4h] [rbp-1Dh]
  _BYTE v25[16]; // [rsp+B0h] [rbp-11h] BYREF

  v24 = 0;
  if ( *(_QWORD *)(a6 + 240) )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v25, a5);
    v10 = CHwDeviceBitmapColorSource::CalcCacheParametersFromVidMemTexture(a6, *(unsigned int *)(v18 + 4), a4, v21);
    v12 = v10;
    if ( v10 >= 0 )
      goto LABEL_3;
    v19 = 236;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v19);
    return v12;
  }
  v10 = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(a2, *(unsigned int *)(a6 + 144), a5);
  v12 = v10;
  if ( v10 < 0 )
  {
    v19 = 244;
    goto LABEL_13;
  }
LABEL_3:
  v13 = *(_OWORD *)(a6 + 128);
  v14 = *(_OWORD *)(a6 + 144);
  v20.MiscFlags = *(_DWORD *)(a6 + 168);
  *(_OWORD *)&v20.Width = v13;
  *(_QWORD *)&v20.BindFlags = *(_QWORD *)(a6 + 160);
  *(_OWORD *)&v20.Format = v14;
  v15 = (CHwDeviceBitmapColorSource *)CHwDeviceBitmapColorSource::operator new(v11);
  if ( v15 )
    v16 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v15, a1, v22, v23, &v20, a3);
  else
    v16 = 0LL;
  if ( v16 )
  {
    (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v16)(v16);
    *((_QWORD *)v16 + 21) = a6;
    _InterlockedIncrement((volatile signed __int32 *)(a6 + 8));
    CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v16);
    *a7 = v16;
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x104u);
  }
  return v12;
}
