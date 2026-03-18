/*
 * XREFs of ?AdjustSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXIPEAIPEAM1@Z @ 0x18018BFE8
 * Callers:
 *     ?CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPEAI2PEAVCMILMatrix@@PEAVCMilPoint2F@@@Z @ 0x18018C38C (-CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPE.c)
 * Callees:
 *     <none>
 */

void __fastcall CViewportAlignedIntermediateRealizer::AdjustSurfaceSizeAndMapping1D(
        CViewportAlignedIntermediateRealizer *this,
        unsigned int a2,
        unsigned int *a3,
        float *a4,
        float *a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  float v8; // xmm2_4
  float v9; // xmm1_4

  if ( *a3 > 0x7FE )
  {
    v5 = 2048;
    if ( a2 <= 0x7FE )
      v5 = 2046;
    v6 = v5;
    v7 = *a3;
    *a3 = v6;
    v8 = (float)v6 / (float)v7;
    v9 = v8 * *a4;
    *a5 = v8 * *a5;
    *a4 = v9;
  }
}
