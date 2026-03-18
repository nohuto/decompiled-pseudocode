/*
 * XREFs of MiEmptyKernelStackCache @ 0x140186CB0
 * Callers:
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiScrubNode @ 0x1402707F0 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x14075693C (MmRelocatePfnList.c)
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     MiDeleteCachedKernelStack @ 0x140038BCC (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 */

unsigned __int64 MiEmptyKernelStackCache()
{
  unsigned __int64 result; // rax
  ULONG i; // ebx
  __int64 v2; // rcx
  unsigned int j; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  PSLIST_HEADER v6; // rbp
  PSLIST_ENTRY v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( (MiFlags & 0x800) != 0 )
  {
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      result = KeGetPrcb(i);
      if ( *(_QWORD *)(result + 23560) )
      {
        v2 = _InterlockedExchange64((volatile __int64 *)(result + 23560), 0LL);
        if ( v2 )
          result = MiDeleteCachedKernelStack(v2);
      }
    }
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      v4 = 2LL;
      v5 = 25LL * j;
      do
      {
        v6 = qword_1403CB6A8;
        while ( 1 )
        {
          v7 = RtlpInterlockedPopEntrySList(&v6[v5 + 7]);
          if ( !v7 )
            break;
          MiDeleteCachedKernelStack((__int64)v7);
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
