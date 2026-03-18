/*
 * XREFs of ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x1801B0958
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B0F30 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEA_NPEAH@Z @ 0x1801B0A24 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEA_NPEAH@Z.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x1801B0CFC (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathGeometry@@@Z @ 0x1801B0E88 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathG.c)
 */

__int64 __fastcall CRoundedRectangleShape::BuildRoundedRectangleShape(CRoundedRectangleShape *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v6; // [rsp+30h] [rbp-69h] BYREF
  bool v7[4]; // [rsp+34h] [rbp-65h] BYREF
  struct ID2D1PathGeometry *v8; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v9[160]; // [rsp+40h] [rbp-59h] BYREF

  v8 = 0LL;
  v6 = 0;
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct MilPoint2F *)v9, v7, &v6);
  if ( v6 )
  {
    v4 = CRoundedRectangleShape::CreateIntersectedD2DGeometry((const struct MilPoint2F *)v9, v7, v6, &v8);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x75u);
      return v3;
    }
    goto LABEL_5;
  }
  v2 = CRoundedRectangleShape::CreateFullRectD2DGeometry((const struct MilPoint2F *)v9, &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
LABEL_5:
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 7);
    *((_QWORD *)this + 7) = v8;
    return v3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6Eu);
  return v3;
}
