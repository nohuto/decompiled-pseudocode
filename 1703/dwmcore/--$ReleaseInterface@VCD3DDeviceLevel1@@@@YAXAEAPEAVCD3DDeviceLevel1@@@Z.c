/*
 * XREFs of ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800C5F9C
 * Callers:
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18000DD5C (-IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x180045F1C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180175D64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188458 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CD3DDeviceLevel1>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILPoolResource::Release((CMILPoolResource *)(v2 + 488));
    *a1 = 0LL;
  }
  return result;
}
