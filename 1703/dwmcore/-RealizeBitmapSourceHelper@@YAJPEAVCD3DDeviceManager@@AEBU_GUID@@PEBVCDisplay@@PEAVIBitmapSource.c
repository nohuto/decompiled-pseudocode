/*
 * XREFs of ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188458
 * Callers:
 *     ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188374 (-RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ??$ReleaseInterface@VCHwTexturedColorSource@@@@YAXAEAPEAVCHwTexturedColorSource@@@Z @ 0x18004D69C (--$ReleaseInterface@VCHwTexturedColorSource@@@@YAXAEAPEAVCHwTexturedColorSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B8124 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800C5F9C (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall RealizeBitmapSourceHelper(
        struct CD3DDeviceManager *a1,
        struct _GUID *a2,
        struct _LUID *a3,
        struct IBitmapSource *a4,
        const struct PixelFormatInfo *a5)
{
  int D3DDevice; // eax
  unsigned int v8; // ebx
  int *DisplayId; // rax
  int v10; // eax
  struct CD3DDeviceLevel1 *v12; // [rsp+40h] [rbp-18h] BYREF
  CHwBitmapColorSource *v13[2]; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v13[0] = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(a1, a2, a3[28], &v12);
  v8 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x25u);
  }
  else
  {
    DisplayId = CDisplay::GetDisplayId((__int64)a3, &v14);
    v10 = CHwTexturedColorSource::RealizeFromBitmapSource(v12, a4, a5, *DisplayId, 0, 0LL, v13);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2Du);
  }
  ReleaseInterface<CHwTexturedColorSource>(v13);
  ReleaseInterface<CD3DDeviceLevel1>((__int64 *)&v12);
  return v8;
}
