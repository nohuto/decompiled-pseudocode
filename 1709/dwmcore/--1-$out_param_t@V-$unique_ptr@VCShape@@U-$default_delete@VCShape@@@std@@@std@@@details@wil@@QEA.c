/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800BB0EC
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1800C4D38 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAP.c)
 * Callees:
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(__int64 a1)
{
  CRectanglesShape *v1; // rbx
  CRectanglesShape **v2; // rdi
  CRectanglesShape *v3; // rcx
  CRectanglesShape *(__fastcall *v4)(CRectanglesShape *, char); // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = *(CRectanglesShape **)(a1 + 8);
    v2 = *(CRectanglesShape ***)a1;
    v3 = **(CRectanglesShape ***)a1;
    if ( v1 != v3 )
    {
      if ( v3 )
      {
        v4 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v3;
        if ( v4 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v3, 1);
        else
          v4(v3, 1);
      }
      *v2 = v1;
    }
  }
}
