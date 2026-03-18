/*
 * XREFs of ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x18020F340
 * Callers:
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x1801614AC (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801EC940 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper(
        CMILBrushBitmapLocalSetterWrapper *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(v1 + 112))++ == -1 )
      ++*(_DWORD *)(v1 + 112);
    *(_QWORD *)(*(_QWORD *)this + 192LL) = 0LL;
  }
}
