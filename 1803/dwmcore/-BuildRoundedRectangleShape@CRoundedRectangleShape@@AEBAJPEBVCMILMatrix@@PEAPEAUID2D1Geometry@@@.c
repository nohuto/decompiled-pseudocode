/*
 * XREFs of ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020C9D0
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020CFE0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEAH@Z @ 0x18020CA88 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEA.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x18020CDB0 (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathGeometry@@@Z @ 0x18020CF3C (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathG.c)
 */

__int64 __fastcall CRoundedRectangleShape::BuildRoundedRectangleShape(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v8; // [rsp+30h] [rbp-79h] BYREF
  bool v9[4]; // [rsp+34h] [rbp-75h] BYREF
  struct ID2D1PathGeometry *v10; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v11[160]; // [rsp+40h] [rbp-69h] BYREF

  v10 = 0LL;
  v8 = 0;
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct MilPoint2F *)v11, a2, v9, &v8);
  if ( v8 )
  {
    v6 = CRoundedRectangleShape::CreateIntersectedD2DGeometry((const struct MilPoint2F *)v11, v9, v8, &v10);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x75u);
      return v5;
    }
    goto LABEL_5;
  }
  v4 = CRoundedRectangleShape::CreateFullRectD2DGeometry((const struct MilPoint2F *)v11, &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
LABEL_5:
    *a3 = v10;
    return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x6Eu);
  return v5;
}
