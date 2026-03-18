/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C0C38
 * Callers:
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x180078CC8 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x180078E20 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ??1?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@QEAA@XZ @ 0x18011DEC4 (--1-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCD3DDeviceLevel1@@XZ @ 0x18011DEF8 (--B-$ComPtrRef@V-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVC.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801274D8 (--1CComposition@@MEAA@XZ.c)
 *     ??_GCSuperWetInkRenderer@@QEAAPEAXI@Z @ 0x180127910 (--_GCSuperWetInkRenderer@@QEAAPEAXI@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015A4CC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x180190FC8 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILPoolResource::Release((CMILPoolResource *)(v1 + 472));
  }
  return result;
}
