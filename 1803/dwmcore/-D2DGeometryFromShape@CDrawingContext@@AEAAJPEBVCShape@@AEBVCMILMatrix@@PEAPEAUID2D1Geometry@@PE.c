/*
 * XREFs of ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18013D41C
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromShape(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct CMILMatrix *a3,
        struct ID2D1Geometry **a4,
        bool *a5)
{
  bool v6; // di
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // eax
  unsigned int v10; // ebx

  *a4 = 0LL;
  v6 = !CMILMatrix::Is2DAffine<1>((__int64)a3, 1);
  v9 = (*(__int64 (__fastcall **)(const struct CShape *, __int64, __int64))(*(_QWORD *)a2 + 24LL))(
         a2,
         v7 & -(__int64)v6,
         v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xDABu);
  }
  else if ( a5 )
  {
    *a5 = v6;
  }
  return v10;
}
