/*
 * XREFs of ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18015DAC0
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028690 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800293F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180029600 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028CA0 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800593F0 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x18018FC20 (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::AppendSizePreferenceTransform(__int64 a1, float *a2, CMILMatrix *a3)
{
  char v5; // di
  __int64 v7; // rax
  int v8; // eax
  float v9; // xmm4_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  _OWORD v19[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+88h] [rbp-80h]
  _BYTE v21[64]; // [rsp+98h] [rbp-70h] BYREF
  int v22; // [rsp+D8h] [rbp-30h]
  float v23; // [rsp+E8h] [rbp-20h] BYREF
  float v24; // [rsp+ECh] [rbp-1Ch]
  float v25; // [rsp+F0h] [rbp-18h]
  float v26; // [rsp+F4h] [rbp-14h]
  _QWORD v27[2]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = 0;
  v22 = 0;
  CCompositionSurfaceBitmap::GetTransform(a1, (__int64)v21, v27);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v21, (__int64)v27, &v23);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 168);
    if ( v8 != 1 )
    {
      v9 = 0.0;
      v10 = v25 - v23;
      if ( (float)(v25 - v23) > 0.0 )
      {
        v11 = v26 - v24;
        if ( (float)(v26 - v24) > 0.0 )
        {
          v12 = a2[2] - *a2;
          v13 = a2[3] - a2[1];
          v19[0] = _xmm;
          v20 = 32085;
          v19[1] = _xmm;
          v19[2] = _xmm;
          v19[3] = _xmm;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - v10)) & _xmm) > 0.00390625
            || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - v11)) & _xmm), v14 > 0.00390625) )
          {
            if ( v8 )
            {
              v15 = 0.0;
              v16 = v12 / v10;
              v17 = (float)(v12 / v10) * v11;
              if ( v13 < v17 )
              {
                v16 = v13 / v11;
                v9 = (float)(v12 - (float)((float)(v13 / v11) * v10)) * 0.5;
              }
              else
              {
                v15 = (float)(v13 - v17) * 0.5;
              }
              CMILMatrix::Set2DScaleAndOffset((CMILMatrix *)v19, v16, v16, v9, v15);
            }
            else
            {
              CMILMatrix::SetScale((CMILMatrix *)v19, v12 / v10, v13 / v11, 1.0, 0.0, 0.0, 0.0);
            }
            CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v19);
            return 1;
          }
        }
      }
    }
  }
  return v5;
}
