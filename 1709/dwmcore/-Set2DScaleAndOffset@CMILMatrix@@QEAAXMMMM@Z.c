/*
 * XREFs of ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x18018FC20
 * Callers:
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014D014 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18015DAC0 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x18018BC5C (-CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAV.c)
 *     ?CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPEAI2PEAVCMILMatrix@@PEAVCMilPoint2F@@@Z @ 0x18018C38C (-CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPE.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Set2DScaleAndOffset(CMILMatrix *this, float a2, float a3, float a4, float a5)
{
  char v5; // al
  float v6; // xmm1_4
  float v7; // xmm1_4
  char v8; // al

  *(_QWORD *)((char *)this + 60) = 1065353216LL;
  *((_BYTE *)this + 64) &= 0x3Cu;
  *((_BYTE *)this + 64) |= 0x40u;
  *((float *)this + 13) = a5;
  *(float *)this = a2;
  *((float *)this + 12) = a4;
  *((_QWORD *)this + 5) = 1065353216LL;
  v5 = *((_BYTE *)this + 64);
  *((float *)this + 5) = a3;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 65) = 125;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2 - 1.0)) & _xmm);
  if ( v6 >= 0.000081380211
    || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3 - 1.0)) & _xmm), v7 >= 0.000081380211) )
  {
    v8 = v5 | 0x3C;
  }
  else
  {
    v8 = v5 & 0xC3 | 0x14;
  }
  *((_BYTE *)this + 64) = v8;
}
