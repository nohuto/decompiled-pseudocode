/*
 * XREFs of ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180089958
 * Callers:
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18000829C (-IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18000CD18 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x18000CE70 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18000DC64 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x180020744 (-Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800CAC94 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x180183534 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180183778 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x1801C7C70 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAvailableDevice@CD3DDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180089208 (-GetAvailableDevice@CD3DDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDeviceManager::GetExistingDevice(
        CD3DDeviceManager *this,
        struct _LUID a2,
        struct CD3DDeviceLevel1 **a3)
{
  unsigned int v6; // edi
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v8 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = *((_BYTE *)this + 212) != 0 ? 0x8898008D : 0;
  if ( *((_BYTE *)this + 212) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v6, 0x496u);
  }
  else if ( (unsigned int)CD3DDeviceManager::GetAvailableDevice((__int64)this, *(_QWORD *)&a2, a3) != 1 )
  {
    v6 = -2003304307;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
