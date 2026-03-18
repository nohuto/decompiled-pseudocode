/*
 * XREFs of MiConfigureMemoryRemoval @ 0x14074AD3C
 * Callers:
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiConfigureMemoryRemoval(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // r9
  char v4; // bl
  unsigned int *v7; // rdi
  __int64 v8; // r10
  unsigned __int64 v9; // r14
  _QWORD *v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  SIZE_T v15; // rdx
  _QWORD *PoolWithTag; // rax
  char *v18; // rdx
  unsigned int v19; // ecx
  unsigned __int64 *v20; // r11
  __int64 v21; // r10
  _WORD *v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // [rsp+50h] [rbp+8h]

  v3 = *a2;
  v4 = 0;
  *a1 = 0LL;
  if ( *a3 )
    v7 = &a2[4 * v3 + 4];
  else
    v7 = 0LL;
  v8 = 0LL;
  v9 = a3[2];
  v10 = a2 + 6;
  v25 = a3[3];
  v11 = -2LL;
  v12 = v25 + v9;
  while ( 1 )
  {
    v13 = *(v10 - 1);
    v14 = v13 + *v10;
    if ( v9 >= v13 && v12 <= v14 )
      break;
    ++v8;
    v10 += 2;
    if ( v8 == v3 )
      goto LABEL_16;
  }
  if ( v9 != v13 )
  {
LABEL_13:
    if ( v12 != v14 )
    {
      v11 = 1LL;
      goto LABEL_16;
    }
LABEL_15:
    v11 = 0LL;
    goto LABEL_16;
  }
  if ( v12 != v14 )
  {
    if ( v9 == v13 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v11 = -1LL;
LABEL_16:
  v15 = 16 * (v11 + (unsigned int)(v3 - 1) + 3LL);
  if ( v7 )
    v15 += 2 * (v11 + v3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x20206D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1] = 1LL;
  *PoolWithTag = &MiSystemPartition;
  v18 = (char *)(PoolWithTag + 4);
  v19 = v11 + *a2;
  v20 = (unsigned __int64 *)(a2 + 4);
  v21 = 0LL;
  *((_DWORD *)PoolWithTag + 4) = v19;
  v22 = &PoolWithTag[2 * v19 + 4];
  PoolWithTag[3] = *((_QWORD *)a2 + 1) - v25;
  do
  {
    v23 = *v20;
    v24 = *v20 + v20[1];
    if ( (v4 & 1) != 0 || v9 < v23 || v12 > v24 )
    {
      *(_OWORD *)v18 = *(_OWORD *)v20;
      goto LABEL_33;
    }
    v4 |= 1u;
    if ( v9 == v23 )
    {
      if ( v12 == v24 )
        goto LABEL_35;
      v23 += v25;
LABEL_27:
      *(_QWORD *)v18 = v23;
      *((_QWORD *)v18 + 1) = v20[1] - v25;
LABEL_33:
      v18 += 16;
      if ( v7 )
        *v22++ = *((_WORD *)v7 + v21);
      goto LABEL_35;
    }
    if ( v12 == v24 )
      goto LABEL_27;
    *(_QWORD *)v18 = v23;
    *((_QWORD *)v18 + 1) = v9 - v23;
    if ( v7 )
    {
      *v22 = *((_WORD *)v7 + v21);
      v22[1] = *((_WORD *)v7 + v21);
      v22 += 2;
    }
    *((_QWORD *)v18 + 2) = v12;
    *((_QWORD *)v18 + 3) = v24 - v12;
    v18 += 32;
LABEL_35:
    ++v21;
    v20 += 2;
  }
  while ( v21 != *a2 );
  *a1 = PoolWithTag + 2;
  return 0LL;
}
