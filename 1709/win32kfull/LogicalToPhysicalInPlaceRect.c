/*
 * XREFs of LogicalToPhysicalInPlaceRect @ 0x1C01C3D4C
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LogicalToPhysicalInPlaceRect(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  float *v5; // rax
  float v6; // xmm1_4
  float v7; // xmm2_4
  int v8; // edx
  int v9; // ecx
  float v10; // xmm0_4
  float v11; // xmm0_4
  __m128i v12; // xmm0

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 304) & 0x20) != 0 && *(_QWORD *)(a1 + 288) && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v5 = *(float **)(a1 + 288);
    v2 = 1;
    v6 = *v5;
    v7 = v5[5];
    v8 = (int)v5[13];
    v9 = (int)v5[12];
    v10 = (float)a2[2];
    *a2 = v9 + (int)(float)((float)*a2 * *v5);
    LODWORD(v5) = (int)(float)(v10 * v6);
    v11 = (float)a2[3];
    a2[2] = v9 + (_DWORD)v5;
    LODWORD(v5) = (int)(float)(v11 * v7);
    v12 = _mm_cvtsi32_si128(a2[1]);
    a2[3] = v8 + (_DWORD)v5;
    a2[1] = v8 + (int)(float)(_mm_cvtepi32_ps(v12).m128_f32[0] * v7);
  }
  return v2;
}
