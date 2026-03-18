/*
 * XREFs of MiPartitionObjectToPartition @ 0x140077298
 * Callers:
 *     MmGetNextPartition @ 0x14003A82C (MmGetNextPartition.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140077330 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140440830 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetPageFileInformation @ 0x1404C829C (MmGetPageFileInformation.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiPartitionObjectToPartition(ULONG_PTR **BugCheckParameter2)
{
  int v1; // r10d
  ULONG_PTR *v2; // r9

  v1 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v2 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
    }
    else
    {
      v2 = *BugCheckParameter2;
      v1 = 1;
    }
  }
  else
  {
    v2 = &MiSystemPartition;
  }
  if ( *((_DWORD *)v2 + 2) != 305535296
    || !v2[2]
    || (*((_DWORD *)v2 + 1) & 1) != 0
    || v1 == 1 && (ULONG_PTR **)v2[25] != BugCheckParameter2 )
  {
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v2, 0LL);
  }
  return v2;
}
