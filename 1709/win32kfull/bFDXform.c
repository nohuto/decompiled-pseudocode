/*
 * XREFs of bFDXform @ 0x1C023A250
 * Callers:
 *     lQueryDEVICEMETRICS @ 0x1C022F1B0 (lQueryDEVICEMETRICS.c)
 *     bComputeMaxGlyph @ 0x1C023168C (bComputeMaxGlyph.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 */

__int64 bFDXform(float *a1, int *a2, int *a3, ...)
{
  float v3; // xmm2_4
  float v5; // xmm3_4
  __int64 v7; // rsi
  float v8; // xmm6_4
  float v9; // xmm7_4
  signed __int64 v10; // rdi
  char v11; // r8
  char v12; // r8
  char v13; // r8
  char v14; // r8
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v3 = a1[1];
  v5 = a1[2];
  v7 = 4LL;
  v8 = *a1;
  v9 = a1[3];
  *(float *)&v19 = v3;
  v18 = v5;
  if ( EFLOAT::bIsZero((EFLOAT *)va) && EFLOAT::bIsZero((EFLOAT *)&v18) )
  {
    v10 = (char *)a2 - (char *)a3;
    v11 = 10;
    do
    {
      if ( !(unsigned int)bFToL((float)*a3 * v8, (int *)((char *)a3 + v10), v11) )
        break;
      if ( !(unsigned int)bFToL((float)a3[1] * v9, (int *)((char *)a3 + v10 + 4), v12) )
        break;
      a3 += 2;
      --v7;
    }
    while ( v7 );
  }
  else
  {
    v13 = 10;
    do
    {
      if ( !(unsigned int)bFToL((float)(v5 * (float)a3[1]) + (float)((float)*a3 * v8), a2, v13) )
        break;
      if ( !(unsigned int)bFToL((float)(v9 * v16) + (float)(v3 * v15), a2 + 1, v14) )
        break;
      a2 += 2;
      a3 += 2;
      --v7;
    }
    while ( v7 );
  }
  return 1LL;
}
