/*
 * XREFs of ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180099020
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009B140 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180179974 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180035280 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x180097EF8 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::GetWindowClipShape(CWindowNode *this, CRegionShape **a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  unsigned int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  __m128i v10; // xmm0
  int v11; // eax
  unsigned __int32 v12; // xmm0_4
  signed int ShapeData; // eax
  __int64 v14; // rdx
  signed int v15; // eax
  CRegionShape *v16; // rax
  CRegionShape *v18; // [rsp+30h] [rbp-39h] BYREF
  CRegionShape *v19; // [rsp+38h] [rbp-31h] BYREF
  char v20; // [rsp+40h] [rbp-29h]
  __int64 v21; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int32 v22; // [rsp+50h] [rbp-19h]
  float v23; // [rsp+54h] [rbp-15h]
  _BYTE v24[64]; // [rsp+60h] [rbp-9h] BYREF

  v2 = *((_QWORD *)this + 105);
  v3 = 0;
  v18 = 0LL;
  if ( v2 && *(_BYTE *)(v2 + 120) )
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *a2 = (CRegionShape *)&CRectanglesShape::sc_emptyShape;
  }
  else
  {
    v6 = 0;
    v7 = *((_DWORD *)this + 161) - *((_DWORD *)this + 159);
    v8 = *((_DWORD *)this + 160);
    v19 = 0LL;
    v9 = v8 - *((_DWORD *)this + 158);
    v20 = 0;
    if ( v9 >= 0 )
      v6 = v9;
    v21 = 0LL;
    v10 = _mm_cvtsi32_si128(v6);
    v11 = 0;
    v12 = _mm_cvtepi32_ps(v10).m128_u32[0];
    if ( v7 >= 0 )
      v11 = v7;
    v22 = v12;
    v23 = (float)v11;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v24, (const struct MilRectF *)&v21);
    ShapeData = CGeometry::GetShapeData(
                  *((CGeometry **)this + 105),
                  (const struct D2D_SIZE_F *)((char *)this + 132),
                  (struct CShapePtr *)&v19);
    v3 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, 0x1193u);
    }
    else
    {
      v15 = CShape::Combine((__int64)v19, v14, (__int64)v24, 0LL, 1, &v18);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x1199u);
      }
      else
      {
        CShapePtr::Release(a2);
        v16 = v18;
        v18 = 0LL;
        *a2 = v16;
        *((_BYTE *)a2 + 8) = 1;
      }
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v24);
    CShapePtr::Release(&v19);
  }
  SAFE_DELETE<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v18);
  return v3;
}
