/*
 * XREFs of ?AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D@CDeviceAlignedIntermediateRealizer@@CAXPEAIPEAM1@Z @ 0x18018BB9C
 * Callers:
 *     ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x18018BC5C (-CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAV.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceAlignedIntermediateRealizer::AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D(
        unsigned int *a1,
        float *a2,
        float *a3)
{
  int v3; // eax
  float v4; // xmm2_4
  float v5; // xmm1_4

  if ( *a1 > 0x800 )
  {
    v3 = *a1;
    *a1 = 2048;
    v4 = 2048.0 / (float)v3;
    v5 = v4 * *a2;
    *a3 = v4 * *a3;
    *a2 = v5;
  }
}
