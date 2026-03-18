/*
 * XREFs of ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020C830
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1802091A8 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetD2DGeometry(
        CPathData **this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int D2DGeometry; // eax
  unsigned int v4; // ebx

  D2DGeometry = CPathData::GetD2DGeometry(this[2], a2, a3);
  v4 = D2DGeometry;
  if ( D2DGeometry < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x1Au);
  return v4;
}
