/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x1406BC714
 * Callers:
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14003CAA4 (MiAcquireNonPagedResources.c)
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 *     MiFindLargeNodePage @ 0x14020EDB8 (MiFindLargeNodePage.c)
 *     MiAddMdlToPartitionTree @ 0x14021D22C (MiAddMdlToPartitionTree.c)
 *     MiAddRangeToPartitionTree @ 0x14021D2DC (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionPageRun @ 0x14021DED4 (MiFreePartitionPageRun.c)
 *     MiFreePartitionTree @ 0x14021DF3C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1406BD19C (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(ULONG_PTR *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  ULONG_PTR *v5; // r14
  unsigned int v6; // edi
  int v8; // r13d
  __int64 v9; // rsi
  unsigned __int64 v11; // rcx
  unsigned int v12; // r12d
  unsigned __int64 v13; // rbx
  unsigned __int64 LargeNodePage; // r8
  __int64 v15; // rdi
  BOOL v16; // r12d
  int i; // r13d
  __int64 v18; // rax
  unsigned int *PagesForMdl; // rax
  unsigned int *v20; // r12
  unsigned __int64 v21; // rdi
  __int64 v22; // rdi
  int updated; // ebx
  int v24; // [rsp+40h] [rbp-30h]
  unsigned __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 *v26; // [rsp+50h] [rbp-20h] BYREF
  __int128 v27; // [rsp+58h] [rbp-18h]
  int v28; // [rsp+68h] [rbp-8h]
  unsigned int v29; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+48h]
  unsigned int v31; // [rsp+C8h] [rbp+58h]

  v31 = a4;
  v30 = a2;
  v25 = 0LL;
  v5 = &MiSystemPartition;
  v6 = a4;
  if ( a1 )
    v5 = a1;
  v24 = a5 & 4;
  v8 = ~(2 * a5) & 2 | 0x108061;
  if ( (a5 & 4) == 0 )
    v8 = ~(2 * a5) & 2 | 0x100061;
  v9 = 0LL;
  if ( !(unsigned int)MiAcquireNonPagedResources((__int64)v5, a3) )
    return 3221225626LL;
  while ( 1 )
  {
    v11 = a3 - v9;
    if ( (unsigned __int64)(a3 - v9) < 0x200 )
      break;
    v12 = v11 < 0x40000;
    v29 = v12;
    v13 = MiLargePageSizes[v11 < 0x40000];
    LargeNodePage = MiFindLargeNodePage((__int64)v5, v6, &v29, v8, 1);
    if ( !LargeNodePage )
      break;
    v15 = (__int64)(LargeNodePage + 0x58000000000LL) / 48;
    if ( v29 != v12 )
      v13 = MiLargePageSizes[v29];
    v9 += v13;
    v16 = *(_QWORD *)(LargeNodePage + 16) == 0LL;
    if ( !(unsigned int)MiAddRangeToPartitionTree(&v25, (__int64)(LargeNodePage + 0x58000000000LL) / 48, v13, v16) )
    {
      MiFreePartitionPageRun(v5, v15, v13, v16);
      break;
    }
    if ( v5 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14036D120, v13);
    if ( v9 == a3 )
      goto LABEL_19;
    v6 = v31;
  }
  if ( v9 != a3 )
  {
    MiReleaseNonPagedResources((__int64)v5, a3 - v9);
    if ( (a5 & 2) != 0 )
    {
LABEL_28:
      updated = -1073741670;
      goto LABEL_29;
    }
  }
LABEL_19:
  for ( i = v8 & 3 | 0x10; v9 != a3; v9 += v21 )
  {
    v18 = a3 - v9;
    if ( (unsigned __int64)(a3 - v9) > 0xFFFFE )
      v18 = 1048574LL;
    PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                    (__int64)v5,
                                    -(__int64)(v24 != 0) & 0x100000000LL,
                                    0xFFFFFFFFFFFFFFFFuLL,
                                    0LL,
                                    v18 << 12,
                                    1,
                                    v31,
                                    i);
    v20 = PagesForMdl;
    if ( !PagesForMdl )
      goto LABEL_28;
    if ( !(unsigned int)MiAddMdlToPartitionTree((__int64)&v25, (__int64)PagesForMdl) )
    {
      MiFreePagesFromMdl((ULONG_PTR)v20, 0);
      goto LABEL_28;
    }
    v21 = (unsigned __int64)v20[10] >> 12;
    ExFreePoolWithTag(v20, 0);
  }
  v22 = v30;
  updated = MiUpdatePartitionLargePfnBitMap(v30, &v25);
  if ( updated >= 0 )
  {
    v28 = 1;
    v26 = &v25;
    v27 = 0LL;
    MiInsertPartitionPages((__int64)v5, v22, (__int64)&v26);
    return (unsigned int)updated;
  }
LABEL_29:
  MiFreePartitionTree((__int16 *)v5, &v25, 1);
  return (unsigned int)updated;
}
