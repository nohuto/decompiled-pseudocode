/*
 * XREFs of MagpAddTransformOutputMagFac @ 0x1C0103088
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C0103050 (AddMagnificationOutputTransform.c)
 *     ?GetMagClientToScreenTransform@@YAXPEAUtagDESKTOP@@PEAUtagPOINT@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019C490 (-GetMagClientToScreenTransform@@YAXPEAUtagDESKTOP@@PEAUtagPOINT@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     memcmp @ 0x1C013C6B0 (memcmp.c)
 */

void __fastcall MagpAddTransformOutputMagFac(__int64 a1, __int64 a2)
{
  double *v2; // rdi
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4

  v2 = *(double **)(a1 + 224);
  if ( v2 )
  {
    if ( ((_DWORD)v2[2] & 2) != 0 )
    {
      if ( memcmp(v2 + 11, &gMagOutTransformIdentity, 0x20uLL) )
      {
        v4 = v2[11];
        v5 = v2[13];
        v6 = v2[14];
        if ( v4 != 1.0 || v5 != 0.0 || v6 != 0.0 )
        {
          v7 = v5 + *(float *)(a2 + 48);
          v8 = v6 + *(float *)(a2 + 52);
          *(float *)(a2 + 48) = v7;
          *(float *)(a2 + 52) = v8;
          if ( v4 != 1.0 )
          {
            *(_DWORD *)(a2 + 40) = 1065353216;
            *(_DWORD *)(a2 + 60) = 1065353216;
            *(float *)(a2 + 48) = v7 * v4;
            *(float *)a2 = v4;
            *(float *)(a2 + 52) = v8 * v4;
            *(float *)(a2 + 20) = v4;
          }
        }
      }
    }
  }
}
