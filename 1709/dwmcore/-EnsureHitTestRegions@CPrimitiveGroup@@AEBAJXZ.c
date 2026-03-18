/*
 * XREFs of ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026844
 * Callers:
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180027EA0 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026030 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  int HitTestRegions; // eax

  v3 = 0;
  if ( !*((_BYTE *)this + 88) )
  {
    HitTestRegions = CPrimitiveGroup::CreateHitTestRegions(this, a2, a3);
    v3 = HitTestRegions;
    if ( HitTestRegions < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HitTestRegions, 0x476u);
  }
  return v3;
}
