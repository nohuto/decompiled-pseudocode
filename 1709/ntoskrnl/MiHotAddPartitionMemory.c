/*
 * XREFs of MiHotAddPartitionMemory @ 0x1406EE0EC
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x1406EE638 (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x140236734 (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x1402375C0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140237794 (MiInsertPartitionPages.c)
 *     RtlAreBitsClearEx @ 0x140251CA0 (RtlAreBitsClearEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1406EE4F8 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(__int16 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned int v7; // r13d
  int v8; // r15d
  unsigned int v9; // esi
  __int16 *v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  int updated; // edi
  int v14; // ecx
  __int64 result; // rax
  PVOID *v16; // rax
  int v17; // r14d
  PVOID *v18; // rbx
  PVOID *v19; // rax
  PVOID *v20; // rsi
  PVOID *v21; // rcx
  _QWORD v22[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 *v23[8]; // [rsp+40h] [rbp-40h] BYREF
  PVOID *v25; // [rsp+D8h] [rbp+58h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v23, 0, 0x38uLL);
  v6 = 0LL;
  v7 = *(_DWORD *)(a3 + 4);
  v8 = *(_DWORD *)a3 & 1;
  *(_QWORD *)(a3 + 8) = 0LL;
  v9 = 0;
  v25 = 0LL;
  v10 = 0LL;
  if ( v7 )
  {
    while ( 1 )
    {
      v11 = *a2;
      if ( *a2 < v6 )
        break;
      v12 = a2[1];
      v6 = v12 + v11;
      if ( v12 + v11 <= v11 || (__int16 *)((char *)v10 + v12) <= v10 )
        break;
      v10 = (__int16 *)((char *)v10 + v12);
      if ( !MiAddRangeToPartitionTree((unsigned __int64 *)&v25, v11, v12, 0) )
      {
        updated = -1073741670;
        goto LABEL_11;
      }
      ++v9;
      a2 += 2;
      if ( v9 >= v7 )
        goto LABEL_7;
    }
    updated = -1073741811;
    goto LABEL_11;
  }
LABEL_7:
  updated = MiUpdatePartitionLargePfnBitMap(a1, &v25);
  if ( updated < 0 )
    goto LABEL_11;
  updated = 0;
  if ( v8 )
  {
    v16 = v25;
    v17 = 0;
    v18 = 0LL;
    v23[0] = a1;
    while ( v16 )
    {
      v18 = v16;
      v16 = (PVOID *)*v16;
    }
    while ( v18 )
    {
      v19 = (PVOID *)v18[1];
      v20 = v18;
      v21 = v18;
      if ( v19 )
      {
        do
        {
          v18 = v19;
          v19 = (PVOID *)*v19;
        }
        while ( v19 );
      }
      else
      {
        while ( 1 )
        {
          v18 = (PVOID *)((unsigned __int64)v18[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v18 || *v18 == v21 )
            break;
          v21 = v18;
        }
      }
      if ( v17 == 1 )
      {
        RtlAvlRemoveNode((unsigned __int64 *)&v25, (__int64)v20);
        ExFreePoolWithTag(v20[5], 0);
        ExFreePoolWithTag(v20, 0);
      }
      else
      {
        MiActOnPartitionNodePages((__int64)v20, 9u, v23);
        if ( SHIDWORD(v23[2]) < 0 )
        {
          v17 = 1;
          if ( RtlAreBitsClearEx((__int64)(v20 + 4), 0LL, 0x40000uLL) )
            v18 = v20;
        }
      }
    }
    v10 = v23[5];
    if ( v23[5] )
    {
      v14 = v22[3];
      goto LABEL_31;
    }
LABEL_11:
    MiFreePartitionTree(a1, (unsigned __int64 *)&v25, 0, 0);
    return (unsigned int)updated;
  }
  v14 = LODWORD(v22[3]) | 2;
  LODWORD(v22[3]) |= 2u;
LABEL_31:
  if ( (*(_DWORD *)a3 & 2) == 0 )
    LODWORD(v22[3]) = v14 | 1;
  v22[0] = &v25;
  MiInsertPartitionPages((__int64)&MiSystemPartition, (__int64)a1, (__int64)v22, (unsigned __int64)v10);
  result = 0LL;
  *(_QWORD *)(a3 + 8) = v10;
  return result;
}
