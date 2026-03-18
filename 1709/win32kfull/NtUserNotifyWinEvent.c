/*
 * XREFs of NtUserNotifyWinEvent @ 0x1C006D390
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(int a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx

  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a2);
  v11 = 0LL;
  if ( v8 )
  {
    xxxWindowEvent(a1, v8, a3, a4, 1);
    v11 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
