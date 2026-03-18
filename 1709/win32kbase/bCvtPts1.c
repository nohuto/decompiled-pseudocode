/*
 * XREFs of bCvtPts1 @ 0x1C007DFE8
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C00547E0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 *     GreGetClipBox @ 0x1C0055B60 (GreGetClipBox.c)
 * Callees:
 *     bFToL @ 0x1C0070F2C (bFToL.c)
 */

__int64 __fastcall bCvtPts1(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  char v10; // r8
  _DWORD *v11; // rbx
  float v12; // xmm1_4
  char v13; // r8
  float v14; // xmm2_4
  float v15; // xmm3_4
  char v16; // r8
  _DWORD *v17; // rbx
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  char v23; // r8
  int v24; // [rsp+40h] [rbp+8h] BYREF
  int v25; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 32) & 0xB )
    {
      case 1:
        if ( a3 )
        {
          do
          {
            v11 = a2 + 1;
            v12 = (float)(16 * a2[1]) * *(float *)(a1 + 12);
            bFToL((float)(16 * *a2) * *(float *)a1, a2, 6);
            bFToL(v12, a2 + 1, v13);
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *v11 += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 3:
        if ( a3 )
        {
          do
          {
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *(a2 - 1) += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 8:
        if ( a3 )
        {
          do
          {
            v14 = (float)a2[1];
            v15 = (float)*a2;
            bFToL((float)(v14 * *(float *)(a1 + 8)) + (float)(v15 * *(float *)a1), &v24, 6);
            bFToL((float)(v15 * *(float *)(a1 + 4)) + (float)(v14 * *(float *)(a1 + 12)), &v25, v16);
            *a2 = (((*(_DWORD *)(a1 + 24) + v24) >> 3) + 1) >> 1;
            a2[1] = (((v25 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 9:
        if ( a3 )
        {
          do
          {
            bFToL((float)*a2 * *(float *)a1, &v24, 6);
            bFToL((float)a2[1] * *(float *)(a1 + 12), &v25, v10);
            *a2 = (((*(_DWORD *)(a1 + 24) + v24) >> 3) + 1) >> 1;
            a2 += 2;
            *(a2 - 1) = (((v25 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 11:
        v6 = *(_DWORD *)(a1 + 24);
        v7 = ((*(int *)(a1 + 28) >> 3) + 1) >> 1;
        v8 = ((v6 >> 3) + 1) >> 1;
        if ( a3 )
        {
          do
          {
            *a2 += v8;
            a2[1] += v7;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
    }
  }
  else if ( a3 )
  {
    do
    {
      v17 = a2 + 1;
      v18 = (float)(16 * a2[1]);
      v19 = v18 * *(float *)(a1 + 12);
      v20 = (float)(16 * *a2);
      v21 = (float)(v18 * *(float *)(a1 + 8)) + (float)(v20 * *(float *)a1);
      v22 = (float)(v20 * *(float *)(a1 + 4)) + v19;
      bFToL(v21, a2, 6);
      bFToL(v22, a2 + 1, v23);
      *a2 += *(_DWORD *)(a1 + 24);
      a2 += 2;
      *v17 += *(_DWORD *)(a1 + 28);
      --v3;
    }
    while ( v3 );
  }
  return 1LL;
}
