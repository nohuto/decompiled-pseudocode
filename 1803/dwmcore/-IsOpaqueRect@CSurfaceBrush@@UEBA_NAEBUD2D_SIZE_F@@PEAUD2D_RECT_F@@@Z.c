/*
 * XREFs of ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180003FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18008AA10 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSurfaceBrush::IsOpaqueRect(CSurfaceBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  __int64 v5; // rcx
  bool v8; // bl
  __int64 v9; // rdx
  CShape *v10; // rdx
  CShape *v11; // [rsp+30h] [rbp-19h] BYREF
  struct CShape *v12[2]; // [rsp+38h] [rbp-11h] BYREF
  char v13; // [rsp+48h] [rbp-1h]
  struct D2D_RECT_F v14; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v15[40]; // [rsp+60h] [rbp+17h] BYREF

  v5 = *((_QWORD *)this + 12);
  if ( !v5
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 104LL))(v5)
    || (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 192LL))(this) )
  {
    return 0;
  }
  v11 = 0LL;
  v12[1] = 0LL;
  v12[0] = (struct CShape *)&v11;
  v13 = 1;
  v8 = (int)CSurfaceBrush::ComputeLayout(this, a2, 0, (struct CContent::LayoutData *)v15, &v12[1]) >= 0;
  if ( v13 )
  {
    v9 = *(_QWORD *)v12[0];
    *(_QWORD *)v12[0] = v12[1];
    if ( v9 )
      std::default_delete<CShape>::operator()();
  }
  if ( !v8
    || !CShape::IsAxisAlignedRectangle(v11)
    || (*(int (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, &v14, 0LL) < 0 )
  {
    if ( v11 )
      std::default_delete<CShape>::operator()();
    return 0;
  }
  v10 = v11;
  *(struct D2D_RECT_F *)v12 = v14;
  *a3 = v14;
  if ( v10 )
    std::default_delete<CShape>::operator()();
  return 1;
}
