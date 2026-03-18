/*
 * XREFs of PoFxCompleteIdleCondition @ 0x14012A750
 * Callers:
 *     <none>
 * Callees:
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x1400FE1D8 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 */

void __fastcall PoFxCompleteIdleCondition(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rsi
  int v4; // ebx

  v3 = (unsigned int)BugCheckParameter3;
  v4 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter2[79]
                                                                   + 8LL * (unsigned int)BugCheckParameter3)
                                                       + 136LL));
  if ( !v4 )
  {
    PopFxAddLogEntry(BugCheckParameter2[6], BugCheckParameter3, 13, 1LL);
    PopFxIdleWorkerTail(BugCheckParameter2, v3, 0LL);
  }
  if ( v4 < 0 )
    PopFxBugCheck(0x613uLL, (ULONG_PTR)BugCheckParameter2, v3, 2uLL);
}
