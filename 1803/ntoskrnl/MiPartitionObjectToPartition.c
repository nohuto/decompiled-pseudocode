/*
 * XREFs of MiPartitionObjectToPartition @ 0x1400B3C4C
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400B3440 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateNonChargedSecurePages @ 0x140255080 (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402551CC (MmFreeNonChargedSecurePages.c)
 *     MmGetPageFileInformation @ 0x1405587D4 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1405E7290 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x14064DCF0 (MmGetPhysicalMemoryRangesEx.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiPartitionObjectToPartition(ULONG_PTR **BugCheckParameter2, char a2, _BYTE *a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  int v6; // r11d
  ULONG_PTR *v7; // r10
  ULONG_PTR v9; // r8

  LOBYTE(BugCheckParameter4) = 0;
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v7 = *(ULONG_PTR **)(qword_1403CBD88
                         + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
    }
    else
    {
      v7 = *BugCheckParameter2;
      v6 = 1;
    }
  }
  else
  {
    v7 = &MiSystemPartition;
  }
  if ( *((_DWORD *)v7 + 2) != 305535296 )
    goto LABEL_15;
  if ( v6 != 1 )
    goto LABEL_5;
  if ( (ULONG_PTR **)v7[21] != BugCheckParameter2 )
LABEL_15:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v7, 0LL);
  if ( PsReferencePartitionSafe((__int64)BugCheckParameter2) )
  {
    LOBYTE(BugCheckParameter4) = 1;
  }
  else
  {
    if ( a2 )
      KeBugCheckEx(0x1Au, 0x41002uLL, v9, (ULONG_PTR)v7, BugCheckParameter4);
    v7 = (ULONG_PTR *)BugCheckParameter4;
  }
LABEL_5:
  *a3 = BugCheckParameter4;
  return v7;
}
