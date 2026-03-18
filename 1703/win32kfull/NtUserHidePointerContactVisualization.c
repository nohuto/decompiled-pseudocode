/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C01DB580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     FeedbackHidePointerContactVisualization @ 0x1C01B7320 (FeedbackHidePointerContactVisualization.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-8h]

  EnterCrit(0LL, 1LL);
  if ( a1 - 2 > 0xFFFD )
  {
    v7 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v7 = FeedbackHidePointerContactVisualization((PointerList *)a1, v2, v3, v4, v11);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v7;
}
