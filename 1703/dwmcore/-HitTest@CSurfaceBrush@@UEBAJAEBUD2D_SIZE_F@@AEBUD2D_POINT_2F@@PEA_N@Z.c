/*
 * XREFs of ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E810
 * Callers:
 *     <none>
 * Callees:
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001EA38 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::HitTest(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v6; // rcx
  unsigned int v9; // ebx
  bool v10; // r15
  int v11; // eax
  CRectanglesShape *v12; // rcx
  void *(__fastcall *v13)(CRectanglesShape *__hidden, unsigned int); // rax
  struct CShape *v15; // [rsp+38h] [rbp-38h] BYREF
  char v16; // [rsp+40h] [rbp-30h]
  _BYTE v17[40]; // [rsp+48h] [rbp-28h] BYREF
  CRectanglesShape *v18; // [rsp+A0h] [rbp+30h]

  v6 = *((_QWORD *)this + 12);
  if ( !v6 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 61LL) )
  {
    *a4 = 0;
    v9 = 0;
    if ( a2->width <= 0.0
      || a2->height <= 0.0
      || (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 176LL))(this) )
    {
      return v9;
    }
    v18 = 0LL;
    v15 = 0LL;
    v16 = 1;
    v10 = (int)CSurfaceBrush::ComputeLayout(this, a2, 0LL, (struct CSurfaceBrush::LayoutData *)v17, &v15) >= 0;
    if ( v16 && v15 )
      v18 = v15;
    if ( v10 && (v11 = CShape::FillContainsPoint(v18, a3, a4), v9 = v11, v11 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x15Bu);
      v12 = v18;
      if ( v18 )
      {
        v13 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v18;
LABEL_13:
        if ( v13 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v12, 1u);
        else
          v13(v12, 1u);
      }
    }
    else
    {
      v12 = v18;
      if ( v18 )
      {
        v13 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v18;
        goto LABEL_13;
      }
    }
    return v9;
  }
  return 0LL;
}
