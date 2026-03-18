/*
 * XREFs of bFDXform @ 0x1C0238C90
 * Callers:
 *     lQueryDEVICEMETRICS @ 0x1C022DC8C (lQueryDEVICEMETRICS.c)
 *     bComputeMaxGlyph @ 0x1C0230120 (bComputeMaxGlyph.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 bFDXform(__int64 a1, int *a2, int *a3, ...)
{
  int v4; // xmm5_4
  __int64 v6; // rsi
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm5_4
  signed __int64 v10; // rdi
  char v11; // r8
  char v12; // r8
  char v13; // r8
  float v14; // xmm3_4
  float v15; // xmm2_4
  char v16; // r8
  float v17; // xmm4_4
  int v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v4 = *(_DWORD *)(a1 + 8);
  v6 = 4LL;
  v7 = *(float *)a1;
  v8 = *(float *)(a1 + 12);
  LODWORD(v20) = *(_DWORD *)(a1 + 4);
  v19 = v4;
  if ( EFLOAT::bIsZero((EFLOAT *)va) && EFLOAT::bIsZero((EFLOAT *)&v19) )
  {
    v10 = (char *)a2 - (char *)a3;
    v11 = 10;
    do
    {
      if ( !(unsigned int)bFToL((float)*a3 * v7, (int *)((char *)a3 + v10), v11) )
        break;
      if ( !(unsigned int)bFToL((float)a3[1] * v8, (int *)((char *)a3 + v10 + 4), v12) )
        break;
      a3 += 2;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    v13 = 10;
    do
    {
      v14 = (float)*a3;
      v15 = (float)a3[1];
      if ( !(unsigned int)bFToL((float)(v15 * v9) + (float)(v14 * v7), a2, v13) )
        break;
      if ( !(unsigned int)bFToL((float)(v15 * v8) + (float)(v14 * v17), a2 + 1, v16) )
        break;
      a2 += 2;
      a3 += 2;
      --v6;
    }
    while ( v6 );
  }
  return 1LL;
}
