/*
 * XREFs of PoFxIssueComponentPerfStateChangeMultiple @ 0x140274970
 * Callers:
 *     PoFxIssueComponentPerfStateChange @ 0x140274940 (PoFxIssueComponentPerfStateChange.c)
 * Callees:
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402756D4 (PopFxIssueComponentPerfStateChanges.c)
 */

__int64 __fastcall PoFxIssueComponentPerfStateChangeMultiple(
        ULONG_PTR BugCheckParameter2,
        char a2,
        unsigned int a3,
        __int64 a4,
        void *Src,
        __int64 a6)
{
  if ( (a2 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( (a2 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( a3 >= *(_DWORD *)(BugCheckParameter2 + 708) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 2uLL);
  return PopFxIssueComponentPerfStateChanges(BugCheckParameter2, Src, a6);
}
