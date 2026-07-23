/*
 * XREFs of EtwpDereferenceStackEntry @ 0x14025834C
 * Callers:
 *     EtwpStackRundown @ 0x1402583B0 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x140258578 (EtwpTraceStackKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     EtwpTraceCachedStack @ 0x14025849C (EtwpTraceCachedStack.c)
 */

PSLIST_ENTRY __fastcall EtwpDereferenceStackEntry(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
{
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY result; // rax
  _SLIST_HEADER *v5; // rsi
  _SLIST_ENTRY *Next; // rbx

  v3 = ListEntry;
  result = (PSLIST_ENTRY)(unsigned int)_InterlockedExchangeAdd(
                                         (volatile signed __int32 *)&ListEntry[1].Next + 2,
                                         0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpTraceCachedStack(LODWORD(a2->Alignment), 6179LL, ListEntry);
    v5 = a2 + 1;
    do
    {
      Next = v3[1].Next;
      result = RtlpInterlockedPushEntrySList(v5, v3);
      v3 = Next;
    }
    while ( Next );
  }
  return result;
}
