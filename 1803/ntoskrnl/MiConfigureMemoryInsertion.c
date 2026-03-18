/*
 * XREFs of MiConfigureMemoryInsertion @ 0x14074AA2C
 * Callers:
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiConfigureMemoryInsertion(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r11
  __int64 v8; // rax
  unsigned int *v9; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // r10
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  SIZE_T v20; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v22; // rdx
  char *v23; // r15
  _BYTE *v24; // rsi
  unsigned __int64 *v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // r9d
  __int64 v35; // [rsp+80h] [rbp+18h]
  unsigned __int64 v36; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a3 + 24);
  v5 = *(_QWORD *)(a3 + 16);
  *a1 = 0LL;
  v36 = v3;
  v7 = v3 + v5;
  v8 = *a2;
  if ( *(_QWORD *)a3 )
    v9 = &a2[4 * v8 + 4];
  else
    v9 = 0LL;
  if ( (int)v8 + 1 < (unsigned int)v8 )
    return 3221225626LL;
  v11 = *a2;
  v12 = 16LL * (unsigned int)(v8 - 1);
  v13 = v12 + 48;
  if ( v9 )
    v13 = v12 + 2 * ((unsigned int)(v8 + 1) + 24LL);
  v14 = 0LL;
  v35 = 1LL;
  v15 = 0LL;
  v16 = a2 + 6;
  v17 = 1LL;
  while ( 1 )
  {
    v18 = *(v16 - 1);
    if ( *v16 )
    {
      v19 = *v16 + v18;
      if ( v5 >= v18 )
      {
        if ( v5 < v19 )
          return 3221225496LL;
      }
      else if ( v7 > v18 )
      {
        return 3221225496LL;
      }
      if ( (v5 == v19 || v7 == v18)
        && (!v9 || *((_BYTE *)v9 + 2 * v14) == *(_BYTE *)(a3 + 32)
                && *((_BYTE *)v9 + 2 * v14 + 1) == *(_BYTE *)(a3 + 33)) )
      {
        if ( v17 == 1 )
        {
          v15 = v14;
          v17 = 0LL;
        }
        else
        {
          v17 = -1LL;
        }
        v35 = v17;
      }
    }
    if ( ++v14 >= v11 )
      break;
    v16 += 2;
  }
  v20 = 16 * v17 + v13;
  if ( v9 )
    v20 += 2 * (v11 + v17);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x20206D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = &MiSystemPartition;
  v22 = a2 + 4;
  PoolWithTag[1] = 1LL;
  v23 = (char *)(PoolWithTag + 2);
  *((_DWORD *)PoolWithTag + 4) = v17 + v11;
  v24 = &PoolWithTag[2 * (unsigned int)(v17 + v11) + 4];
  PoolWithTag[3] = v36 + *((_QWORD *)a2 + 1);
  v25 = PoolWithTag + 4;
  if ( v35 == -1 )
  {
    v26 = 4 * v15;
    memmove(v25, v22, 16 * v15 + 16);
    if ( v9 )
      memmove(v24, v9, 2 * v15 + 2);
    v27 = v15 + 2;
    *(_QWORD *)&v23[v26 * 4 + 24] += v36 + *(_QWORD *)&a2[v26 + 10];
    if ( v15 + 2 != v11 )
    {
      v28 = v11 - v15;
      memmove(&v23[16 * v27], &a2[v26 + 12], 16 * v28 - 32);
      if ( v9 )
        memmove(&v24[2 * v15 + 2], (char *)v9 + 2 * v27, 2 * v28 - 4);
    }
  }
  else if ( v35 )
  {
    v32 = 0LL;
    v33 = 0;
    do
    {
      if ( !v33 && v36 + v5 <= *v22 )
      {
        *v25 = v5;
        v25[1] = v36;
        v25 += 2;
        if ( v9 )
        {
          v24[1] = *(_BYTE *)(a3 + 33);
          *v24 = *(_BYTE *)(a3 + 32);
          v24 += 2;
        }
        v33 = 1;
      }
      *(_OWORD *)v25 = *(_OWORD *)v22;
      v25 += 2;
      if ( v9 )
      {
        *(_WORD *)v24 = *((_WORD *)v9 + v32);
        v24 += 2;
      }
      ++v32;
      v22 += 2;
    }
    while ( v32 != *a2 );
    if ( !v33 )
    {
      *v25 = v5;
      v25[1] = v36;
      if ( v9 )
      {
        v24[1] = *(_BYTE *)(a3 + 33);
        *v24 = *(_BYTE *)(a3 + 32);
      }
    }
  }
  else
  {
    memmove(v25, v22, 16 * v11);
    if ( v9 )
      memmove(v24, v9, 2 * v11);
    v29 = 2 * v15;
    v30 = *(_QWORD *)&a2[2 * v29 + 4];
    v31 = *(_QWORD *)&a2[2 * v29 + 6];
    *(_QWORD *)&v23[8 * v29 + 24] += v36;
    if ( v5 != v30 + v31 )
      *(_QWORD *)&v23[8 * v29 + 16] = v5;
  }
  *a1 = v23;
  return 0LL;
}
