/*
 * XREFs of MiConfigureMemoryInsertion @ 0x1406B3B70
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiConfigureMemoryInsertion(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // r11
  unsigned int *v8; // rbx
  unsigned __int64 v9; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // r10
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9
  SIZE_T v19; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v21; // rdx
  char *v22; // r14
  _BYTE *v23; // rsi
  unsigned __int64 *v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // r8d
  __int64 v32; // [rsp+68h] [rbp+10h]
  unsigned __int64 v33; // [rsp+70h] [rbp+18h]

  v3 = *(_QWORD *)(a3 + 24);
  v5 = *(_QWORD *)(a3 + 16);
  *a1 = 0LL;
  v33 = v3;
  v7 = v3 + v5;
  if ( *(_QWORD *)a3 )
    v8 = &a2[4 * *a2 + 4];
  else
    v8 = 0LL;
  v9 = *a2;
  if ( (int)v9 + 1 < (unsigned int)v9 )
    return 3221225626LL;
  v11 = 16LL * (unsigned int)(v9 - 1);
  v12 = v11 + 48;
  if ( v8 )
    v12 = v11 + 2 * ((unsigned int)(v9 + 1) + 24LL);
  v13 = 0LL;
  v32 = 1LL;
  v14 = 0LL;
  v15 = a2 + 6;
  v16 = 1LL;
  while ( 1 )
  {
    v17 = *(v15 - 1);
    if ( *v15 )
    {
      v18 = *v15 + v17;
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
          v14 = v13;
          v16 = 0LL;
        }
        else
        {
          v16 = -1LL;
        }
        v32 = v16;
      }
    }
    if ( ++v13 >= v9 )
      break;
    v15 += 2;
  }
  v19 = 16 * v16 + v12;
  if ( v8 )
    v19 += 2 * (v16 + v9);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x20206D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = &MiSystemPartition;
  v21 = a2 + 4;
  PoolWithTag[1] = 1LL;
  v22 = (char *)(PoolWithTag + 2);
  *((_DWORD *)PoolWithTag + 4) = v16 + v9;
  v23 = &PoolWithTag[2 * (unsigned int)(v16 + v9) + 4];
  PoolWithTag[3] = v33 + *((_QWORD *)a2 + 1);
  v24 = PoolWithTag + 4;
  if ( v32 == -1 )
  {
    v25 = 4 * v14;
    memmove(v24, v21, 16 * v14 + 16);
    if ( v8 )
      memmove(v23, v8, 2 * v14 + 2);
    *(_QWORD *)&v22[v25 * 4 + 24] += v33 + *(_QWORD *)&a2[v25 + 10];
    if ( v14 + 2 != v9 )
    {
      memmove(&v22[16 * v14 + 32], &a2[v25 + 12], 16 * (v9 - v14) - 32);
      if ( v8 )
        memmove(&v23[2 * v14 + 2], (char *)v8 + 2 * v14 + 4, 2 * (v9 - v14) - 4);
    }
  }
  else if ( v32 )
  {
    v29 = 0LL;
    v30 = 0;
    do
    {
      if ( !v30 && v33 + v5 <= *v21 )
      {
        *v24 = v5;
        v24[1] = v33;
        v24 += 2;
        if ( v8 )
        {
          v23[1] = *(_BYTE *)(a3 + 33);
          *v23 = *(_BYTE *)(a3 + 32);
          v23 += 2;
        }
        v30 = 1;
      }
      *(_OWORD *)v24 = *(_OWORD *)v21;
      v24 += 2;
      if ( v8 )
      {
        *(_WORD *)v23 = *((_WORD *)v8 + v29);
        v23 += 2;
      }
      ++v29;
      v21 += 2;
    }
    while ( v29 != *a2 );
    if ( !v30 )
    {
      *v24 = v5;
      v24[1] = v33;
      if ( v8 )
      {
        v23[1] = *(_BYTE *)(a3 + 33);
        *v23 = *(_BYTE *)(a3 + 32);
      }
    }
  }
  else
  {
    memmove(v24, v21, 16 * v9);
    if ( v8 )
      memmove(v23, v8, 2 * v9);
    v26 = 2 * v14;
    v27 = *(_QWORD *)&a2[2 * v26 + 4];
    v28 = *(_QWORD *)&a2[2 * v26 + 6];
    *(_QWORD *)&v22[8 * v26 + 24] += v33;
    if ( v5 != v27 + v28 )
      *(_QWORD *)&v22[8 * v26 + 16] = v5;
  }
  *a1 = v22;
  return 0LL;
}
