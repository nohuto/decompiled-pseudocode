/*
 * XREFs of ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1801DE390
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800899E0 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800CBF30 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CC3EC (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801E8444 (-OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapCo.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _QWORD *a5,
        struct _LUID a6,
        unsigned int a7,
        __int64 a8,
        char a9,
        int a10)
{
  struct CD3DDeviceLevel1 *v11; // r14
  CMILPoolResource *v12; // r15
  CMILRefCountBase *v13; // rsi
  int v14; // eax
  unsigned int v15; // edi
  int D3DDevice; // eax
  int Cache; // eax
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  CMILRefCountBase *v25; // [rsp+48h] [rbp-38h] BYREF
  CMILPoolResource *v26; // [rsp+50h] [rbp-30h] BYREF
  struct CD3DDeviceLevel1 *v27; // [rsp+58h] [rbp-28h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+70h] [rbp-10h]

  v29 = a1;
  *a4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  a5[1] = 0LL;
  *a5 = 0LL;
  *(_QWORD *)&v28 = a4;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v14 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(0LL, *(_QWORD *)&a6, a7);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v14, 0x75Du);
    goto LABEL_12;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(v29 - 16), a6, &v27);
  v15 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, D3DDevice, 0x75Fu);
    v11 = v27;
    goto LABEL_16;
  }
  v11 = v27;
  Cache = CHwBitmapCache::GetCache(
            v27,
            (struct IBitmapSource *)((a2 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)),
            1,
            &v26);
  v15 = Cache;
  if ( Cache >= 0 )
  {
    v12 = v26;
    v18 = CHwBitmapCache::OpenSharedHandleAsColorSource(v26, a3, a7, a8, a9, a10, &v25);
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v18, 0x77Cu);
      v13 = v25;
    }
    else
    {
      v13 = v25;
      v19 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(a2, a3, a7, (__int64)v25);
      v15 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v19, 0x780u);
      }
      else
      {
        v20 = (_DWORD *)v28;
        v21 = *((_DWORD *)v13 + 60);
        *(_QWORD *)&v28 = 0LL;
        *v20 = v21;
        *((_QWORD *)&v28 + 1) = *((_QWORD *)v13 + 18);
        *(_OWORD *)a5 = v28;
      }
    }
LABEL_12:
    if ( v13 )
      CMILRefCountBase::Release(v13);
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, Cache, 0x76Bu);
  v12 = v26;
LABEL_14:
  if ( v12 )
    CMILPoolResource::Release(v12);
LABEL_16:
  if ( v11 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v11 + 472));
  return v15;
}
