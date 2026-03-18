/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800986A8
 * Callers:
 *     ?CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180002530 (-CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180015430 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18001C3F0 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18006C0D4 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A84D0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  char result; // al
  double v5; // xmm3_8
  float v6; // xmm4_4
  float v7; // xmm0_4
  double v8; // xmm3_8
  float v9; // xmm5_4
  float v10; // xmm1_4
  double v11; // xmm0_8
  float v12; // xmm1_4
  float v13; // xmm1_4
  char v14; // cl

  *(_OWORD *)a1 = _xmm;
  *(_BYTE *)(a1 + 65) = 125;
  result = 125;
  *(_OWORD *)(a1 + 16) = _xmm;
  *(_OWORD *)(a1 + 32) = _xmm;
  *(_OWORD *)(a1 + 48) = _xmm;
  *(_BYTE *)(a1 + 64) = 85;
  v5 = (a3[2] - *a3) / (a2[2] - *a2);
  v6 = v5;
  *(float *)a1 = v6;
  v7 = *a3 - *a2 * v5;
  *(float *)(a1 + 48) = v7;
  v8 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v9 = v8;
  *(float *)(a1 + 20) = v9;
  v10 = a3[1];
  v11 = a2[1];
  *(_BYTE *)(a1 + 64) = 84;
  *(_BYTE *)(a1 + 65) = 125;
  *(float *)&v11 = v10 - v11 * v8;
  *(_DWORD *)(a1 + 52) = LODWORD(v11);
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 - 1.0)) & _xmm);
  if ( v12 >= 0.00012207031
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v9 - 1.0)) & _xmm), v13 >= 0.00012207031) )
  {
    v14 = 124;
  }
  else
  {
    v14 = 84;
  }
  *(_BYTE *)(a1 + 64) = v14;
  return result;
}
