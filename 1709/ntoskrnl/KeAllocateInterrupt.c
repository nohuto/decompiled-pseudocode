/*
 * XREFs of KeAllocateInterrupt @ 0x1400B2D10
 * Callers:
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 */

PSLIST_ENTRY __fastcall KeAllocateInterrupt(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rbp
  unsigned __int16 v3; // bx
  PSLIST_ENTRY result; // rax
  unsigned int v5; // r14d
  _SLIST_ENTRY *v6; // rbx
  __int64 v7; // rsi

  v1 = a1 + 732;
  v3 = *(_WORD *)(a1[12].Alignment + 146);
  result = RtlpInterlockedPopEntrySList(a1 + 732);
  if ( result )
  {
LABEL_2:
    result[16].Next = (_SLIST_ENTRY *)a1;
  }
  else
  {
    v5 = v3;
    while ( 1 )
    {
      result = (PSLIST_ENTRY)MmAllocateIndependentPages(4096LL, v5);
      v6 = result;
      if ( !result )
        break;
      v7 = 12LL;
      do
      {
        RtlpInterlockedPushEntrySList(v1, v6);
        v6 += 20;
        --v7;
      }
      while ( v7 );
      result = RtlpInterlockedPopEntrySList(v1);
      if ( result )
        goto LABEL_2;
    }
  }
  return result;
}
