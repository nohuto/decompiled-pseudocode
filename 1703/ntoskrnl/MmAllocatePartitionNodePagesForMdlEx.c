/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x140077330
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x140077240 (MmAllocatePagesForMdlEx.c)
 *     HvlpDepositPages @ 0x1401E567C (HvlpDepositPages.c)
 *     MmAllocateNodePagesForMdlEx @ 0x140210300 (MmAllocateNodePagesForMdlEx.c)
 *     KiComputeNumaCosts @ 0x140817D54 (KiComputeNumaCosts.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140077298 (MiPartitionObjectToPartition.c)
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        ULONG_PTR **BugCheckParameter2)
{
  int v9; // ebx
  int v12; // r14d
  int v13; // ebp
  unsigned int v14; // eax

  v9 = a3;
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
  if ( (v13 & 0x100) == 0 || (v13 & 4) == 0 && !KeGetCurrentIrql() )
  {
    v14 = (unsigned int)MiPartitionObjectToPartition(BugCheckParameter2);
    return MiAllocatePagesForMdl(v14, a1, a2, v9, a4, v12, a6, v13);
  }
  return 0LL;
}
