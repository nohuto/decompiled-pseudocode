/*
 * XREFs of ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x1801C3A3C
 * Callers:
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801C3B48 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 * Callees:
 *     ?AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D@CDeviceAlignedIntermediateRealizer@@CAXPEAIPEAM1@Z @ 0x1801C397C (-AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D@CDeviceAlignedIntermediateRealizer@@CAXPEAI.c)
 *     ?CalculateSurfaceSizeAndMapping1D@CDeviceAlignedIntermediateRealizer@@AEAAXMMPEAIPEAM1@Z @ 0x1801C39B8 (-CalculateSurfaceSizeAndMapping1D@CDeviceAlignedIntermediateRealizer@@AEAAXMMPEAIPEAM1@Z.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1801C714C (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 */

void __fastcall CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
        CDeviceAlignedIntermediateRealizer *this,
        struct MilRectF *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct CMILMatrix *a5)
{
  struct CMILMatrix *v5; // r11
  __int64 v8; // r10
  CDeviceAlignedIntermediateRealizer *v9; // rcx
  CMILMatrix *v10; // r11
  float v11[4]; // [rsp+30h] [rbp-10h] BYREF
  float v12; // [rsp+50h] [rbp+10h] BYREF
  int v13; // [rsp+54h] [rbp+14h]
  float v14; // [rsp+58h] [rbp+18h] BYREF

  v13 = HIDWORD(this);
  v5 = a5;
  LODWORD(a5) = 0;
  v12 = 0.0;
  *(_OWORD *)v5 = _xmm;
  *((_WORD *)v5 + 32) = 32085;
  *((_OWORD *)v5 + 1) = _xmm;
  v11[0] = 1.0;
  v14 = 1.0;
  *((_OWORD *)v5 + 2) = _xmm;
  *((_OWORD *)v5 + 3) = _xmm;
  CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
    this,
    *(float *)a2,
    *((float *)a2 + 2),
    a3,
    v11,
    (float *)&a5);
  CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
    v9,
    *(float *)(v8 + 4),
    *(float *)(v8 + 12),
    a4,
    &v14,
    &v12);
  CDeviceAlignedIntermediateRealizer::AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D(a3, v11, (float *)&a5);
  CDeviceAlignedIntermediateRealizer::AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D(a4, &v14, &v12);
  CMILMatrix::Set2DScaleAndOffset(v10, v11[0], v14, *(float *)&a5, v12);
}
