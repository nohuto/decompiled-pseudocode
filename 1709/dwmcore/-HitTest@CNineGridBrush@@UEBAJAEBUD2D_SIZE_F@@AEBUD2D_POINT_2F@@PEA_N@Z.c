/*
 * XREFs of ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801747B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800B5CA0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800BC75C (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1800C4D38 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::HitTest(
        CSurfaceBrush **this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // edi
  signed int v9; // eax
  signed int v10; // eax
  struct D2D_RECT_F *v11; // r9
  FLOAT v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  struct D2D_MATRIX_3X2_F v16; // [rsp+30h] [rbp-50h] BYREF
  float v17; // [rsp+48h] [rbp-38h]
  float v18; // [rsp+4Ch] [rbp-34h]
  struct D2D_RECT_F v19; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-18h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( a2->width != 0.0
    && a2->height != 0.0
    && !(*((unsigned __int8 (__fastcall **)(CSurfaceBrush **))*this + 24))(this) )
  {
    v9 = (*((__int64 (__fastcall **)(CSurfaceBrush **, _QWORD, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))*this
          + 21))(
           this,
           0LL,
           a2,
           &v16);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x9Bu);
      return v4;
    }
    if ( IsPointInRect(a3, (const struct MilRectF *)&v16) )
    {
      *a4 = 1;
      if ( *((_BYTE *)this + 120) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *, __int64))(*(_QWORD *)this[10] + 48LL))(this[10], 124LL) )
        {
          v10 = CSurfaceBrush::ComputeLayout(this[10], a2, 0LL, 0, (struct CSurfaceBrush::LayoutData *)&v19, 0LL);
          v4 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xADu);
            return v4;
          }
          D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)v20, &v19, &v16, v11);
        }
        v12 = (float)(*((float *)this + 23) * *((float *)this + 22)) + v16.m11;
        v13 = *((float *)this + 29) * *((float *)this + 28);
        v16.dy = (float)(*((float *)this + 25) * *((float *)this + 24)) + v16.m12;
        v14 = *((float *)this + 27) * *((float *)this + 26);
        v16.dx = v12;
        v17 = v16.m21 - v14;
        v18 = v16.m22 - v13;
        if ( IsPointInRect(a3, (const struct MilRectF *)v16.m[2]) )
          *a4 = 0;
      }
    }
  }
  return v4;
}
