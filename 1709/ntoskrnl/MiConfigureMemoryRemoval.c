/*
 * XREFs of MiConfigureMemoryRemoval @ 0x1406DFE54
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiConfigureMemoryRemoval(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  char v3; // bl
  unsigned int *v6; // rdi
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r15
  __int64 v9; // r9
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
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

  v3 = 0;
  *a1 = 0LL;
  if ( *a3 )
    v6 = &a2[4 * *a2 + 4];
  else
    v6 = 0LL;
  v7 = a2 + 6;
  v8 = a3[2];
  v9 = 0LL;
  v25 = a3[3];
  v10 = v25 + v8;
  v11 = -2LL;
  while ( 1 )
  {
    v12 = *(v7 - 1);
    v13 = v12 + *v7;
    if ( v8 >= v12 && v10 <= v13 )
      break;
    ++v9;
    v7 += 2;
    if ( v9 == *a2 )
      goto LABEL_15;
  }
  if ( v8 != v12 )
  {
    if ( v10 != v13 )
    {
      v11 = 1LL;
      goto LABEL_15;
    }
LABEL_14:
    v11 = 0LL;
    goto LABEL_15;
  }
  if ( v10 != v13 )
    goto LABEL_14;
  v11 = -1LL;
LABEL_15:
  v14 = *a2;
  v15 = 16 * (v11 + (unsigned int)(v14 - 1) + 3LL);
  if ( v6 )
    v15 += 2 * (v11 + v14);
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
    if ( (v3 & 1) != 0 || v8 < v23 || v10 > v24 )
    {
      *(_OWORD *)v18 = *(_OWORD *)v20;
      goto LABEL_32;
    }
    v3 |= 1u;
    if ( v8 == v23 )
    {
      if ( v10 == v24 )
        goto LABEL_34;
      *(_QWORD *)v18 = v23 + v25;
LABEL_26:
      *((_QWORD *)v18 + 1) = v20[1] - v25;
LABEL_32:
      v18 += 16;
      if ( v6 )
        *v22++ = *((_WORD *)v6 + v21);
      goto LABEL_34;
    }
    *(_QWORD *)v18 = v23;
    if ( v10 == v24 )
      goto LABEL_26;
    *((_QWORD *)v18 + 1) = v8 - v23;
    if ( v6 )
    {
      *v22 = *((_WORD *)v6 + v21);
      v22[1] = *((_WORD *)v6 + v21);
      v22 += 2;
    }
    *((_QWORD *)v18 + 2) = v10;
    *((_QWORD *)v18 + 3) = v24 - v10;
    v18 += 32;
LABEL_34:
    ++v21;
    v20 += 2;
  }
  while ( v21 != *a2 );
  *a1 = PoolWithTag + 2;
  return 0LL;
}
