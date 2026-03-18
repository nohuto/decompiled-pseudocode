/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C01E77D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FeedbackHidePointerContactVisualization @ 0x1C01BC694 (FeedbackHidePointerContactVisualization.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx

  EnterCrit(0LL, 1LL);
  if ( a1 - 2 > 0xFFFD )
  {
    v5 = 0;
    UserSetLastError(87LL, v2);
  }
  else
  {
    v5 = FeedbackHidePointerContactVisualization((PointerList *)a1);
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
