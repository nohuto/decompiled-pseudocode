/*
 * XREFs of MiAllocatePoolPages @ 0x1400C3740
 * Callers:
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140143DE4 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14028451C (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     InitializePool @ 0x14082DEFC (InitializePool.c)
 * Callees:
 *     MiFindNonPagedPoolPages @ 0x140089100 (MiFindNonPagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     MiFindNonPagedPoolVa @ 0x1400C193C (MiFindNonPagedPoolVa.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400C38C0 (MiAssignNonPagedPoolPtes.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiAllocatePoolPages(unsigned int a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rcx
  _SLIST_HEADER *v9; // rcx
  PSLIST_ENTRY v10; // rax
  unsigned __int64 NonPagedPoolVa; // rdi
  __int64 NonPagedPoolPages; // rax
  int v13; // [rsp+50h] [rbp+8h] BYREF

  if ( (a1 & 1) != 0 )
    return (ULONG_PTR)MiAllocatePagedPoolPages(a1, a2, a3, a4);
  v6 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v7 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  if ( v6 > 3 )
    goto LABEL_11;
  v8 = 25 * v7;
  if ( (a1 & 0x200) != 0 )
    v8 += 3LL;
  v9 = &qword_140388510[v6 + v8];
  if ( !LOWORD(v9->Alignment) || (v10 = RtlpInterlockedPopEntrySList(v9)) == 0LL )
  {
LABEL_11:
    if ( v6 < 0x100000000LL )
    {
      NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v6, v7, &v13);
      if ( !NonPagedPoolVa )
      {
        MiFreeExcessSegments();
        NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v6, v7, &v13);
        if ( !NonPagedPoolVa )
        {
          ++dword_140388030;
          ++dword_140388054;
          MiFreeExcessSegments();
          return 0LL;
        }
      }
      if ( *(char *)(((NonPagedPoolVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) < 0 )
        return NonPagedPoolVa;
      if ( v13 == 2 )
        MiFlushTbAsNeeded(((NonPagedPoolVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v6, 0LL);
      NonPagedPoolPages = MiFindNonPagedPoolPages(v7, v6);
      if ( NonPagedPoolPages )
      {
        MiAssignNonPagedPoolPtes(NonPagedPoolVa, v6, a1, NonPagedPoolPages);
        return NonPagedPoolVa;
      }
      ++dword_140388030;
      MiFreeExcessSegments();
      MiReturnNonPagedPoolVa(NonPagedPoolVa, v6, a1);
    }
    return 0LL;
  }
  result = (ULONG_PTR)&v10[-1];
  if ( *(_QWORD *)result != (result ^ qword_140389280) )
    KeBugCheckEx(0x1Au, 0x5200uLL, result, *(_QWORD *)result, result ^ qword_140389280);
  return result;
}
