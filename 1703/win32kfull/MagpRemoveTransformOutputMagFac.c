/*
 * XREFs of MagpRemoveTransformOutputMagFac @ 0x1C0108538
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     RemoveMagnificationOutputTransform @ 0x1C0108520 (RemoveMagnificationOutputTransform.c)
 * Callees:
 *     memcmp @ 0x1C013C6B0 (memcmp.c)
 */

void __fastcall MagpRemoveTransformOutputMagFac(__int64 a1, float *a2)
{
  double *v2; // rbx
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm1_4

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
          v7 = a2[12] - v5;
          v8 = a2[13] - v6;
          a2[12] = v7;
          a2[13] = v8;
          if ( v4 != 0.0 )
          {
            v9 = a2[5] / v4;
            *a2 = *a2 / v4;
            a2[5] = v9;
            a2[12] = v7 / v4;
            a2[13] = v8 / v4;
          }
        }
      }
    }
  }
}
