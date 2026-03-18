/*
 * XREFs of CmpBuildVirtualReplicationStack @ 0x1406F49EC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpBuildVirtualReplicationStack(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v9; // r10d
  __int64 result; // rax
  size_t v11; // rdi
  PVOID PoolWithTag; // rax
  PVOID v13; // rbx
  int v14; // edx
  _WORD *v15; // r8
  __int16 v16; // cx
  int v17; // r9d
  __int64 v18; // rdx
  _WORD *v19; // r8
  __int16 v20; // cx
  __int64 v21; // r9
  __int16 v22; // ax
  __int64 v23; // rcx

  v4 = a1;
  v5 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
  *a4 = 0LL;
  v9 = 48 * v5;
  if ( (unsigned __int64)(48 * v5) > 0xFFFFFFFF )
    return 3221225621LL;
  v11 = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20204D43u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v11);
  v14 = 4;
  v15 = *(_WORD **)(a2 + 8);
  v16 = *(_OWORD *)a2;
  while ( 1 )
  {
    v17 = v14;
    if ( *v15 == 92 )
    {
      LODWORD(v18) = v14 - 1;
      if ( !(_DWORD)v18 )
        break;
    }
    v14 = v17 - 1;
    if ( *v15 != 92 )
      v14 = v17;
    v16 -= 2;
    if ( !v16 )
    {
LABEL_26:
      ExFreePoolWithTag(v13, 0);
      return 3221225485LL;
    }
    ++v15;
    if ( !v14 )
    {
      LODWORD(v18) = 0;
      break;
    }
  }
  v19 = v15 + 1;
  v20 = v16 - 2;
  while ( v20 )
  {
    v21 = 6LL * (unsigned int)v18;
    *((_QWORD *)v13 + 6 * (unsigned int)v18 + 1) = v19;
    do
    {
      if ( *v19 == 92 )
        break;
      *((_WORD *)v13 + 24 * (unsigned int)v18) += 2;
      ++v19;
      v20 -= 2;
    }
    while ( v20 );
    v22 = *((_WORD *)v13 + 24 * (unsigned int)v18);
    LODWORD(v18) = v18 + 1;
    *((_WORD *)v13 + 4 * v21 + 1) = v22;
    if ( !v20 )
      break;
    do
    {
      if ( *v19 != 92 )
        break;
      ++v19;
      v20 -= 2;
    }
    while ( v20 );
  }
  *a3 = v18;
  while ( (unsigned int)v18 > 1 )
  {
    if ( !v4 )
      goto LABEL_26;
    v18 = (unsigned int)(v18 - 1);
    v23 = 6 * v18;
    *((_DWORD *)v13 + 2 * v23 + 10) = *(_DWORD *)(v4 + 32) >> 31;
    *((_QWORD *)v13 + v23 + 3) = 0LL;
    *((_DWORD *)v13 + 2 * v23 + 6) = -1;
    *((_WORD *)v13 + 4 * v23 + 14) = 0;
    v4 = *(_QWORD *)(v4 + 64);
  }
  *((_DWORD *)v13 + 10) = 0;
  result = 0LL;
  *((_QWORD *)v13 + 3) = 0LL;
  *((_DWORD *)v13 + 6) = -1;
  *((_WORD *)v13 + 14) = 0;
  *a4 = v13;
  return result;
}
