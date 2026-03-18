/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1C01060C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _SetTargetingWindowValue @ 0x1C010612C (_SetTargetingWindowValue.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r8

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    if ( gptiCurrent == *(_QWORD *)(v4 + 16) )
      v8 = SetTargetingWindowValue(v4, a2);
    else
      UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v9, v7);
  return v8;
}
