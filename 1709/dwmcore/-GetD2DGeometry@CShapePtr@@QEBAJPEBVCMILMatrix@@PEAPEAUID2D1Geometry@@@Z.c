/*
 * XREFs of ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18011C478
 * Callers:
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18017EB5C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShapePtr::GetD2DGeometry(CShapePtr *this, const struct CMILMatrix *a2, struct ID2D1Geometry **a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  signed int v5; // eax

  v3 = *(_QWORD *)this;
  v4 = -2003292412;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v3 + 24LL))(
           v3,
           a2,
           a3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x12Cu);
  }
  return v4;
}
