/*
 * XREFs of MiPartitionObjectToPartition @ 0x14011CD74
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateNonChargedSecurePages @ 0x140217718 (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x140217864 (MmFreeNonChargedSecurePages.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140575470 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetPageFileInformation @ 0x140575550 (MmGetPageFileInformation.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiPartitionObjectToPartition(ULONG_PTR **BugCheckParameter2, char a2, char *a3)
{
  char v3; // r10
  int v4; // r11d
  ULONG_PTR *v5; // r9
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  v3 = 0;
  v4 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v5 = *(ULONG_PTR **)(qword_140388AF0
                         + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 2));
    }
    else
    {
      v5 = *BugCheckParameter2;
      v4 = 1;
    }
  }
  else
  {
    v5 = &MiSystemPartition;
  }
  if ( *((_DWORD *)v5 + 2) != 305535296 )
    goto LABEL_19;
  if ( v4 != 1 )
    goto LABEL_5;
  if ( (ULONG_PTR **)v5[21] != BugCheckParameter2 )
LABEL_19:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v5, 0LL);
  _m_prefetchw(BugCheckParameter2 + 3);
  v7 = (signed __int64)BugCheckParameter2[3];
  while ( (unsigned __int64)(v7 + 1) > 1 )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2 + 3, v7 + 1, v7);
    if ( v8 == v7 )
    {
      v3 = 1;
      goto LABEL_5;
    }
  }
  if ( v7 )
    __fastfail(0xEu);
  if ( a2 )
    KeBugCheckEx(0x1Au, 0x41002uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v5, 0LL);
  v5 = 0LL;
LABEL_5:
  *a3 = v3;
  return v5;
}
