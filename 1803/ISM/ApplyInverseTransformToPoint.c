/*
 * XREFs of ApplyInverseTransformToPoint @ 0x1800630CC
 * Callers:
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@@Z @ 0x180064E18 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceCli.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z @ 0x1800B2B98 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplyInverseTransformToPoint(float *a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  float v6; // xmm7_4
  float v7; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm3_4

  v5 = 0;
  v6 = (float)(a1[3] * (float)a2) - *a1;
  v7 = (float)(a1[3] * (float)a3) - a1[1];
  v8 = (float)((float)a2 * a1[7]) - a1[4];
  v9 = (float)(a1[7] * (float)a3) - a1[5];
  if ( (float)(v6 * v9) == (float)(v7 * v8) )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    v10 = (float)(v6 * v9) - (float)(v7 * v8);
    v11 = a1[15];
    v12 = (float)(v11 * (float)a3) - a1[13];
    v13 = (float)(v11 * (float)a2) - a1[12];
    *a4 = (int)(float)((float)((float)(v12 * v8) - (float)(v13 * v9)) / v10);
    *a5 = (int)(float)((float)((float)(v13 * v7) - (float)(v12 * v6)) / v10);
  }
  return v5;
}
