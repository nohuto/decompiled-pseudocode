/*
 * XREFs of ?GetOpaqueBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x180161B80
 * Callers:
 *     ?GetOpaqueBounds@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x180162110 (-GetOpaqueBounds@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F.c)
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  int v15; // eax
  CRectanglesShape *(__fastcall *v16)(CRectanglesShape *, char); // rax
  CShape *v18; // [rsp+30h] [rbp-39h] BYREF
  struct CShape *v19[2]; // [rsp+38h] [rbp-31h] BYREF
  char v20; // [rsp+48h] [rbp-21h]
  _BYTE v21[40]; // [rsp+50h] [rbp-19h] BYREF
  struct D2D_RECT_F v22; // [rsp+78h] [rbp+Fh] BYREF

  *a4 = 0LL;
  v8 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 176LL))(this) )
  {
    v9 = *((_QWORD *)this + 13);
    if ( v9 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 96LL))(v9) )
      {
        v18 = 0LL;
        v19[1] = 0LL;
        v19[0] = (struct CShape *)&v18;
        v20 = 1;
        v10 = (int)CSurfaceBrush::ComputeLayout(this, a2, a3, (struct CSurfaceBrush::LayoutData *)v21, &v19[1]) >= 0;
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
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x23Au);
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
