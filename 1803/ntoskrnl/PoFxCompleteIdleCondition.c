/*
 * XREFs of PoFxCompleteIdleCondition @ 0x1400C8140
 * Callers:
 *     <none>
 * Callees:
 *     PopFxAddLogEntry @ 0x140077F7C (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x140078414 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

char __fastcall PoFxCompleteIdleCondition(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rax
  ULONG_PTR v4; // rsi
  int v5; // ebx

  v2 = BugCheckParameter2[89];
  v4 = (unsigned int)BugCheckParameter3;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v2 + 8LL * (unsigned int)BugCheckParameter3) + 136LL));
  if ( !v5 )
  {
    PopFxAddLogEntry(BugCheckParameter2[6], BugCheckParameter3, 13, 1LL);
    LOBYTE(v2) = PopFxIdleWorkerTail(BugCheckParameter2, v4, 0LL);
  }
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, (ULONG_PTR)BugCheckParameter2, v4, 2uLL);
  return v2;
}
