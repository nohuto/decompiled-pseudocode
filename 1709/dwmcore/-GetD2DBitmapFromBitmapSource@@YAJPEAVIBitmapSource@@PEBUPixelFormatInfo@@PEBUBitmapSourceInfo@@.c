/*
 * XREFs of ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180191B54
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1800373D8 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUI.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801D2100 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180081C70 (-GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801AD898 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 */

__int64 __fastcall GetD2DBitmapFromBitmapSource(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        const struct BitmapSourceInfo *a3,
        struct ID2D1Bitmap1 **a4)
{
  struct _LUID v5; // rdx
  __int64 v7; // rdi
  signed int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v9; // r14
  int v10; // ebx
  signed int v11; // eax
  __int64 v12; // r13
  struct ID2D1Bitmap1 *v13; // rsi
  unsigned int v15; // [rsp+20h] [rbp-30h]
  struct CD3DDeviceLevel1 *v16; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1Bitmap1 *v17; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+58h] BYREF

  *a4 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v5 = *(struct _LUID *)a3;
  v17 = 0LL;
  v7 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v5, &v16);
  v9 = v16;
  v10 = D3DDevice;
  v18 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v15 = 45;
    goto LABEL_12;
  }
  v11 = CHwTexturedColorSource::RealizeFromBitmapSource(v16, *((_DWORD *)a3 + 4), *((_QWORD *)a3 + 3), (__int64)&v19);
  v18 = v11;
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x35u);
    v7 = v19;
    goto LABEL_13;
  }
  v7 = v19;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
  D3DDevice = CD3DTexture::GetD2DBitmap((struct ID2D1Bitmap1 **)v12, *((_BYTE *)a3 + 16) & 1, &v17);
  v18 = D3DDevice;
  v10 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v15 = 60;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DDevice, v15);
    goto LABEL_13;
  }
  v13 = v17;
  if ( v17 )
  {
    if ( g_LockAndReadTexture )
      DebugInspectTexture(*(struct ID3D11Texture2D **)(v12 + 120), 0);
    *a4 = v13;
  }
  else
  {
    v10 = -2147024882;
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x3Du);
  }
LABEL_13:
  ReleaseInterfaceNoNULL<CManipulationManager>(0LL);
  ReleaseInterfaceNoNULL<CPolygon>(v7);
  if ( v9 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v9 + 472));
  TranslateDXGIorD3DErrorInContext(v10, 0, &v18);
  return v18;
}
