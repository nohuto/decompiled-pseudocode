/*
 * XREFs of ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096EA0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058B10 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180095178 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096A10 (-GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetShapeDataWorker(CGeometry *this, unsigned __int64 a2, struct CShapePtr *a3)
{
  struct D2D_SIZE_F *v5; // rsi
  __int64 (__fastcall *v6)(CRgnGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  signed int ShapeDataCore; // eax
  unsigned int v8; // edi
  CComponentTransform2D *v9; // rcx
  CShape *v11; // rcx
  signed int v12; // eax
  struct D2D_SIZE_F v13; // [rsp+30h] [rbp-49h] BYREF
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+48h] [rbp-31h]
  int v16; // [rsp+4Ch] [rbp-2Dh]
  __int64 v17; // [rsp+50h] [rbp-29h]
  __int64 v18; // [rsp+58h] [rbp-21h]
  __int64 v19; // [rsp+60h] [rbp-19h]
  int v20; // [rsp+68h] [rbp-11h]
  int v21; // [rsp+6Ch] [rbp-Dh]
  __int64 v22; // [rsp+70h] [rbp-9h]
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  int v25; // [rsp+80h] [rbp+7h]
  struct D2D_MATRIX_3X2_F v26; // [rsp+90h] [rbp+17h] BYREF

  v5 = (struct D2D_SIZE_F *)(a2 & -(__int64)(*((_BYTE *)this + 96) != 0));
  v6 = *(__int64 (__fastcall **)(CRgnGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 176LL);
  if ( v6 == CRectangleGeometry::GetShapeDataCore )
  {
    ShapeDataCore = CRectangleGeometry::GetShapeDataCore(this, v5, a3);
  }
  else if ( v6 == CRgnGeometry::GetShapeDataCore )
  {
    ShapeDataCore = CRgnGeometry::GetShapeDataCore(this, v5, a3);
  }
  else
  {
    ShapeDataCore = ((__int64 (__fastcall *)(CGeometry *, struct D2D_SIZE_F *))v6)(this, v5);
  }
  v8 = ShapeDataCore;
  if ( ShapeDataCore < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeDataCore, 0x80u);
  }
  else
  {
    v9 = (CComponentTransform2D *)*((_QWORD *)this + 9);
    if ( v9 )
    {
      v13 = 0LL;
      if ( v5 )
        v13 = *v5;
      if ( *(_QWORD *)a3 )
      {
        CComponentTransform2D::GetRealization(v9, &v13, &v26);
        v11 = *(CShape **)a3;
        v25 = 0;
        v15 = 0;
        v16 = 0;
        v18 = 0LL;
        v19 = 0LL;
        v21 = 0;
        v23 = 0;
        v17 = *(_QWORD *)&v26.m[1][0];
        v14 = *(_QWORD *)&v26.m11;
        v22 = *(_QWORD *)&v26.m[2][0];
        v20 = 1065353216;
        v24 = 1065353216;
        v12 = CShape::CopyShape(v11, (const struct CMILMatrix *)&v14, (struct CShape **)&v13);
        v8 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x94u);
        }
        else
        {
          CShapePtr::Release(a3);
          *(struct D2D_SIZE_F *)a3 = v13;
          *((_BYTE *)a3 + 8) = 1;
        }
      }
    }
  }
  return v8;
}
