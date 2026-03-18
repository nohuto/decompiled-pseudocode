/*
 * XREFs of ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x1800BF658
 * Callers:
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x18003D474 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801AD898 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801B725C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
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
