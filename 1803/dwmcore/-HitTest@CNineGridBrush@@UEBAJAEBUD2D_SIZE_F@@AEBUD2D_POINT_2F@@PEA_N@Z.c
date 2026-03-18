/*
 * XREFs of ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18019DB00
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18001793C (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800C3038 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::HitTest(
        CSurfaceBrush **this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  struct D2D_RECT_F *v11; // r9
  FLOAT v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  struct D2D_MATRIX_3X2_F v16; // [rsp+30h] [rbp-50h] BYREF
  float v17; // [rsp+48h] [rbp-38h]
  float v18; // [rsp+4Ch] [rbp-34h]
  D2D_RECT_F v19; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-18h] BYREF

  *a4 = 0;
  v8 = (*((__int64 (__fastcall **)(CSurfaceBrush **, _QWORD, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))*this
        + 21))(
         this,
         0LL,
         a2,
         &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x75u);
    return v9;
  }
  if ( IsPointInRect(a3, (const struct MilRectF *)&v16) )
  {
    *a4 = 1;
    if ( *((_BYTE *)this + 112) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *, __int64))(*(_QWORD *)this[9] + 48LL))(this[9], 139LL) )
      {
        v10 = CSurfaceBrush::ComputeLayout(this[9], a2, 0, (struct CContent::LayoutData *)&v19, 0LL);
        v9 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x87u);
          return v9;
        }
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)v20, &v19, &v16, v11);
      }
      v12 = (float)(*((float *)this + 21) * *((float *)this + 20)) + v16.m11;
      v13 = *((float *)this + 27) * *((float *)this + 26);
      v16.dy = (float)(*((float *)this + 23) * *((float *)this + 22)) + v16.m12;
      v14 = *((float *)this + 25) * *((float *)this + 24);
      v16.dx = v12;
      v17 = v16.m21 - v14;
      v18 = v16.m22 - v13;
      if ( IsPointInRect(a3, (const struct MilRectF *)v16.m[2]) )
        *a4 = 0;
    }
  }
  return v9;
}
