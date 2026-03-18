/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x14011CC10 (MmAllocatePagesForMdlEx.c)
 *     HvlpDepositPages @ 0x1401EA4C8 (HvlpDepositPages.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1402176E0 (MmAllocateNodePagesForMdlEx.c)
 *     PspIumAllocatePartitionState @ 0x14024F628 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x14024F774 (PspIumAllocatePhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140838CD8 (KiComputeNumaCosts.c)
 * Callees:
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiAllocatePagesForMdl @ 0x1400CB9E8 (MiAllocatePagesForMdl.c)
 *     MiPartitionObjectToPartition @ 0x14011CD74 (MiPartitionObjectToPartition.c)
 */

char *__fastcall MmAllocatePartitionNodePagesForMdlEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        signed __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        ULONG_PTR BugCheckParameter2)
{
  unsigned int v12; // r14d
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // r15
  char *PagesForMdl; // rbx

  if ( a6 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v12 = a5;
  if ( a5 == -1 || a5 > 2 )
    v12 = 3;
  v13 = a7;
  if ( (a7 & 0xFFFFF800) != 0 )
    return 0LL;
  if ( (a7 & 0x20) != 0 )
  {
    v13 = a7 | 0x10;
    if ( a3 )
    {
      if ( ((a3 - 1) & a3) != 0 || a3 < 4096 || a4 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v13 = a7 | 0x14;
    }
  }
  if ( (v13 & 0x100) != 0 && ((v13 & 4) != 0 || KeGetCurrentIrql()) )
    return 0LL;
  v14 = MiPartitionObjectToPartition(BugCheckParameter2);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  PagesForMdl = MiAllocatePagesForMdl(v14, a1, a2, a3, a4, v12, a6, v13);
  if ( (_BYTE)a6 )
    PsDereferencePartition(*(_QWORD *)(v15 + 168));
  return PagesForMdl;
}
