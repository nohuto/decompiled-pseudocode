/*
 * XREFs of ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180098048
 * Callers:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180022DE0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180031E04 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180099174 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CShapePtr::CopyShape(CShape **this, const struct CMILMatrix *a2, struct CShape **a3)
{
  CShape *v3; // rcx
  unsigned int v4; // ebx
  signed int v5; // eax

  v3 = *this;
  v4 = -2003292412;
  if ( v3 )
  {
    v5 = CShape::CopyShape(v3, a2, a3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x110u);
  }
  return v4;
}
