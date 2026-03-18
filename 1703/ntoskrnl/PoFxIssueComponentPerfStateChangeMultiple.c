/*
 * XREFs of PoFxIssueComponentPerfStateChangeMultiple @ 0x14022A5F0
 * Callers:
 *     PoFxIssueComponentPerfStateChange @ 0x14022A5C0 (PoFxIssueComponentPerfStateChange.c)
 * Callees:
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxIssueComponentPerfStateChangeMultiple(
        ULONG_PTR BugCheckParameter2,
        char a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        __int64 a6)
{
  if ( (a2 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( (a2 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( a3 >= *(_DWORD *)(BugCheckParameter2 + 628) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 2uLL);
  return PopFxIssueComponentPerfStateChanges(BugCheckParameter2, a5, a6);
}
