/*
 * XREFs of ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x1801B6E4C
 * Callers:
 *     ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801AEC7C (-CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV-$TMilRect@IUMil.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180085100 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800856EC (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ??2CHwDeviceBitmapColorSource@@CAPEAX_K@Z @ 0x180085868 (--2CHwDeviceBitmapColorSource@@CAPEAX_K@Z.c)
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x180085890 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x1801B4F68 (-CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CreateShared(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        int a5,
        char a6,
        _OWORD *a7,
        _QWORD *a8,
        CHwDeviceBitmapColorSource **a9)
{
  __int64 v11; // rbx
  CHwDeviceBitmapColorSource *v13; // rdi
  signed int v14; // eax
  unsigned int v15; // esi
  UINT v16; // eax
  CHwDeviceBitmapColorSource *v17; // rax
  signed int SharedTexture; // eax
  __int64 v19; // rax
  struct D3D11_TEXTURE2D_DESC v21; // [rsp+30h] [rbp-A1h] BYREF
  CHwDeviceBitmapColorSource **v22; // [rsp+60h] [rbp-71h]
  _DWORD v23[20]; // [rsp+70h] [rbp-61h] BYREF

  v22 = a9;
  v11 = 0LL;
  v23[17] = 0;
  *a8 = 0LL;
  v13 = 0LL;
  v14 = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(a2, a4, a7, a5, (__int64)v23);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x1C1u);
  }
  else
  {
    v21.Width = v23[11];
    v21.Height = v23[14];
    v21.Format = v23[0];
    v16 = 8;
    v21.MipLevels = 1;
    v21.ArraySize = 1;
    v21.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
    if ( a6 )
      v16 = 40;
    v21.Usage = D3D11_USAGE_DEFAULT;
    v21.BindFlags = v16;
    v21.CPUAccessFlags = 0;
    v21.MiscFlags = 2;
    v17 = (CHwDeviceBitmapColorSource *)CHwDeviceBitmapColorSource::operator new();
    if ( v17 )
      v13 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v17, a1, v23[3], v23[4], &v21, a3);
    if ( !v13 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1D3u);
      return v15;
    }
    (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v13)(v13);
    SharedTexture = CHwBitmapColorSource::CreateSharedTexture(v13);
    v15 = SharedTexture;
    if ( SharedTexture >= 0 )
    {
      v19 = *((_QWORD *)v13 + 21);
      if ( v19 )
        v11 = *(_QWORD *)(v19 + 240);
      *a8 = v11;
      CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v13, a2, 0LL, (__int64)v23);
      *v22 = v13;
      return v15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SharedTexture, 0x1D6u);
  }
  if ( v13 )
    CMILRefCountBase::Release(v13);
  return v15;
}
