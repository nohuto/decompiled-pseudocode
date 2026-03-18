/*
 * XREFs of ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180017664
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800925D0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A9EE4 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1800177B8 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800640D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::GetWindowClipShape(CWindowNode *this, struct CShapePtr *a2)
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
  int ShapeData; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  char v20; // [rsp+40h] [rbp-39h]
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int32 v22; // [rsp+50h] [rbp-29h]
  float v23; // [rsp+54h] [rbp-25h]
  _BYTE v24[80]; // [rsp+60h] [rbp-19h] BYREF

  v2 = *((_QWORD *)this + 97);
  v3 = 0;
  v18 = 0LL;
  if ( v2 && *(_BYTE *)(v2 + 152) )
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  else
  {
    v6 = 0;
    v7 = *((_DWORD *)this + 163) - *((_DWORD *)this + 161);
    v8 = *((_DWORD *)this + 162);
    v19 = 0LL;
    v9 = v8 - *((_DWORD *)this + 160);
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
                  *((CGeometry **)this + 97),
                  (const struct D2D_SIZE_F *)((char *)this + 132),
                  (struct CShapePtr *)&v19);
    v3 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0xE59u);
    }
    else
    {
      v15 = CShape::Combine(v19, v14, v24, 0LL, 1, &v18);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xE5Fu);
      }
      else
      {
        CShapePtr::Release(a2);
        v16 = v18;
        v18 = 0LL;
        *(_QWORD *)a2 = v16;
        *((_BYTE *)a2 + 8) = 1;
      }
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v24);
    CShapePtr::Release((CShapePtr *)&v19);
  }
  SAFE_DELETE<CShape>(&v18);
  return v3;
}
