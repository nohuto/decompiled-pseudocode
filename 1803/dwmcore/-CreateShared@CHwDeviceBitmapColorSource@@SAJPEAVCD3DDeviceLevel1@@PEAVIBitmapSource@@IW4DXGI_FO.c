/*
 * XREFs of ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x1801F450C
 * Callers:
 *     ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801E7D20 (-CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV-$TMilRect@IUMil.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800CDCC8 (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x1800CDDAC (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ??2CHwDeviceBitmapColorSource@@CAPEAX_K@Z @ 0x1800CE0B0 (--2CHwDeviceBitmapColorSource@@CAPEAX_K@Z.c)
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800CE0D8 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x1801EF224 (-CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ.c)
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
  int SharedTexture; // esi
  UINT v15; // eax
  CHwDeviceBitmapColorSource *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  struct D3D11_TEXTURE2D_DESC v20; // [rsp+30h] [rbp-A1h] BYREF
  CHwDeviceBitmapColorSource **v21; // [rsp+60h] [rbp-71h]
  _DWORD v22[20]; // [rsp+70h] [rbp-61h] BYREF

  v21 = a9;
  v11 = 0LL;
  v22[17] = 0;
  *a8 = 0LL;
  v13 = 0LL;
  SharedTexture = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(a2, a4, a7, a5, (__int64)v22);
  if ( SharedTexture < 0 )
  {
    v18 = 449;
  }
  else
  {
    v20.Width = v22[11];
    v20.Height = v22[14];
    v20.Format = v22[0];
    v15 = 8;
    v20.MipLevels = 1;
    v20.ArraySize = 1;
    v20.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
    if ( a6 )
      v15 = 40;
    v20.Usage = D3D11_USAGE_DEFAULT;
    v20.BindFlags = v15;
    v20.CPUAccessFlags = 0;
    v20.MiscFlags = 2;
    v16 = (CHwDeviceBitmapColorSource *)CHwDeviceBitmapColorSource::operator new();
    if ( v16 )
      v13 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v16, a1, v22[3], v22[4], &v20, a3);
    if ( !v13 )
    {
      SharedTexture = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1D3u);
      return (unsigned int)SharedTexture;
    }
    (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v13)(v13);
    SharedTexture = CHwBitmapColorSource::CreateSharedTexture(v13);
    if ( SharedTexture >= 0 )
    {
      v17 = *((_QWORD *)v13 + 21);
      if ( v17 )
        v11 = *(_QWORD *)(v17 + 240);
      *a8 = v11;
      CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v13, a2, 0LL, (__int64)v22);
      *v21 = v13;
      return (unsigned int)SharedTexture;
    }
    v18 = 470;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SharedTexture, v18);
  if ( v13 )
    CMILRefCountBase::Release(v13);
  return (unsigned int)SharedTexture;
}
