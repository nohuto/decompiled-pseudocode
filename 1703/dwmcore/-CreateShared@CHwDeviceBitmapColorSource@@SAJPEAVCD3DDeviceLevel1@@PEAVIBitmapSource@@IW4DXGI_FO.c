/*
 * XREFs of ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18019FC00
 * Callers:
 *     ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18019C734 (-CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV-$TMilRect@IUMil.c)
 * Callees:
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180044D38 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800C4E5C (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ??2CHwDeviceBitmapColorSource@@CAPEAX_K@Z @ 0x1800C4EAC (--2CHwDeviceBitmapColorSource@@CAPEAX_K@Z.c)
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800C505C (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x18019F060 (-CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CreateShared(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _OWORD *a7,
        _QWORD *a8,
        CHwDeviceBitmapColorSource **a9)
{
  __int64 v11; // rbx
  CHwDeviceBitmapColorSource *v13; // rdi
  int v14; // eax
  unsigned int v15; // esi
  UINT v16; // eax
  CHwDeviceBitmapColorSource *v17; // rax
  bool v18; // dl
  int SharedTexture; // eax
  __int64 v20; // rax
  struct D3D11_TEXTURE2D_DESC v22; // [rsp+30h] [rbp-A1h] BYREF
  CHwDeviceBitmapColorSource **v23; // [rsp+60h] [rbp-71h]
  _DWORD v24[20]; // [rsp+70h] [rbp-61h] BYREF

  v23 = a9;
  v11 = 0LL;
  v24[17] = 0;
  *a8 = 0LL;
  v13 = 0LL;
  v14 = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(a2, a4, a7, a5, (__int64)v24);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1C2u);
  }
  else
  {
    v22.Width = v24[11];
    v22.Height = v24[14];
    v22.Format = v24[0];
    v16 = 8;
    v22.MipLevels = 1;
    v22.ArraySize = 1;
    v22.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
    if ( a6 )
      v16 = 40;
    v22.Usage = D3D11_USAGE_DEFAULT;
    v22.BindFlags = v16;
    v22.CPUAccessFlags = 0;
    v22.MiscFlags = 2;
    v17 = (CHwDeviceBitmapColorSource *)CHwDeviceBitmapColorSource::operator new();
    if ( v17 )
      v13 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v17, a1, v24[3], v24[4], &v22, a3);
    if ( !v13 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1D4u);
      return v15;
    }
    (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v13)(v13);
    SharedTexture = CHwBitmapColorSource::CreateSharedTexture(v13, v18);
    v15 = SharedTexture;
    if ( SharedTexture >= 0 )
    {
      v20 = *((_QWORD *)v13 + 20);
      if ( v20 )
        v11 = *(_QWORD *)(v20 + 256);
      *a8 = v11;
      CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v13, a2, 0LL, (__int64)v24);
      *v23 = v13;
      return v15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SharedTexture, 0x1D7u);
  }
  if ( v13 )
    CMILRefCountBase::Release(v13);
  return v15;
}
