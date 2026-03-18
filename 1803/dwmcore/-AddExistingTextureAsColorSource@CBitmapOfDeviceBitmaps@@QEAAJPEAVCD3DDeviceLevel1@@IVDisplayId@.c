/*
 * XREFs of ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800CC840
 * Callers:
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x180078490 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800CBF30 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CC11C (-CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV-$TMilRect@IUMilRect.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CC3EC (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CC52C (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::AddExistingTextureAsColorSource(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        __int64 a3,
        unsigned int a4,
        const struct tagRECT *a5,
        __int64 a6)
{
  CMILRefCountBase *v6; // rsi
  int Cache; // eax
  __int64 v10; // rdx
  unsigned int v11; // edi
  int ColorSourceFromExistingTexture; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  CMILRefCountBase *v17; // [rsp+30h] [rbp-18h] BYREF
  CMILPoolResource *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  Cache = CHwBitmapCache::GetCache(
            a2,
            (struct IBitmapSource *)((a1 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)),
            1,
            &v18);
  v11 = Cache;
  if ( Cache < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Cache, 0x19Bu);
  }
  else
  {
    ColorSourceFromExistingTexture = CHwBitmapCache::CreateColorSourceFromExistingTexture(
                                       (__int64)v18,
                                       v10,
                                       a4,
                                       (__int64)a5,
                                       a6,
                                       (__int64)&v17);
    v11 = ColorSourceFromExistingTexture;
    if ( ColorSourceFromExistingTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ColorSourceFromExistingTexture, 0x1A1u);
      v6 = v17;
    }
    else
    {
      v6 = v17;
      v13 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(a1, 0, a4, (__int64)v17);
      LODWORD(v14) = 0;
      v11 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1A5u);
      }
      else
      {
        v15 = *((_QWORD *)v6 + 21);
        if ( v15 )
          v14 = *(_QWORD *)(v15 + 240);
        CBitmapOfDeviceBitmaps::AddUpdateRect(a1, v14, a5);
      }
    }
  }
  if ( v6 )
    CMILRefCountBase::Release(v6);
  if ( v18 )
    CMILPoolResource::Release(v18);
  return v11;
}
