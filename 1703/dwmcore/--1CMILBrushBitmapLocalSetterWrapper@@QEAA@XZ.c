/*
 * XREFs of ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x180041E6C
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x1800A76A8 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800D09EC (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper(
        CMILBrushBitmapLocalSetterWrapper *this)
{
  __int64 v1; // rdx
  bool v2; // zf
  int v3; // eax

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v2 = (*(_DWORD *)(v1 + 112))++ == -1;
    v3 = *(_DWORD *)(v1 + 112);
    if ( v2 )
      v3 = 1;
    *(_DWORD *)(v1 + 112) = v3;
    *(_QWORD *)(*(_QWORD *)this + 192LL) = 0LL;
  }
}
