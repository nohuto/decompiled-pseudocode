/*
 * XREFs of ColorSpaceTransformValidate @ 0x1C0049188
 * Callers:
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C01581E0 (DxgkSetMonitorColorSpaceTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ColorSpaceTransformValidate(float *a1, int *a2)
{
  int v2; // r8d
  float *v4; // rcx
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( (float)((float)((float)((float)((float)((float)((float)((float)(*a1 * a1[5]) * a1[10])
                                                     + (float)((float)(a1[1] * a1[6]) * a1[8]))
                                             + (float)((float)(a1[2] * a1[4]) * a1[9]))
                                     - (float)((float)(*a1 * a1[6]) * a1[9]))
                             - (float)((float)(a1[4] * a1[1]) * a1[10]))
                     - (float)((float)(a1[2] * a1[5]) * a1[8]))
             * a1[12]) != 0.0 )
  {
    v4 = a1 + 14;
    v5 = (float)*a2 / (float)a2[1];
    while ( 1 )
    {
      v6 = (float)v2 * 0.00024414062;
      v7 = fminf(1.0, v6 + v5);
      v8 = v6 < v5 ? 0.0 : v6 - v5;
      v9 = *(v4 - 1);
      if ( v8 > v9 )
        break;
      if ( v9 > v7 )
        break;
      if ( v8 > *v4 )
        break;
      if ( *v4 > v7 )
        break;
      v10 = v4[1];
      if ( v8 > v10 || v10 > v7 )
        break;
      ++v2;
      v4 += 3;
      if ( (unsigned int)v2 >= 0x1000 )
        return 0LL;
    }
  }
  return 3223192391LL;
}
