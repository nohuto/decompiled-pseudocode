/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1C0110FA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _SetTargetingWindowValue @ 0x1C011100C (_SetTargetingWindowValue.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    if ( gptiCurrent == *(_QWORD *)(v4 + 16) )
      v7 = SetTargetingWindowValue(v4, a2);
    else
      UserSetLastError(5LL, v5);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
