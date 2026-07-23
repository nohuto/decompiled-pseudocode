/*
 * XREFs of MiAllocatePoolPages @ 0x1400212B0
 * Callers:
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140133984 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14025ADD0 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     InitializePool @ 0x140814AC0 (InitializePool.c)
 * Callees:
 *     MiFindNonPagedPoolVa @ 0x1400AD2B4 (MiFindNonPagedPoolVa.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400B2F20 (MiAssignNonPagedPoolPtes.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 *     MiFlushTbAsNeeded @ 0x1400F9A20 (MiFlushTbAsNeeded.c)
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiFreeExcessSegments @ 0x140126A94 (MiFreeExcessSegments.c)
 *     MiTrimSegmentCache @ 0x140167B80 (MiTrimSegmentCache.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiAllocatePoolPages(unsigned int a1, unsigned __int64 a2)
{
  ULONG_PTR result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  unsigned __int64 NonPagedPoolVa; // rdi
  __int64 NonPagedPoolPages; // rax
  int v11; // [rsp+50h] [rbp+8h] BYREF

  if ( (a1 & 1) != 0 )
    return MiAllocatePagedPoolPages();
  v4 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v5 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  if ( v4 > 3 )
    goto LABEL_11;
  v6 = 25 * v5;
  if ( (a1 & 0x200) != 0 )
    v6 += 3LL;
  v7 = &qword_14036C1C8[v4 + v6];
  if ( !LOWORD(v7->Alignment) || (v8 = RtlpInterlockedPopEntrySList(v7)) == 0LL )
  {
LABEL_11:
    if ( v4 < 0x100000000LL )
    {
      NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v4, (unsigned int)v5, &v11);
      if ( !NonPagedPoolVa )
      {
        MiFreeExcessSegments(1LL);
        NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v4, (unsigned int)v5, &v11);
        if ( !NonPagedPoolVa )
        {
          ++dword_14036BD30;
          ++dword_14036BD54;
          MiTrimSegmentCache();
          return 0LL;
        }
      }
      if ( *(char *)(((NonPagedPoolVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) < 0 )
        return NonPagedPoolVa;
      if ( v11 == 2 )
        MiFlushTbAsNeeded(((NonPagedPoolVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      NonPagedPoolPages = MiFindNonPagedPoolPages((unsigned int)v5, v4);
      if ( NonPagedPoolPages )
      {
        MiAssignNonPagedPoolPtes(NonPagedPoolVa, v4, a1, NonPagedPoolPages);
        return NonPagedPoolVa;
      }
      ++dword_14036BD30;
      MiTrimSegmentCache();
      MiReturnNonPagedPoolVa(NonPagedPoolVa, v4, a1);
    }
    return 0LL;
  }
  result = (ULONG_PTR)&v8[-1];
  if ( *(_QWORD *)result != (result ^ qword_14036CFC0) )
    KeBugCheckEx(0x1Au, 0x5200uLL, result, *(_QWORD *)result, result ^ qword_14036CFC0);
  return result;
}
