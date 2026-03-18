/*
 * XREFs of MiHotAddPartitionMemory @ 0x14075757C
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x140757B20 (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14026E0FC (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14026F18C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 *     RtlAreBitsClearEx @ 0x140287770 (RtlAreBitsClearEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407579D0 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(__int16 *a1, unsigned __int64 *a2, __int64 a3)
{
  int updated; // edi
  __int16 *v6; // r14
  __int64 result; // rax
  unsigned __int64 v8; // r14
  unsigned int v9; // r12d
  int v10; // r15d
  __int16 *v11; // rbx
  unsigned int v12; // esi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // ecx
  PVOID *v16; // rax
  int v17; // r15d
  PVOID *i; // rbx
  PVOID **v19; // rax
  PVOID *v20; // rsi
  PVOID *v21; // rcx
  PVOID *v22; // rcx
  _QWORD v23[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 *v24[8]; // [rsp+40h] [rbp-40h] BYREF
  PVOID *v26; // [rsp+D8h] [rbp+58h] BYREF

  memset(v23, 0, sizeof(v23));
  memset(v24, 0, 0x38uLL);
  v26 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    updated = -1073741727;
LABEL_3:
    v6 = a1;
LABEL_4:
    MiFreePartitionTree(v6, (unsigned __int64 *)&v26, 0, 0);
    return (unsigned int)updated;
  }
  v8 = 0LL;
  v9 = *(_DWORD *)(a3 + 4);
  v10 = *(_DWORD *)a3 & 1;
  *(_QWORD *)(a3 + 8) = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v13 = *a2;
      if ( *a2 < v8 )
        break;
      v14 = a2[1];
      v8 = v14 + v13;
      if ( v14 + v13 <= v13 || (__int16 *)((char *)v11 + v14) <= v11 )
        break;
      v11 = (__int16 *)((char *)v11 + v14);
      if ( !MiAddRangeToPartitionTree((unsigned __int64 *)&v26, v13, v14, 0) )
      {
        updated = -1073741670;
        goto LABEL_3;
      }
      ++v12;
      a2 += 2;
      if ( v12 >= v9 )
        goto LABEL_11;
    }
    updated = -1073741811;
    goto LABEL_3;
  }
LABEL_11:
  v6 = a1;
  updated = MiUpdatePartitionLargePfnBitMap(a1, &v26);
  if ( updated < 0 )
    goto LABEL_4;
  updated = 0;
  if ( v10 )
  {
    v16 = v26;
    v17 = 0;
    i = 0LL;
    v24[0] = a1;
    while ( v16 )
    {
      i = v16;
      v16 = (PVOID *)*v16;
    }
    while ( i )
    {
      v19 = (PVOID **)i[1];
      v20 = i;
      v21 = i;
      if ( v19 )
      {
        v22 = *v19;
        for ( i = (PVOID *)i[1]; v22; v22 = (PVOID *)*v22 )
          i = v22;
      }
      else
      {
        while ( 1 )
        {
          i = (PVOID *)((unsigned __int64)i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || *i == v21 )
            break;
          v21 = i;
        }
      }
      if ( v17 == 1 )
      {
        RtlAvlRemoveNode((unsigned __int64 *)&v26, (__int64)v20);
        ExFreePoolWithTag(v20[5], 0);
        ExFreePoolWithTag(v20, 0);
      }
      else
      {
        MiActOnPartitionNodePages((__int64)v20, 9u, v24);
        if ( SHIDWORD(v24[2]) < 0 )
        {
          v17 = 1;
          if ( RtlAreBitsClearEx((__int64)(v20 + 4), 0LL, 0x40000uLL) )
            i = v20;
        }
      }
    }
    v11 = v24[5];
    if ( !v24[5] )
      goto LABEL_4;
    v15 = v23[3];
  }
  else
  {
    v15 = LODWORD(v23[3]) | 2;
    LODWORD(v23[3]) |= 2u;
  }
  if ( (*(_DWORD *)a3 & 2) == 0 )
    LODWORD(v23[3]) = v15 | 1;
  v23[0] = &v26;
  MiInsertPartitionPages((__int64)&MiSystemPartition, (__int64)a1, (__int64)v23, (unsigned __int64)v11);
  result = 0LL;
  *(_QWORD *)(a3 + 8) = v11;
  return result;
}
