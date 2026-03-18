/*
 * XREFs of ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathGeometry@@@Z @ 0x1801CC370
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801CBD90 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1801CC4E4 (-IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometr.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateIntersectedD2DGeometry(
        const struct MilPoint2F *a1,
        const bool *a2,
        int a3,
        struct ID2D1PathGeometry **a4)
{
  unsigned int v4; // edi
  int v5; // ebp
  int v7; // ebx
  bool i; // r9
  signed int v11; // eax

  v4 = 0;
  v5 = 0;
  v7 = a3;
  for ( i = 1; v7 > 0; ++a2 )
  {
    if ( *a2 )
    {
      v11 = CRoundedRectangleShape::IntersectGeometryBuilder(a1, &dword_18021C9E0[7 * v5], a4, i);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x123u);
        return v4;
      }
      i = 0;
      --v7;
    }
    ++v5;
  }
  return v4;
}
