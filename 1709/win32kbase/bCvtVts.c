/*
 * XREFs of bCvtVts @ 0x1C009F850
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C009F2C0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C00EE020 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00EE090 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 * Callees:
 *     bFToL @ 0x1C0070F2C (bFToL.c)
 */

__int64 __fastcall bCvtVts(__int64 a1, int *a2, int *a3, __int64 a4)
{
  __int64 v4; // rsi
  int *v5; // rdi
  int *v6; // rbp
  signed __int64 v8; // rbp
  char v9; // r8
  float v10; // xmm2_4
  int v11; // ebx
  char v12; // r8
  char v14; // r8
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  char v20; // r8

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 3) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 && a4 )
    {
      v8 = (char *)a2 - (char *)a3;
      v9 = 6;
      do
      {
        v10 = *(float *)(a1 + 12);
        v11 = *(int *)((char *)v5 + v8 + 4);
        bFToL((float)*(int *)((char *)v5 + v8) * *(float *)a1, v5, v9);
        bFToL((float)v11 * v10, v5 + 1, v12);
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
  }
  else if ( a4 )
  {
    v14 = 6;
    do
    {
      v15 = (float)v6[1];
      v16 = v15 * *(float *)(a1 + 12);
      v17 = (float)*v6;
      v18 = (float)(v15 * *(float *)(a1 + 8)) + (float)(v17 * *(float *)a1);
      v19 = (float)(v17 * *(float *)(a1 + 4)) + v16;
      bFToL(v18, v5, v14);
      bFToL(v19, v5 + 1, v20);
      v6 += 2;
      v5 += 2;
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
