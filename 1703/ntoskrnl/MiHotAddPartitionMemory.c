/*
 * XREFs of MiHotAddPartitionMemory @ 0x1406BCDD0
 * Callers:
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14021D2DC (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14021DF3C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     RtlAreBitsClearEx @ 0x14023C420 (RtlAreBitsClearEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1406BD19C (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(__int16 *a1, unsigned __int64 *a2, __int64 a3)
{
  int updated; // edi
  __int16 *v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // r15
  unsigned int v9; // r13d
  int v10; // r14d
  __int16 *v11; // rbx
  unsigned int v12; // esi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  PVOID *v15; // rax
  int v16; // r14d
  PVOID *v17; // rbx
  PVOID *v18; // rax
  PVOID *v19; // rsi
  PVOID *v20; // rcx
  _QWORD v21[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 *v22[8]; // [rsp+40h] [rbp-40h] BYREF
  PVOID *v24; // [rsp+D8h] [rbp+58h] BYREF

  memset(v21, 0, sizeof(v21));
  memset(v22, 0, 0x38uLL);
  v24 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    updated = -1073741727;
LABEL_3:
    v6 = a1;
LABEL_4:
    MiFreePartitionTree(v6, (unsigned __int64 *)&v24, 0);
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
      if ( !(unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)&v24, v13, v14, 0) )
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
  updated = MiUpdatePartitionLargePfnBitMap(a1, &v24);
  if ( updated < 0 )
    goto LABEL_4;
  updated = 0;
  if ( v10 )
  {
    v15 = v24;
    v16 = 0;
    v17 = 0LL;
    v22[0] = a1;
    while ( v15 )
    {
      v17 = v15;
      v15 = (PVOID *)*v15;
    }
    while ( v17 )
    {
      v18 = (PVOID *)v17[1];
      v19 = v17;
      v20 = v17;
      if ( v18 )
      {
        do
        {
          v17 = v18;
          v18 = (PVOID *)*v18;
        }
        while ( v18 );
      }
      else
      {
        while ( 1 )
        {
          v17 = (PVOID *)((unsigned __int64)v17[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v17 || *v17 == v20 )
            break;
          v20 = v17;
        }
      }
      if ( v16 == 1 )
      {
        RtlAvlRemoveNode((unsigned __int64 *)&v24, (__int64)v19);
        ExFreePoolWithTag(v19[5], 0);
        ExFreePoolWithTag(v19, 0);
      }
      else
      {
        MiActOnPartitionNodePages((__int64)v19, 8, v22);
        if ( SHIDWORD(v22[2]) < 0 )
        {
          v16 = 1;
          if ( RtlAreBitsClearEx((__int64)(v19 + 4), 0LL, 0x40000uLL) )
            v17 = v19;
        }
      }
    }
    v11 = v22[5];
    if ( !v22[5] )
      goto LABEL_4;
  }
  if ( (*(_DWORD *)a3 & 2) == 0 )
    LODWORD(v21[3]) |= 1u;
  v21[0] = &v24;
  MiInsertPartitionPages((__int64)&MiSystemPartition, (__int64)a1, (__int64)v21);
  result = 0LL;
  *(_QWORD *)(a3 + 8) = v11;
  return result;
}
