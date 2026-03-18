/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x18018CD60
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x18018D580 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x18018D8F0 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18018D0C8 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeDefault(CMotion *this)
{
  float v1; // xmm0_4
  float v3; // xmm6_4
  int v4; // eax
  float v5; // xmm2_4
  double v6; // xmm0_8
  float v7; // xmm3_4

  v1 = *((float *)this + 16);
  v3 = *((float *)this + 5);
  v4 = v1 > v3;
  if ( v3 > *((float *)this + 9) )
    v4 = 2;
  if ( v4 )
  {
    if ( (*((_BYTE *)this + 8) & 1) != 0 )
    {
      v5 = 0.0;
      if ( *((float *)this + 6) != 0.0 )
      {
        v6 = (*(double (__fastcall **)(CMotion *))(*(_QWORD *)this + 32LL))(this);
        v5 = *(float *)&v6;
      }
      v7 = *((float *)this + 16);
      if ( v7 <= v3 )
        v7 = *((float *)this + 9);
      CMotion::InitializeDefaultBoundaryInertiaModifier(this, v3, v5, v7, *((float *)this + 6));
    }
    else
    {
      return fminf(fmaxf(v3, v1), *((float *)this + 9));
    }
  }
  return v3;
}
