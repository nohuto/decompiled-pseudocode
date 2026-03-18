/*
 * XREFs of MiMakePartitionMemoryBlock @ 0x1406BCFEC
 * Callers:
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MiUpdatePartitionMemory @ 0x14021ED10 (MiUpdatePartitionMemory.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiCreateNodeLists @ 0x1405A2018 (MiCreateNodeLists.c)
 *     MiConvertInitialMemoryBlock @ 0x1405BAD50 (MiConvertInitialMemoryBlock.c)
 */

void __fastcall MiMakePartitionMemoryBlock(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int16 *v7; // r14
  int v8; // ebx
  _DWORD *PoolWithTag; // rax
  void *v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *i; // rax
  _QWORD *v13; // rax
  __int64 v14; // r9
  _QWORD *v15; // rcx
  __int16 *v16; // rbx
  __int16 *v17[7]; // [rsp+28h] [rbp-19h] BYREF
  __int16 *v18[7]; // [rsp+60h] [rbp+1Fh] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v17, 0, sizeof(v17));
  v2 = *(_QWORD **)(a1 + 56);
  v3 = 0LL;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
  }
  while ( v3 )
  {
    v4 = (_QWORD *)v3[1];
    v5 = (__int64)v3;
    v6 = v3;
    if ( v4 )
    {
      do
      {
        v3 = v4;
        v4 = (_QWORD *)*v4;
      }
      while ( v4 );
    }
    else
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || (_QWORD *)*v3 == v6 )
          break;
        v6 = v3;
      }
    }
    MiActOnPartitionNodePages(v5, 4, v17);
  }
  v7 = v17[5];
  if ( v17[5] )
  {
    v8 = (int)v17[4];
    if ( v17[4] <= (__int16 *)0x7FFFFFFFFFFFFFFLL )
    {
      *(_OWORD *)&v17[1] = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * ((__int64)v17[4] + 1), 0x6C4D6D4Du);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v8;
        v11 = 0LL;
        v18[6] = (__int16 *)PoolWithTag;
        *((_QWORD *)PoolWithTag + 1) = v7;
        for ( i = *(_QWORD **)(a1 + 56); i; i = (_QWORD *)*i )
          v11 = i;
        while ( v11 )
        {
          v13 = (_QWORD *)v11[1];
          v14 = (__int64)v11;
          v15 = v11;
          if ( v13 )
          {
            do
            {
              v11 = v13;
              v13 = (_QWORD *)*v13;
            }
            while ( v13 );
          }
          else
          {
            while ( 1 )
            {
              v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v11 || (_QWORD *)*v11 == v15 )
                break;
              v15 = v11;
            }
          }
          MiActOnPartitionNodePages(v14, 5, v18);
        }
        v17[1] = (__int16 *)MiConvertInitialMemoryBlock(a1, (__int64)v10);
        v16 = v17[1];
        ExFreePoolWithTag(v10, 0);
        if ( v16 )
          v17[2] = (__int16 *)MiCreateNodeLists(a1, (__int64)v16);
      }
      MiUpdatePartitionMemory(a1, (__int64)v17);
    }
  }
}
