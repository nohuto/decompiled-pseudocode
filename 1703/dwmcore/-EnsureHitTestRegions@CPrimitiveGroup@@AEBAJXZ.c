/*
 * XREFs of ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000BB34
 * Callers:
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000C770 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000B598 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, HitTestRegions, 0x4C3u);
  }
  return v3;
}
