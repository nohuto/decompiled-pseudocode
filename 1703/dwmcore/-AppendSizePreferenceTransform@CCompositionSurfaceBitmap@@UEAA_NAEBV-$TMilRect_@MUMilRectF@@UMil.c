/*
 * XREFs of ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180037A90
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A788 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000AD30 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000B0F0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000AA10 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x180011304 (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18009A7C0 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CCompositionSurfaceBitmap::AppendSizePreferenceTransform(__int64 a1, float *a2, CMILMatrix *a3)
{
  char v5; // di
  __int64 v7; // rax
  int v9; // eax
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
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
  CMILMatrix::Transform2DBoundsHelper<0>(v21, v27, &v23);
  v7 = *(_QWORD *)(a1 + 416);
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 136);
    if ( v9 != 1 )
    {
      v10 = 0.0;
      v11 = v25 - v23;
      if ( (float)(v25 - v23) > 0.0 )
      {
        v12 = v26 - v24;
        if ( (float)(v26 - v24) > 0.0 )
        {
          v13 = a2[2] - *a2;
          v14 = a2[3] - a2[1];
          v19[0] = _xmm;
          v20 = 32085;
          v19[1] = _xmm;
          v19[2] = _xmm;
          v19[3] = _xmm;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - v11)) & _xmm) > 0.00390625
            || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - v12)) & _xmm), v15 > 0.00390625) )
          {
            if ( v9 )
            {
              v16 = 0.0;
              v17 = v13 / v11;
              v18 = (float)(v13 / v11) * v12;
              if ( v14 < v18 )
              {
                v17 = v14 / v12;
                v10 = (float)(v13 - (float)((float)(v14 / v12) * v11)) * 0.5;
              }
              else
              {
                v16 = (float)(v14 - v18) * 0.5;
              }
              CMILMatrix::Set2DScaleAndOffset((CMILMatrix *)v19, v17, v17, v10, v16);
            }
            else
            {
              CMILMatrix::SetScale((CMILMatrix *)v19, v13 / v11, v14 / v12, 1.0, 0.0, 0.0, 0.0);
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
