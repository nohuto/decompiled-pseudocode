/*
 * XREFs of MiEmptyKernelStackCache @ 0x14000F458
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiScrubNode @ 0x140238CDC (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406ED4E8 (MmRelocatePfnList.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     MiDeleteCachedKernelStack @ 0x14011C5D8 (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 */

unsigned __int64 MiEmptyKernelStackCache()
{
  unsigned __int64 result; // rax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  unsigned int j; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  PSLIST_HEADER v6; // rbp
  PSLIST_ENTRY v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( (MiFlags & 0x800) != 0 )
  {
    result = (unsigned int)KeNumberProcessors_0;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      Prcb = KeGetPrcb(i);
      if ( *(_QWORD *)(Prcb + 23560) && _InterlockedExchange64((volatile __int64 *)(Prcb + 23560), 0LL) )
        ((void (*)(void))MiDeleteCachedKernelStack)();
      result = (unsigned int)KeNumberProcessors_0;
    }
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      v4 = 2LL;
      v5 = 25LL * j;
      do
      {
        v6 = qword_140388510;
        while ( 1 )
        {
          v7 = RtlpInterlockedPopEntrySList(&v6[v5 + 7]);
          if ( !v7 )
            break;
          MiDeleteCachedKernelStack(v7);
        }
        v5 += 2LL;
        --v4;
      }
      while ( v4 );
      result = (unsigned __int16)KeNumberNodes;
    }
  }
  return result;
}
