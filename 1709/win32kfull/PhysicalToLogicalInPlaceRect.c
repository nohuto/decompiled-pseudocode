/*
 * XREFs of PhysicalToLogicalInPlaceRect @ 0x1C006AF68
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C006A4F4 (IntersectWithParents.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C006A790 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhysicalToLogicalInPlaceRect(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  float *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm2_4
  int v9; // ecx
  int v10; // edx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 288) && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v6 = *(float **)(a1 + 288);
    v2 = 1;
    v7 = 1.0 / *v6;
    v8 = 1.0 / v6[5];
    v9 = -(int)v6[12];
    v10 = -(int)v6[13];
    *a2 = (int)(float)((float)(*a2 - (int)v6[12]) * v7);
    a2[1] = (int)(float)((float)(v10 + a2[1]) * v8);
    a2[2] = (int)(float)((float)(v9 + a2[2]) * v7);
    a2[3] = (int)(float)((float)(v10 + a2[3]) * v8);
  }
  return v2;
}
