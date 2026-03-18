/*
 * XREFs of MiConfigureMemoryInsertion @ 0x1406DFB4C
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiConfigureMemoryInsertion(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // r11
  unsigned int *v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // r10
  __int64 v15; // rsi
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9
  SIZE_T v19; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v21; // rdx
  char *v22; // r14
  _BYTE *v23; // rdi
  unsigned __int64 *v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // r9d
  unsigned int v34; // [rsp+68h] [rbp+10h]
  unsigned __int64 v35; // [rsp+70h] [rbp+18h]

  v3 = *(_QWORD *)(a3 + 24);
  v5 = *(_QWORD *)(a3 + 16);
  *a1 = 0LL;
  v35 = v3;
  v7 = v3 + v5;
  if ( *(_QWORD *)a3 )
    v8 = &a2[4 * *a2 + 4];
  else
    v8 = 0LL;
  v9 = *a2;
  v34 = v9;
  if ( (int)v9 + 1 < (unsigned int)v9 )
    return 3221225626LL;
  v11 = 16LL * (unsigned int)(v9 - 1);
  v12 = v11 + 48;
  if ( v8 )
    v12 = v11 + 2 * ((unsigned int)(v9 + 1) + 24LL);
  v13 = 0LL;
  v14 = a2 + 6;
  v15 = 0LL;
  v16 = 1LL;
  while ( 1 )
  {
    v17 = *(v14 - 1);
    if ( *v14 )
    {
      v18 = *v14 + v17;
      if ( v5 >= v17 )
      {
        if ( v5 < v18 )
          return 3221225496LL;
      }
      else if ( v7 > v17 )
      {
        return 3221225496LL;
      }
      if ( (v5 == v18 || v7 == v17)
        && (!v8 || *((_BYTE *)v8 + 2 * v13) == *(_BYTE *)(a3 + 32)
                && *((_BYTE *)v8 + 2 * v13 + 1) == *(_BYTE *)(a3 + 33)) )
      {
        if ( v16 == 1 )
        {
          v15 = v13;
          v16 = 0LL;
        }
        else
        {
          v16 = -1LL;
        }
      }
    }
    if ( ++v13 >= v9 )
      break;
    v14 += 2;
  }
  v19 = 16 * v16 + v12;
  if ( v8 )
    v19 += 2 * (v9 + v16);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x20206D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = &MiSystemPartition;
  v21 = a2 + 4;
  PoolWithTag[1] = 1LL;
  v22 = (char *)(PoolWithTag + 2);
  *((_DWORD *)PoolWithTag + 4) = v9 + v16;
  v23 = &PoolWithTag[2 * (unsigned int)(v9 + v16) + 4];
  PoolWithTag[3] = v35 + *((_QWORD *)a2 + 1);
  v24 = PoolWithTag + 4;
  if ( v16 == -1 )
  {
    v25 = 4 * v15;
    memmove(v24, v21, 16 * v15 + 16);
    if ( v8 )
      memmove(v23, v8, 2 * v15 + 2);
    v26 = v15 + 2;
    *(_QWORD *)&v22[v25 * 4 + 24] += v35 + *(_QWORD *)&a2[v25 + 10];
    if ( v15 + 2 != v34 )
    {
      v27 = v34 - v15;
      memmove(&v22[16 * v26], &a2[v25 + 12], 16 * v27 - 32);
      if ( v8 )
        memmove(&v23[2 * v15 + 2], (char *)v8 + 2 * v26, 2 * v27 - 4);
    }
  }
  else if ( v16 )
  {
    v31 = 0LL;
    v32 = 0;
    do
    {
      if ( !v32 && v35 + v5 <= *v21 )
      {
        *v24 = v5;
        v24[1] = v35;
        v24 += 2;
        if ( v8 )
        {
          v23[1] = *(_BYTE *)(a3 + 33);
          *v23 = *(_BYTE *)(a3 + 32);
          v23 += 2;
        }
        v32 = 1;
      }
      *(_OWORD *)v24 = *(_OWORD *)v21;
      v24 += 2;
      if ( v8 )
      {
        *(_WORD *)v23 = *((_WORD *)v8 + v31);
        v23 += 2;
      }
      ++v31;
      v21 += 2;
    }
    while ( v31 != *a2 );
    if ( !v32 )
    {
      *v24 = v5;
      v24[1] = v35;
      if ( v8 )
      {
        v23[1] = *(_BYTE *)(a3 + 33);
        *v23 = *(_BYTE *)(a3 + 32);
      }
    }
  }
  else
  {
    memmove(v24, v21, 16LL * v34);
    if ( v8 )
      memmove(v23, v8, 2LL * v34);
    v28 = 2 * v15;
    v29 = *(_QWORD *)&a2[2 * v28 + 4];
    v30 = *(_QWORD *)&a2[2 * v28 + 6];
    *(_QWORD *)&v22[8 * v28 + 24] += v35;
    if ( v5 != v29 + v30 )
      *(_QWORD *)&v22[8 * v28 + 16] = v5;
  }
  *a1 = v22;
  return 0LL;
}
