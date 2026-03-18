/*
 * XREFs of ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C469C
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x1800050E0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180055E70 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180189B60 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x18008B008 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall D2DMatrixHelper::ComputeRectangleTransform(
        const struct D2D_RECT_F *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float *v4; // rdx
  float *v5; // rcx
  __int64 v6; // r8
  char v7; // r9
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // xmm1_8
  __int64 v19; // r10
  _DWORD v20[6]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+64h] [rbp-Ch]

  if ( AreEqual(this, a2) )
  {
    *(_OWORD *)v6 = _xmm;
    *(_QWORD *)(v6 + 16) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  else
  {
    v9 = *v5;
    v10 = v5[1];
    v11 = v5[2] - *v5;
    v12 = v5[3] - v10;
    if ( v11 == 0.0 && v12 == 0.0 )
    {
      return 0;
    }
    else
    {
      v13 = *v4;
      v14 = v4[2];
      v20[1] = 0;
      v20[2] = 0;
      *(float *)&v20[4] = v13;
      v15 = (float)(v14 - v13) / v11;
      v16 = v4[1];
      *(float *)v20 = v15;
      v17 = v4[3];
      *(float *)&v20[5] = v16;
      *(float *)&v20[3] = (float)(v17 - v16) / v12;
      v23 = _xmm;
      v24 = LODWORD(v9) ^ _xmm;
      v25 = LODWORD(v10) ^ _xmm;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v21,
        (const struct D2D1::Matrix3x2F *)&v23,
        (const struct D2D1::Matrix3x2F *)v20);
      v18 = v22;
      *(_OWORD *)v19 = v21;
      *(_QWORD *)(v19 + 16) = v18;
    }
  }
  return v7;
}
