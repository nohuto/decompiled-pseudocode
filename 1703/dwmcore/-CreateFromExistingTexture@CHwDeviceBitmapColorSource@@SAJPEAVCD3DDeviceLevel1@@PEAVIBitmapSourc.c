/*
 * XREFs of ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800C4C9C
 * Callers:
 *     ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180043C70 (-CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV-$TMilRect@IUMilRect.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1800C4B9C (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 * Callees:
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180044D38 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800C4E5C (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ??2CHwDeviceBitmapColorSource@@CAPEAX_K@Z @ 0x1800C4EAC (--2CHwDeviceBitmapColorSource@@CAPEAX_K@Z.c)
 *     ?CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@W4DXGI_ALPHA_MODE@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800C4ED4 (-CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@.c)
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800C505C (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  CHwDeviceBitmapColorSource *v17; // rax
  CHwDeviceBitmapColorSource *v18; // rsi
  unsigned int v20; // [rsp+20h] [rbp-91h]
  struct D3D11_TEXTURE2D_DESC v21; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v22[12]; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v23; // [rsp+6Ch] [rbp-45h]
  unsigned int v24; // [rsp+70h] [rbp-41h]
  int v25; // [rsp+A4h] [rbp-Dh]

  v25 = 0;
  if ( !*(_QWORD *)(a6 + 256) )
  {
    v12 = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(a2, *(unsigned int *)(a6 + 152), a5);
    v14 = v12;
    if ( v12 >= 0 )
      goto LABEL_3;
    v20 = 245;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v20);
    return v14;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 32LL))(a2, a2, a5);
  v12 = CHwDeviceBitmapColorSource::CalcCacheParametersFromVidMemTexture(a6, v11, a4, v22);
  v14 = v12;
  if ( v12 < 0 )
  {
    v20 = 237;
    goto LABEL_13;
  }
LABEL_3:
  v15 = *(_OWORD *)(a6 + 136);
  v16 = *(_OWORD *)(a6 + 152);
  v21.MiscFlags = *(_DWORD *)(a6 + 176);
  *(_OWORD *)&v21.Width = v15;
  *(_QWORD *)&v21.BindFlags = *(_QWORD *)(a6 + 168);
  *(_OWORD *)&v21.Format = v16;
  v17 = (CHwDeviceBitmapColorSource *)CHwDeviceBitmapColorSource::operator new(v13);
  if ( v17 )
    v18 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v17, a1, v23, v24, &v21, a3);
  else
    v18 = 0LL;
  if ( v18 )
  {
    (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v18)(v18);
    *((_QWORD *)v18 + 20) = a6;
    _InterlockedIncrement((volatile signed __int32 *)(a6 + 8));
    CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v18, a2, 0LL, (__int64)v22);
    *a7 = v18;
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x105u);
  }
  return v14;
}
