/*
 * XREFs of ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801AF9F8
 * Callers:
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801AFA94 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShapePtr::GetD2DGeometry(CShapePtr *this, const struct CMILMatrix *a2, struct ID2D1Geometry **a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax

  v3 = *(_QWORD *)this;
  v4 = -2003292412;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)v3 + 24LL))(v3, 0LL, a3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x14Bu);
  }
  return v4;
}
