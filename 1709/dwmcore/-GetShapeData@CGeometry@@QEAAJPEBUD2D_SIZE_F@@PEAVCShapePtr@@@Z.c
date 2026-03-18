/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C
 * Callers:
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18003D90C (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800401C0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18009653C (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180096CE0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180099020 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180099174 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18009A770 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18009CAB4 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800BFC70 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180178B94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180178C18 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180178C78 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18017EB5C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180180830 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801814F0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096EA0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  unsigned int v3; // ebp
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v10; // rbx
  signed int v11; // eax
  signed int ShapeDataWorker; // eax

  v3 = 0;
  if ( !*((_BYTE *)this + 96) && (v7 = *((_QWORD *)this + 2), GetCurrentThreadId() == *(_DWORD *)(v7 + 560)) )
  {
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
    {
      ShapeDataWorker = CGeometry::GetShapeDataWorker(this, a2, (CGeometry *)((char *)this + 80));
      v3 = ShapeDataWorker;
      if ( ShapeDataWorker < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeDataWorker, 0x4Eu);
        return v3;
      }
      *((_DWORD *)this + 8) &= ~1u;
    }
    v10 = *((_QWORD *)this + 10);
    if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
      (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
    *(_QWORD *)a3 = v10;
    *((_BYTE *)a3 + 8) = 0;
  }
  else if ( *((_BYTE *)this + 96) || (*((_BYTE *)this + 32) & 1) != 0 || (v8 = *((_QWORD *)this + 10)) == 0 )
  {
    v11 = CGeometry::GetShapeDataWorker(this, a2, a3);
    v3 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x5Du);
  }
  else
  {
    if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
      (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
    *(_QWORD *)a3 = v8;
    *((_BYTE *)a3 + 8) = 0;
  }
  return v3;
}
