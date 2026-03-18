/*
 * XREFs of ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18017B440
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1800190E8 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CCpuClip::AddPrimitiveClip(CCpuClip *this, const struct CShape *a2, const struct CMILMatrix *a3)
{
  CRectanglesShape **v3; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  struct CShape *v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = (CRectanglesShape **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (v7 = CCpuClip::ConvertContextDependentClipToLocal((CShape **)this), v8 = v7, v7 >= 0) )
  {
    if ( *v3 )
    {
      v10 = CShape::Combine(*v3, (__int64)a2, a2, (float *)a3, 1, &v12);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x4Au);
        return v8;
      }
    }
    else
    {
      v9 = CShape::CopyShape((struct ID2D1RegionGeometry **)a2, a3, &v12);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x40u);
        return v8;
      }
    }
    CShapePtr::Release(v3);
    *v3 = v12;
    *((_BYTE *)v3 + 8) = 1;
    *((_BYTE *)this + 32) = 1;
    return v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3Au);
  return v8;
}
