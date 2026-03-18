/*
 * XREFs of ReorderAxisAlignedRectVertices @ 0x180032C50
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180034960 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

void *__fastcall ReorderAxisAlignedRectVertices(float **a1, int a2, __int64 a3)
{
  float v3; // xmm2_4
  float *v5; // r9
  float v7; // xmm1_4
  __int64 v9; // r10
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  __int64 v16; // rdx
  float v17; // xmm0_4
  float v18; // xmm0_4
  __int64 v19; // rdx
  float v20; // xmm0_4
  float v21; // xmm0_4
  int v22; // esi
  int v23; // ebp
  int v24; // r14d
  float v25; // xmm4_4
  int v26; // edx
  int v27; // eax
  float v28; // xmm4_4
  int v29; // eax
  float v30; // xmm4_4
  size_t v31; // rbx

  v3 = FLOAT_3_4028235e38;
  v5 = *a1;
  v7 = FLOAT_N3_4028235e38;
  v9 = *((int *)a1 + 2);
  v10 = FLOAT_3_4028235e38;
  v11 = FLOAT_N3_4028235e38;
  v12 = **a1;
  if ( v12 <= 3.4028235e38 )
    v10 = **a1;
  if ( v12 >= -3.4028235e38 )
    v11 = **a1;
  v13 = v5[1];
  if ( v13 <= 3.4028235e38 )
    v3 = v5[1];
  if ( v13 >= -3.4028235e38 )
    v7 = v5[1];
  v14 = *(float *)((char *)v5 + v9);
  if ( v14 <= v10 )
    v10 = *(float *)((char *)v5 + v9);
  if ( v11 <= v14 )
    v11 = *(float *)((char *)v5 + v9);
  v15 = *(float *)((char *)v5 + v9 + 4);
  if ( v15 <= v3 )
    v3 = *(float *)((char *)v5 + v9 + 4);
  if ( v7 <= v15 )
    v7 = *(float *)((char *)v5 + v9 + 4);
  v16 = 2 * (int)v9;
  v17 = *(float *)((char *)v5 + v16);
  if ( v17 <= v10 )
    v10 = *(float *)((char *)v5 + v16);
  if ( v11 <= v17 )
    v11 = *(float *)((char *)v5 + v16);
  v18 = *(float *)((char *)v5 + v16 + 4);
  if ( v18 <= v3 )
    v3 = *(float *)((char *)v5 + v16 + 4);
  if ( v7 <= v18 )
    v7 = *(float *)((char *)v5 + v16 + 4);
  v19 = 3 * (int)v9;
  v20 = *(float *)((char *)v5 + v19);
  if ( v20 <= v10 )
    v10 = *(float *)((char *)v5 + v19);
  if ( v11 <= v20 )
    v11 = *(float *)((char *)v5 + v19);
  v21 = *(float *)((char *)v5 + v19 + 4);
  if ( v21 <= v3 )
    v3 = *(float *)((char *)v5 + v19 + 4);
  if ( v7 <= v21 )
    v7 = *(float *)((char *)v5 + v19 + 4);
  v22 = 1;
  v23 = 2;
  v24 = 3;
  if ( v12 != v10 || v13 != v3 )
  {
    if ( v12 == v11 && v13 == v3 )
    {
      v22 = 0;
    }
    else if ( v12 == v10 && v13 == v7 )
    {
      v23 = 0;
    }
    else if ( v12 == v11 && v13 == v7 )
    {
      v24 = 0;
    }
  }
  v25 = *(float *)((char *)v5 + v9);
  if ( v25 == v10 && *(float *)((char *)v5 + v9 + 4) == v3 )
  {
    v26 = 1;
  }
  else if ( v25 == v11 && *(float *)((char *)v5 + v9 + 4) == v3 )
  {
    v22 = 1;
    v26 = 0;
  }
  else if ( v25 == v10 && *(float *)((char *)v5 + v9 + 4) == v7 )
  {
    v23 = 1;
    v26 = 0;
  }
  else
  {
    v26 = 0;
    if ( v25 == v11 && *(float *)((char *)v5 + v9 + 4) == v7 )
      v24 = 1;
  }
  v27 = 2 * v9;
  v28 = *(float *)((char *)v5 + 2 * (int)v9);
  if ( v28 == v10 && *(float *)((char *)v5 + v27 + 4) == v3 )
  {
    v26 = 2;
  }
  else if ( v28 == v11 && *(float *)((char *)v5 + v27 + 4) == v3 )
  {
    v22 = 2;
  }
  else if ( v28 == v10 && *(float *)((char *)v5 + v27 + 4) == v7 )
  {
    v23 = 2;
  }
  else if ( v28 == v11 && *(float *)((char *)v5 + v27 + 4) == v7 )
  {
    v24 = 2;
  }
  v29 = 3 * v9;
  v30 = *(float *)((char *)v5 + 3 * (int)v9);
  if ( v30 == v10 && *(float *)((char *)v5 + v29 + 4) == v3 )
  {
    v26 = 3;
  }
  else if ( v30 == v11 && *(float *)((char *)v5 + v29 + 4) == v3 )
  {
    v22 = 3;
  }
  else if ( v30 == v10 && *(float *)((char *)v5 + v29 + 4) == v7 )
  {
    v23 = 3;
  }
  else if ( v30 == v11 && *(float *)((char *)v5 + v29 + 4) == v7 )
  {
    v24 = 3;
  }
  v31 = (unsigned int)(8 * a2 + 16);
  memcpy_0(*(void **)a3, (char *)v5 + v26 * (int)v9, v31);
  memcpy_0((void *)(*(_QWORD *)a3 + *(int *)(a3 + 8)), (char *)*a1 + v22 * *((_DWORD *)a1 + 2), (unsigned int)v31);
  memcpy_0(
    (void *)(*(_QWORD *)a3 + 2 * *(_DWORD *)(a3 + 8)),
    (char *)*a1 + v23 * *((_DWORD *)a1 + 2),
    (unsigned int)v31);
  return memcpy_0(
           (void *)(*(_QWORD *)a3 + 3 * *(_DWORD *)(a3 + 8)),
           (char *)*a1 + v24 * *((_DWORD *)a1 + 2),
           (unsigned int)v31);
}
