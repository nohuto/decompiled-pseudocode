/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A36D8
 * Callers:
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180024900 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18005FC6C (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECE0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEAAXPEAVCMILMatrix@@@Z @ 0x180161A9C (-GetInverseDesktopMPOTransform@COverlayContext@@QEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180175AB0 (-CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801760A0 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x1801DED94 (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801E04C0 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  char result; // al
  char v5; // cl
  double v6; // xmm3_8
  float v7; // xmm4_4
  float v8; // xmm0_4
  double v9; // xmm3_8
  float v10; // xmm5_4
  float v11; // xmm1_4
  double v12; // xmm0_8
  float v13; // xmm1_4
  float v14; // xmm1_4

  *(_OWORD *)a1 = _xmm;
  *(_BYTE *)(a1 + 65) = 125;
  *(_OWORD *)(a1 + 16) = _xmm;
  result = 125;
  *(_OWORD *)(a1 + 32) = _xmm;
  *(_OWORD *)(a1 + 48) = _xmm;
  *(_BYTE *)(a1 + 64) = 85;
  v5 = 84;
  v6 = (a3[2] - *a3) / (a2[2] - *a2);
  v7 = v6;
  *(float *)a1 = v7;
  v8 = *a3 - *a2 * v6;
  *(float *)(a1 + 48) = v8;
  v9 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v10 = v9;
  *(float *)(a1 + 20) = v10;
  v11 = a3[1];
  v12 = a2[1];
  *(_BYTE *)(a1 + 64) = 84;
  *(_BYTE *)(a1 + 65) = 125;
  *(float *)&v12 = v11 - v12 * v9;
  *(_DWORD *)(a1 + 52) = LODWORD(v12);
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7 - 1.0)) & _xmm);
  if ( v13 >= 0.000081380211
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - 1.0)) & _xmm), v14 >= 0.000081380211) )
  {
    v5 = 124;
  }
  *(_BYTE *)(a1 + 64) = v5;
  return result;
}
