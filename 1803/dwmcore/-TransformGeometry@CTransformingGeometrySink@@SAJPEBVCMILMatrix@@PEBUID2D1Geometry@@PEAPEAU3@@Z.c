/*
 * XREFs of ?TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z @ 0x18020AEA4
 * Callers:
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020AB80 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x18020ACD8 (-GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CTransformingGeometrySink::TransformGeometry(
        const struct CMILMatrix *a1,
        const struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  int D2DGeometry; // eax
  unsigned int v4; // ebx
  void **v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  void **v8; // [rsp+40h] [rbp-28h]
  const struct CMILMatrix *v9; // [rsp+48h] [rbp-20h]
  __int128 v10; // [rsp+50h] [rbp-18h]

  v7 = 0;
  v6 = &CTransformingGeometrySink::`vftable'{for `CMILCOMBase'};
  v9 = a1;
  v8 = &CTransformingGeometrySink::`vftable'{for `ID2D1SimplifiedGeometrySink'};
  v10 = 0LL;
  D2DGeometry = CTransformingGeometrySink::GetD2DGeometry((CTransformingGeometrySink *)&v6, a2, a3);
  v4 = D2DGeometry;
  if ( D2DGeometry < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x4Du);
  return v4;
}
