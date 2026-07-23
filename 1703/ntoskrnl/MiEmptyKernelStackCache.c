/*
 * XREFs of MiEmptyKernelStackCache @ 0x14003C924
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiScrubNode @ 0x140226610 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406BF984 (MmRelocatePfnList.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x140023CD4 (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 */

unsigned __int64 MiEmptyKernelStackCache()
{
  unsigned __int64 result; // rax
  unsigned int i; // ebx
  int j; // edi
  _SLIST_HEADER *v3; // rsi
  ULONG_PTR v4; // r8
  PSLIST_ENTRY v5; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( (MiFlags & 0x800) != 0 )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      for ( j = 0; j < 2; ++j )
      {
        v3 = &qword_14036C1C8[25 * i + 2 * j];
        while ( 1 )
        {
          v5 = RtlpInterlockedPopEntrySList(v3 + 7);
          if ( !v5 )
            break;
          v4 = (ULONG_PTR)&v5[-255];
          if ( v5[-1].Next != (_SLIST_ENTRY *)((unsigned __int64)&v5[-255] ^ qword_14036CFC0) )
            KeBugCheckEx(0x1Au, 0x3472uLL, v4, *(_QWORD *)(v4 + 4064), v4 ^ qword_14036CFC0);
          MiDeleteKernelStack(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0);
        }
      }
      result = (unsigned __int16)KeNumberNodes;
    }
  }
  return result;
}
