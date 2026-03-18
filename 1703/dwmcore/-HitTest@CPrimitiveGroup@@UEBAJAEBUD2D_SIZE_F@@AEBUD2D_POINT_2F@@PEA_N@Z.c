/*
 * XREFs of ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000C770
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000BB34 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::HitTest(
        CPrimitiveGroup *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  double v4; // xmm2_8
  float y; // xmm1_4
  __int64 v9; // rcx
  __int64 v11; // rcx

  *a4 = 0;
  if ( *((_QWORD *)this + 47) )
  {
    if ( a3->x >= *((float *)this + 23) && *((float *)this + 25) >= a3->x )
    {
      y = a3->y;
      if ( y >= *((float *)this + 24)
        && *((float *)this + 26) >= y
        && (int)CPrimitiveGroup::EnsureHitTestRegions(this, (__int64)a2, v4) >= 0 )
      {
        v9 = *((_QWORD *)this + 9);
        if ( v9 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 56LL))(v9, *a3, 0LL);
        v11 = *((_QWORD *)this + 10);
        if ( v11 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, *a3, 0LL);
        *a4 = 0;
      }
    }
  }
  return 0LL;
}
