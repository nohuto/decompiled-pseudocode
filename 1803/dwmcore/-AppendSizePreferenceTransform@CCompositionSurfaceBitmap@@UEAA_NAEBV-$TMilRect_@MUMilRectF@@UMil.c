/*
 * XREFs of ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180186A50
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800070B4 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180007470 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800079B0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007240 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800A3834 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1801C714C (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::AppendSizePreferenceTransform(__int64 a1, float *a2, CMILMatrix *a3)
{
  char v5; // di
  __int64 v7; // rax
  int v8; // eax
  float v9; // xmm4_4
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  _OWORD v18[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v19; // [rsp+88h] [rbp-80h]
  _BYTE v20[64]; // [rsp+98h] [rbp-70h] BYREF
  int v21; // [rsp+D8h] [rbp-30h]
  float v22; // [rsp+E8h] [rbp-20h] BYREF
  float v23; // [rsp+ECh] [rbp-1Ch]
  float v24; // [rsp+F0h] [rbp-18h]
  float v25; // [rsp+F4h] [rbp-14h]
  _QWORD v26[2]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = 0;
  v21 = 0;
  CCompositionSurfaceBitmap::GetTransform(a1, (__int64)v20, v26);
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v20, (__int64)v26, &v22);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 168);
    if ( v8 != 1 )
    {
      v9 = 0.0;
      v10 = v24 - v22;
      if ( (float)(v24 - v22) > 0.0 )
      {
        v11 = v25 - v23;
        if ( (float)(v25 - v23) > 0.0 )
        {
          v12 = a2[3] - a2[1];
          v18[0] = _xmm;
          v19 = 32085;
          v18[3] = _xmm;
          v13 = a2[2] - *a2;
          v18[1] = _xmm;
          v18[2] = _xmm;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - v10)) & _xmm) > 0.00390625
            || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - v11)) & _xmm), v14 > 0.00390625) )
          {
            v15 = v13 / v10;
            if ( v8 )
            {
              v16 = 0.0;
              if ( v12 < (float)(v15 * v11) )
              {
                v15 = v12 / v11;
                v9 = (float)(v13 - (float)((float)(v12 / v11) * v10)) * 0.5;
              }
              else
              {
                v16 = (float)(v12 - (float)(v15 * v11)) * 0.5;
              }
              CMILMatrix::Set2DScaleAndOffset((CMILMatrix *)v18, v15, v15, v9, v16);
            }
            else
            {
              CMILMatrix::SetScale((CMILMatrix *)v18, v15, v12 / v11, 1.0, 0.0, 0.0, 0.0);
            }
            CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v18);
            return 1;
          }
        }
      }
    }
  }
  return v5;
}
