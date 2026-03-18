/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x180184C70
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x180185470 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x180185860 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x180184FE4 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeDefault(CMotion *this)
{
  float v1; // xmm2_4
  float v3; // xmm6_4
  int v4; // ecx
  float v5; // xmm0_4
  float v6; // xmm1_4
  int v7; // eax
  int v8; // eax
  float v9; // xmm2_4
  double v10; // xmm0_8
  float v11; // xmm3_4

  v1 = *((float *)this + 15);
  v3 = *((float *)this + 5);
  v4 = 0;
  v5 = *((float *)this + 16);
  v6 = *((float *)this + 9);
  v7 = v5 > v1;
  if ( v1 > v6 )
    v7 = 2;
  if ( v7 )
  {
    v8 = v5 > v3;
    if ( v3 > v6 )
      v8 = 2;
    if ( v5 > v1 )
      v4 = 1;
    if ( v1 > v6 )
      v4 = 2;
    if ( v8 == v4 )
    {
      if ( (*((_BYTE *)this + 8) & 1) != 0 )
      {
        v9 = 0.0;
        if ( *((float *)this + 6) != 0.0 )
        {
          v10 = (*(double (__fastcall **)(CMotion *, __int64, __int64))(*(_QWORD *)this + 32LL))(this, 1LL, 2LL);
          v9 = *(float *)&v10;
        }
        v11 = *((float *)this + 16);
        if ( v11 <= v3 )
          v11 = *((float *)this + 9);
        CMotion::InitializeDefaultBoundaryInertiaModifier(this, v3, v9, v11, *((float *)this + 6));
      }
      else
      {
        return fminf(fmaxf(v3, v5), v6);
      }
    }
  }
  return v3;
}
