/*
 * XREFs of ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029A4C
 * Callers:
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E1D8 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180023584 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180088340 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800297CC (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006F050 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetBoundsSafe(CGeometry *this, struct D2D_SIZE_F *a2, _OWORD *a3)
{
  int v3; // edi
  __int64 v7; // rbx
  CRectanglesShape *v8; // rbx
  __int64 (__fastcall *v9)(CRegionShape *); // rax
  int TightBounds; // eax
  int ShapeDataWorker; // eax
  void *(__fastcall *v13)(CRectanglesShape *__hidden, unsigned int); // rax
  int v14; // eax
  CRectanglesShape *v15; // [rsp+30h] [rbp-30h] BYREF
  char v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h]

  v15 = 0LL;
  v3 = 0;
  v16 = 0;
  if ( *((_BYTE *)this + 96) || (v7 = *((_QWORD *)this + 2), GetCurrentThreadId() != *(_DWORD *)(v7 + 592)) )
  {
    if ( !*((_BYTE *)this + 96) && (*((_BYTE *)this + 32) & 1) == 0 )
    {
      v8 = (CRectanglesShape *)*((_QWORD *)this + 10);
      if ( v8 )
      {
        CShapePtr::Release((CShapePtr *)&v15);
        v15 = v8;
        v16 = 0;
        goto LABEL_6;
      }
    }
    ShapeDataWorker = CGeometry::GetShapeDataWorker(this, (unsigned __int64)a2, (struct CShapePtr *)&v15);
    v3 = ShapeDataWorker;
    if ( ShapeDataWorker < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataWorker, 0x5Du);
    goto LABEL_23;
  }
  if ( (*((_BYTE *)this + 32) & 1) == 0 )
    goto LABEL_4;
  v14 = CGeometry::GetShapeDataWorker(this, (unsigned __int64)a2, (CGeometry *)((char *)this + 80));
  v3 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4Eu);
LABEL_23:
    v8 = v15;
    goto LABEL_6;
  }
  *((_DWORD *)this + 8) &= ~1u;
LABEL_4:
  v8 = (CRectanglesShape *)*((_QWORD *)this + 10);
  if ( v16 && v15 )
    (**(void (__fastcall ***)(CRectanglesShape *, __int64))v15)(v15, 1LL);
  v15 = v8;
  v16 = 0;
LABEL_6:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x26u);
  }
  else
  {
    v9 = *(__int64 (__fastcall **)(CRegionShape *))(*(_QWORD *)v8 + 32LL);
    if ( v9 == CRegionShape::GetTightBounds )
    {
      TightBounds = CRegionShape::GetTightBounds(v8);
    }
    else if ( (char *)v9 == (char *)CRectanglesShape::GetTightBounds )
    {
      TightBounds = CRectanglesShape::GetTightBounds(v8, a3, 0LL);
    }
    else
    {
      TightBounds = ((__int64 (__fastcall *)(CRectanglesShape *, _OWORD *, _QWORD))v9)(v8, a3, 0LL);
    }
    v3 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x27u);
  }
  if ( v3 == -2003304438 )
  {
    v3 = 0;
    v17 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v16 && v15 )
  {
    v13 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v15;
    if ( v13 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v15, 1u);
    else
      v13(v15, 1u);
  }
  return (unsigned int)v3;
}
