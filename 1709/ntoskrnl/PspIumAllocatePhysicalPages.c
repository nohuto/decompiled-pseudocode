/*
 * XREFs of PspIumAllocatePhysicalPages @ 0x14024F774
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePhysicalPages(int a1, ULONG_PTR a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  char *PartitionNodePagesForMdl; // rax
  char *v7; // rdi
  __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  struct _MDL MemoryDescriptorList; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h]

  v3 = 0;
  PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                               0LL,
                               0xFFFFFFFFFFFFFFFFuLL,
                               0LL,
                               (unsigned __int64)(unsigned int)(a1 + 1) << 12,
                               1,
                               0,
                               521,
                               a2);
  v7 = PartitionNodePagesForMdl;
  if ( !PartitionNodePagesForMdl )
    return 3221225495LL;
  if ( a1 )
  {
    v10 = *((_DWORD *)PartitionNodePagesForMdl + 10);
    MemoryDescriptorList.Next = 0LL;
    *(_DWORD *)&MemoryDescriptorList.Size = 131128;
    MemoryDescriptorList.StartVa = 0LL;
    *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
    v11 = v10 >> 12;
    v15 = *(_QWORD *)&PartitionNodePagesForMdl[8 * v11 + 40];
    v12 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v13 = v12;
    if ( !v12 )
    {
      MiFreePagesFromMdl((ULONG_PTR)v7, 0);
      v3 = -1073741670;
      goto LABEL_9;
    }
    memmove(v12, v7, 8LL * v11 + 48);
    v13[10] -= 4096;
    MmUnmapLockedPages(v13, &MemoryDescriptorList);
    v9 = v15;
  }
  else
  {
    v9 = *((_QWORD *)PartitionNodePagesForMdl + 6);
  }
  *a3 = v9;
LABEL_9:
  ExFreePoolWithTag(v7, 0);
  return v3;
}
