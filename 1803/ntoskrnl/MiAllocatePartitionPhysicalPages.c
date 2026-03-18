/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x140756FD8
 * Callers:
 *     MmManagePartitionMoveMemory @ 0x140757C2C (MmManagePartitionMoveMemory.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     MiFreeMdlPageRun @ 0x140136A30 (MiFreeMdlPageRun.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14013A8EC (MiAcquireNonPagedResources.c)
 *     MiFindLargeNodePage @ 0x140254588 (MiFindLargeNodePage.c)
 *     MiAddMdlToPartitionTree @ 0x14026E02C (MiAddMdlToPartitionTree.c)
 *     MiAddRangeToPartitionTree @ 0x14026E0FC (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14026F18C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407579D0 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(
        ULONG_PTR *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  ULONG_PTR *v5; // r13
  unsigned int v6; // r14d
  int v8; // r12d
  unsigned __int64 v9; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 LargeNodePage; // r8
  ULONG_PTR v14; // r14
  int v15; // esi
  int v16; // r12d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rcx
  __int64 PagesForMdl; // rax
  unsigned int *v22; // rsi
  __int64 v23; // r14
  int updated; // ebx
  int v25; // [rsp+40h] [rbp-40h]
  _BOOL8 v26; // [rsp+48h] [rbp-38h]
  BOOL v27; // [rsp+48h] [rbp-38h]
  unsigned __int64 v28; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 *v29; // [rsp+58h] [rbp-28h] BYREF
  __int128 v30; // [rsp+60h] [rbp-20h]
  int v31; // [rsp+70h] [rbp-10h]
  BOOL v32; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+48h]
  unsigned int v34; // [rsp+D8h] [rbp+58h]

  v34 = a4;
  v33 = a2;
  v28 = 0LL;
  v5 = &MiSystemPartition;
  if ( a1 )
    v5 = a1;
  v6 = a4;
  v25 = a5 & 4;
  v8 = (2 * ((a5 & 1) == 0) + 1048673) | 0x8000;
  if ( (a5 & 4) == 0 )
    v8 = 2 * ((a5 & 1) == 0) + 1048673;
  v9 = 0LL;
  if ( !(unsigned int)MiAcquireNonPagedResources(v5, a3) )
    return 3221225626LL;
  while ( 1 )
  {
    v11 = a3 - v9;
    if ( a3 - v9 < 0x200 )
      break;
    v26 = v11 < 0x40000;
    v32 = v11 < 0x40000;
    v12 = MiLargePageSizes[v26];
    LargeNodePage = MiFindLargeNodePage((__int64)v5, v6, &v32, v8, 1);
    if ( !LargeNodePage )
      break;
    v14 = (__int64)(LargeNodePage + 0x58000000000LL) / 48;
    if ( v32 != v26 )
      v12 = MiLargePageSizes[v32];
    v27 = (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) == 0;
    if ( !MiAddRangeToPartitionTree(&v28, v14, v12, v27) )
    {
      MiFreeMdlPageRun(v14, v12, v27);
      break;
    }
    if ( v5 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1403CC658, v12);
    v9 += v12;
    if ( v9 == a3 )
      goto LABEL_19;
    v6 = v34;
  }
  if ( v9 != a3 )
  {
    MiReleaseNonPagedResources((__int64)v5, a3 - v9);
    if ( (a5 & 2) != 0 )
    {
LABEL_41:
      updated = -1073741670;
LABEL_42:
      MiFreePartitionTree((__int16 *)v5, &v28, 1, 1);
      return (unsigned int)updated;
    }
  }
LABEL_19:
  v15 = 3;
  v16 = v8 & 3 | 0x10;
  v32 = 0;
  v17 = -(__int64)(v25 != 0) & 0x100000000LL;
  v18 = 0LL;
  if ( (a5 & 0x10) != 0 )
  {
    v16 |= 0x60u;
    v19 = 512LL;
    if ( a3 >= 0x40000 && (KeFeatureBits & 0x2000000000LL) != 0 )
    {
      v19 = 0x40000LL;
      v32 = 1;
    }
    v18 = v19 << 12;
  }
  else
  {
    v19 = 1048574LL;
  }
  if ( v9 != a3 )
  {
    while ( 1 )
    {
      v20 = v19;
      if ( a3 - v9 <= v19 )
        v20 = a3 - v9;
      PagesForMdl = MiAllocatePagesForMdl((__int64)v5, v17, 0xFFFFFFFFFFFFFFFFuLL, v18, v20 << 12, 1, v34, v16);
      v22 = (unsigned int *)PagesForMdl;
      if ( PagesForMdl )
      {
        if ( !(unsigned int)MiAddMdlToPartitionTree((__int64)&v28, PagesForMdl) )
        {
          MiFreePagesFromMdl((ULONG_PTR)v22, 0);
          ExFreePoolWithTag(v22, 0);
          goto LABEL_41;
        }
        v9 += (unsigned __int64)v22[10] >> 12;
        ExFreePoolWithTag(v22, 0);
      }
      else
      {
        if ( !v32 )
          goto LABEL_41;
        v32 = 0;
        v18 = 0x200000LL;
        v19 = 512LL;
      }
      if ( v9 == a3 )
      {
        v15 = 3;
        break;
      }
      v17 = -(__int64)(v25 != 0) & 0x100000000LL;
    }
  }
  v23 = v33;
  updated = MiUpdatePartitionLargePfnBitMap(v33, &v28);
  if ( updated < 0 )
    goto LABEL_42;
  v29 = &v28;
  if ( (a5 & 8) != 0 )
    v15 = 7;
  v31 = v15;
  v30 = 0LL;
  return (unsigned int)MiInsertPartitionPages((__int64)v5, v23, (__int64)&v29, v9);
}
