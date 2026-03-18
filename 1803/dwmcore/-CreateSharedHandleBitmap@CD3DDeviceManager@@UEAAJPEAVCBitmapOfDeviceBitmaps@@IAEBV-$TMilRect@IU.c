/*
 * XREFs of ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801DDF80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800899E0 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800CBF30 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CC3EC (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x1801C67C8 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x1801E03EC (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801E7D20 (-CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV-$TMilRect@IUMil.c)
 *     ?GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@@Z @ 0x1801E803C (-GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV-$TMilRect@IUMilR.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateSharedHandleBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        enum DXGI_FORMAT *a5,
        char a6,
        char a7,
        struct _LUID a8,
        unsigned int a9,
        CD3DDeviceLevel1 **a10)
{
  CDisplaySet *v10; // r12
  CD3DDeviceLevel1 *v12; // r13
  CMILPoolResource *v13; // r15
  enum DXGI_FORMAT v14; // eax
  CMILRefCountBase *v15; // r14
  int v16; // eax
  unsigned int v17; // edi
  int D3DDevice; // eax
  int Cache; // eax
  int v20; // r9d
  CD3DDeviceLevel1 *ExistingSharedColorSourceHandle; // rax
  CDisplayManager *v22; // rcx
  int CurrentDisplaySet; // eax
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  int SupportedTextureFormat; // eax
  int v26; // eax
  int v27; // eax
  int v29; // [rsp+20h] [rbp-50h]
  enum DXGI_FORMAT v30; // [rsp+40h] [rbp-30h] BYREF
  struct CDisplaySet *v31; // [rsp+48h] [rbp-28h] BYREF
  CMILRefCountBase *v32; // [rsp+50h] [rbp-20h] BYREF
  CMILPoolResource *v33; // [rsp+58h] [rbp-18h] BYREF
  CD3DDeviceLevel1 *v34[2]; // [rsp+60h] [rbp-10h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v31 = 0LL;
  v14 = *a5;
  v15 = 0LL;
  *a5 = DXGI_FORMAT_UNKNOWN;
  v30 = v14;
  v34[0] = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  *a10 = 0LL;
  v16 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId((__int64)a5, *(_QWORD *)&a8, a9);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v16, 0x582u);
    goto LABEL_19;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a8, v34);
  v17 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, D3DDevice, 0x584u);
    v12 = v34[0];
    goto LABEL_23;
  }
  v12 = v34[0];
  Cache = CHwBitmapCache::GetCache(
            v34[0],
            (struct IBitmapSource *)((a2 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)),
            1,
            &v33);
  v17 = Cache;
  if ( Cache < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, Cache, 0x590u);
    v13 = v33;
  }
  else
  {
    v13 = v33;
    LOBYTE(v20) = a7;
    ExistingSharedColorSourceHandle = (CD3DDeviceLevel1 *)CHwBitmapCache::GetExistingSharedColorSourceHandle(
                                                            (_DWORD)v33,
                                                            a3,
                                                            a9,
                                                            v20,
                                                            a4,
                                                            (__int64)&v30);
    v34[0] = ExistingSharedColorSourceHandle;
    if ( ExistingSharedColorSourceHandle )
    {
LABEL_14:
      *a5 = v30;
      *a10 = ExistingSharedColorSourceHandle;
      goto LABEL_19;
    }
    if ( !a6 )
      goto LABEL_10;
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v22, &v31);
    v17 = CurrentDisplaySet;
    if ( CurrentDisplaySet >= 0 )
    {
      v10 = v31;
      DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat((__int64)v31, a9);
      SupportedTextureFormat = CD3DDeviceLevel1::GetSupportedTextureFormat(v12, v30, DisplayPixelFormat, 0, 1, &v30);
      v17 = SupportedTextureFormat;
      if ( SupportedTextureFormat < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, SupportedTextureFormat, 0x5B5u);
        goto LABEL_21;
      }
LABEL_10:
      LOBYTE(v29) = a7;
      v26 = CHwBitmapCache::CreateSharedColorSource(v13, (unsigned int)v30, a3, a9, v29, a4, v34, &v32);
      v17 = v26;
      if ( v26 >= 0 )
      {
        v15 = v32;
        v27 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(a2, a3, a9, (__int64)v32);
        v17 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v27, 0x5C7u);
          goto LABEL_19;
        }
        ExistingSharedColorSourceHandle = v34[0];
        goto LABEL_14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v26, 0x5C3u);
      v15 = v32;
LABEL_19:
      if ( v15 )
        CMILRefCountBase::Release(v15);
      goto LABEL_21;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, CurrentDisplaySet, 0x5ADu);
    v10 = v31;
  }
LABEL_21:
  if ( v13 )
    CMILPoolResource::Release(v13);
LABEL_23:
  if ( v12 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v12 + 472));
  if ( v10 )
    CDisplaySet::Release(v10);
  return v17;
}
