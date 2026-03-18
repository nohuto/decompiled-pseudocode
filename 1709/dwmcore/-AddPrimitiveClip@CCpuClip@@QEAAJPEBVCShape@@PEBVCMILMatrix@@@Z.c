/*
 * XREFs of ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1800B6F60
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1800B6E04 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 */

__int64 __fastcall CCpuClip::AddPrimitiveClip(CCpuClip *this, const struct CShape *a2, const struct CMILMatrix *a3)
{
  CRegionShape **v3; // rdi
  signed int v7; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  signed int v11; // eax
  struct CShape *v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = (CRegionShape **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (v7 = CCpuClip::ConvertContextDependentClipToLocal(this), v8 = v7, v7 >= 0) )
  {
    if ( *v3 )
    {
      v11 = CShape::Combine((__int64)*v3, (__int64)a2, (__int64)a2, (__int64)a3, 1, &v12);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x4Au);
        return v8;
      }
    }
    else
    {
      v9 = CShape::CopyShape(a2, a3, &v12);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x40u);
        return v8;
      }
    }
    CShapePtr::Release(v3);
    *v3 = v12;
    *((_BYTE *)v3 + 8) = 1;
    *((_BYTE *)this + 32) = 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x3Au);
  }
  return v8;
}
