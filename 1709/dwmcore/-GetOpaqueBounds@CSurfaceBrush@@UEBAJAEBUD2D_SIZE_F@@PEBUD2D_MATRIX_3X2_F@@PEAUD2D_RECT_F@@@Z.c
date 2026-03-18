/*
 * XREFs of ?GetOpaqueBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x1801762F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180047BD0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1800C4D38 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetOpaqueBounds(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  bool v10; // r14
  struct CShape *v11; // rdi
  struct CShape *v12; // rsi
  CRectanglesShape *v13; // rcx
  CRectanglesShape *(__fastcall *v14)(CRectanglesShape *, char); // rax
  signed int v15; // eax
  CRectanglesShape *(__fastcall *v16)(CRectanglesShape *, char); // rax
  CShape *v18; // [rsp+30h] [rbp-39h] BYREF
  struct CShape *v19[2]; // [rsp+38h] [rbp-31h] BYREF
  char v20; // [rsp+48h] [rbp-21h]
  _BYTE v21[40]; // [rsp+50h] [rbp-19h] BYREF
  struct D2D_RECT_F v22; // [rsp+78h] [rbp+Fh] BYREF

  *a4 = 0LL;
  v8 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 192LL))(this) )
  {
    v9 = *((_QWORD *)this + 13);
    if ( v9 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9) )
      {
        v18 = 0LL;
        v19[1] = 0LL;
        v19[0] = (struct CShape *)&v18;
        v20 = 1;
        v10 = (int)CSurfaceBrush::ComputeLayout(this, a2, a3, 0, (struct CSurfaceBrush::LayoutData *)v21, &v19[1]) >= 0;
        if ( v20 )
        {
          v11 = v19[0];
          v12 = v19[1];
          v13 = *(CRectanglesShape **)v19[0];
          if ( v19[1] != *(struct CShape **)v19[0] )
          {
            if ( v13 )
            {
              v14 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v13;
              if ( v14 == CRectanglesShape::`scalar deleting destructor' )
                CRectanglesShape::`scalar deleting destructor'(v13, 1);
              else
                v14(v13, 1);
            }
            *(_QWORD *)v11 = v12;
          }
        }
        if ( v10 && CShape::IsAxisAlignedRectangle(v18) )
        {
          v15 = (*(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v18 + 32LL))(
                  v18,
                  &v22,
                  0LL);
          v8 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x253u);
          }
          else
          {
            *(struct D2D_RECT_F *)v19 = v22;
            *a4 = v22;
          }
        }
        if ( v18 )
        {
          v16 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v18;
          if ( v16 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v18, 1);
          else
            v16(v18, 1);
        }
      }
    }
  }
  return v8;
}
