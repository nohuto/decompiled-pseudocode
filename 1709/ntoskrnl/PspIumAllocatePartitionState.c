/*
 * XREFs of PspIumAllocatePartitionState @ 0x14024F628
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePartitionState(__int64 a1)
{
  void *BugCheckParameter2; // rbp
  _DWORD *PoolWithTag; // rax
  unsigned __int64 v4; // rdi
  unsigned int v6; // eax
  char *PartitionNodePagesForMdl; // rax

  BugCheckParameter2 = *(void **)(a1 + 16);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x70507549u);
  v4 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  PoolWithTag[22] = 0;
  PoolWithTag[1] = 0;
  *((_QWORD *)PoolWithTag + 1) = BugCheckParameter2;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  v6 = *(_DWORD *)(a1 + 24);
  if ( v6 < 8 )
    v6 = 8;
  *(_DWORD *)(v4 + 152) = v6;
  PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                               0LL,
                               0xFFFFFFFFFFFFFFFFuLL,
                               0LL,
                               (unsigned __int64)v6 << 12,
                               1,
                               0,
                               521,
                               (ULONG_PTR)BugCheckParameter2);
  *(_QWORD *)(v4 + 160) = PartitionNodePagesForMdl;
  if ( !PartitionNodePagesForMdl )
  {
    ExFreePoolWithTag((PVOID)v4, 0);
    return 3221225626LL;
  }
  *(_DWORD *)(v4 + 156) = *(_DWORD *)(v4 + 152);
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_WORD *)(v4 + 106) = 0;
  *(_DWORD *)(v4 + 136) = 168;
  *(_WORD *)(v4 + 104) = 8 * ((((v4 & 0xFFF) + 4263) >> 12) + 6);
  *(_QWORD *)(v4 + 128) = v4 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v4 + 140) = v4 & 0xFFF;
  MiProbeAndLockPages((_DWORD *)(v4 + 96), 0, 1);
  if ( BugCheckParameter2 )
    ObfReferenceObjectWithTag(BugCheckParameter2, 0x746C6644u);
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 144);
  return 0LL;
}
