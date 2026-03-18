/*
 * XREFs of ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801355F0
 * Callers:
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800D1AF0 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800423E4 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x180079334 (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18007D224 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800B22E0 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180185E74 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18019C734 (-CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV-$TMilRect@IUMil.c)
 *     ?GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@@Z @ 0x18019C864 (-GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV-$TMilRect@IUMilR.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateSharedHandleBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        enum DXGI_FORMAT *a5,
        char a6,
        char a7,
        struct _GUID *a8,
        struct _LUID a9,
        unsigned int a10,
        CD3DDeviceLevel1 **a11)
{
  CMILPoolResource *v11; // r12
  CDisplaySet *v13; // r13
  enum DXGI_FORMAT *v14; // r15
  CMILRefCountBase *v15; // r14
  enum DXGI_FORMAT v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  int D3DDevice; // eax
  int Cache; // eax
  int v21; // r9d
  CD3DDeviceLevel1 *ExistingSharedColorSourceHandle; // rax
  CDisplayManager *v23; // rcx
  int CurrentDisplaySet; // eax
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  int SupportedTextureFormat; // eax
  int v27; // eax
  int v28; // eax
  int v30; // [rsp+20h] [rbp-50h]
  enum DXGI_FORMAT v31; // [rsp+40h] [rbp-30h] BYREF
  struct CDisplaySet *v32; // [rsp+48h] [rbp-28h] BYREF
  CMILRefCountBase *v33; // [rsp+50h] [rbp-20h] BYREF
  CMILPoolResource *v34; // [rsp+58h] [rbp-18h] BYREF
  CD3DDeviceLevel1 *v35[2]; // [rsp+60h] [rbp-10h] BYREF

  v11 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v32 = 0LL;
  v15 = 0LL;
  v35[0] = 0LL;
  v34 = 0LL;
  v16 = *a5;
  *a5 = DXGI_FORMAT_UNKNOWN;
  v31 = v16;
  v33 = 0LL;
  *a11 = 0LL;
  v17 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId((__int64)a5, *(_QWORD *)&a9, a10);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v17, 0x57Eu);
    goto LABEL_19;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a8, a9, v35);
  v18 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, D3DDevice, 0x580u);
    v14 = (enum DXGI_FORMAT *)v35[0];
    goto LABEL_23;
  }
  v14 = (enum DXGI_FORMAT *)v35[0];
  Cache = CHwBitmapCache::GetCache(
            v35[0],
            (struct IBitmapSource *)((a2 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)),
            1,
            &v34);
  v18 = Cache;
  if ( Cache < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, Cache, 0x58Cu);
    v11 = v34;
  }
  else
  {
    v11 = v34;
    LOBYTE(v21) = a7;
    ExistingSharedColorSourceHandle = (CD3DDeviceLevel1 *)CHwBitmapCache::GetExistingSharedColorSourceHandle(
                                                            (_DWORD)v34,
                                                            a3,
                                                            a10,
                                                            v21,
                                                            a4,
                                                            (__int64)&v31);
    v35[0] = ExistingSharedColorSourceHandle;
    if ( ExistingSharedColorSourceHandle )
    {
LABEL_14:
      *a5 = v31;
      *a11 = ExistingSharedColorSourceHandle;
      goto LABEL_19;
    }
    if ( !a6 )
      goto LABEL_10;
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v23, &v32);
    v18 = CurrentDisplaySet;
    if ( CurrentDisplaySet >= 0 )
    {
      v13 = v32;
      DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat(v32, a10);
      SupportedTextureFormat = CD3DDeviceLevel1::GetSupportedTextureFormat(v14, v31, DisplayPixelFormat, 0, 1, &v31);
      v18 = SupportedTextureFormat;
      if ( SupportedTextureFormat < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, SupportedTextureFormat, 0x5B1u);
        goto LABEL_21;
      }
LABEL_10:
      LOBYTE(v30) = a7;
      v27 = CHwBitmapCache::CreateSharedColorSource(v11, (unsigned int)v31, a3, a10, v30, a4, v35, &v33);
      v18 = v27;
      if ( v27 >= 0 )
      {
        v15 = v33;
        v28 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(a2, a3, a10, (__int64)v33);
        v18 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v28, 0x5C3u);
          goto LABEL_19;
        }
        ExistingSharedColorSourceHandle = v35[0];
        goto LABEL_14;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v27, 0x5BFu);
      v15 = v33;
LABEL_19:
      if ( v15 )
        CMILRefCountBase::Release(v15);
      goto LABEL_21;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, CurrentDisplaySet, 0x5A9u);
    v13 = v32;
  }
LABEL_21:
  if ( v11 )
    CMILPoolResource::Release(v11);
LABEL_23:
  if ( v14 )
    CMILPoolResource::Release((CMILPoolResource *)(v14 + 122));
  if ( v13 )
    CDisplaySet::Release(v13);
  return v18;
}
