/*
 * XREFs of ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180025800
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180047C84 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1800C4D38 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  CShape *v18; // [rsp+A0h] [rbp+30h]

  v6 = *((_QWORD *)this + 12);
  if ( !v6 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 15LL) )
  {
    *a4 = 0;
    v9 = 0;
    if ( a2->width <= 0.0
      || a2->height <= 0.0
      || (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 192LL))(this) )
    {
      return v9;
    }
    v18 = 0LL;
    v15 = 0LL;
    v16 = 1;
    v10 = (int)CSurfaceBrush::ComputeLayout(this, a2, 0LL, 0, (struct CSurfaceBrush::LayoutData *)v17, &v15) >= 0;
    if ( v16 && v15 )
      v18 = v15;
    if ( v10 && (v11 = CShape::FillContainsPoint(v18, a3, a4), v9 = v11, v11 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x182u);
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
