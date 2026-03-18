/*
 * XREFs of ?CalculateSurfaceSizeAndMapping1D@CDeviceAlignedIntermediateRealizer@@AEAAXMMPEAIPEAM1@Z @ 0x180183B10
 * Callers:
 *     ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x180183B94 (-CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAV.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
        CDeviceAlignedIntermediateRealizer *this,
        float a2,
        float a3,
        unsigned int *a4,
        float *a5,
        float *a6)
{
  __m128 v6; // xmm4
  __m128 v7; // xmm3
  int v8; // ecx
  __m128 v9; // xmm1
  float v10; // xmm0_4
  int v11; // edx
  int v12; // xmm0_4
  unsigned int v13; // eax
  unsigned int v14; // ecx

  v7 = 0LL;
  v7.m128_f32[0] = a2;
  v8 = (int)a2;
  v9.m128_f32[0] = (float)(int)a2;
  v10 = _mm_cmplt_ss(v7, v9).m128_f32[0];
  v9.m128_f32[0] = a3;
  v11 = v8 + LODWORD(v10);
  v6.m128_f32[0] = (float)(int)a3;
  v12 = COERCE_UNSIGNED_INT((float)(v8 + LODWORD(v10))) ^ _xmm;
  v13 = 1;
  v14 = (int)a3 - _mm_cmplt_ss(v6, v9).m128_u32[0] - v11;
  if ( v14 > 1 )
    v13 = v14;
  *a4 = v13;
  *a5 = 1.0;
  *(_DWORD *)a6 = v12;
}
