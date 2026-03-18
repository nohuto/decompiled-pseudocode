/*
 * XREFs of ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180042510
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180055214 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800423E4 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180043B88 (-OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapCo.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18007D224 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800B22E0 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsBitmap(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _QWORD *a5,
        struct _GUID *a6,
        struct _LUID a7,
        unsigned int a8,
        __int64 a9,
        char a10,
        int a11)
{
  struct CD3DDeviceLevel1 *v12; // r14
  CMILPoolResource *v13; // r15
  CMILRefCountBase *v14; // rsi
  int v15; // eax
  unsigned int v16; // edi
  int D3DDevice; // eax
  int Cache; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  CMILRefCountBase *v26; // [rsp+48h] [rbp-38h] BYREF
  CMILPoolResource *v27; // [rsp+50h] [rbp-30h] BYREF
  struct CD3DDeviceLevel1 *v28; // [rsp+58h] [rbp-28h] BYREF
  __int128 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+70h] [rbp-10h]

  v30 = a1;
  *a4 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  a5[1] = 0LL;
  *a5 = 0LL;
  *(_QWORD *)&v29 = a4;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v15 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(0LL, *(_QWORD *)&a7, a8);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v15, 0x75Du);
    goto LABEL_7;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(v30 - 16), a6, a7, &v28);
  v16 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, D3DDevice, 0x75Fu);
    v12 = v28;
    goto LABEL_11;
  }
  v12 = v28;
  Cache = CHwBitmapCache::GetCache(
            v28,
            (struct IBitmapSource *)((a2 + 16) & ((unsigned __int128)-(__int128)a2 >> 64)),
            1,
            &v27);
  v16 = Cache;
  if ( Cache >= 0 )
  {
    v13 = v27;
    v19 = CHwBitmapCache::OpenSharedHandleAsColorSource(v27, a3, a8, a9, a10, a11, &v26);
    v16 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v19, 0x77Cu);
      v14 = v26;
    }
    else
    {
      v14 = v26;
      v20 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(a2, a3, a8, v26);
      v16 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v20, 0x780u);
      }
      else
      {
        v21 = (_DWORD *)v29;
        v22 = *((_DWORD *)v14 + 58);
        *(_QWORD *)&v29 = 0LL;
        *v21 = v22;
        *((_QWORD *)&v29 + 1) = *((_QWORD *)v14 + 17);
        *(_OWORD *)a5 = v29;
      }
    }
LABEL_7:
    if ( v14 )
      CMILRefCountBase::Release(v14);
    goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, Cache, 0x76Bu);
  v13 = v27;
LABEL_9:
  if ( v13 )
    CMILPoolResource::Release(v13);
LABEL_11:
  if ( v12 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v12 + 488));
  return v16;
}
