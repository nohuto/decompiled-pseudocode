/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18006E594 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??_GCDisplay@@EEAAPEAXI@Z @ 0x1800B7130 (--_GCDisplay@@EEAAPEAXI@Z.c)
 *     ??1CLegacyMilBrush@@UEAA@XZ @ 0x1800B8C5C (--1CLegacyMilBrush@@UEAA@XZ.c)
 *     ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800C98A0 (-Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z.c)
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800CA6B8 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x1800CAB74 (--1CDXGIEnumeration@@MEAA@XZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800D7918 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18019EF60 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C893C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801EC940 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED380 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1801F879C (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801FE910 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801FEEC4 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 *     ??1CBspNode@@UEAA@XZ @ 0x18021EED8 (--1CBspNode@@UEAA@XZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18021F04C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterfaceNoNULL<CPolygon>(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return result;
}
