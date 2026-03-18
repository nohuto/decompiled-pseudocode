/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C00F2030
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ValidateTimerCallback @ 0x1C00F2078 (ValidateTimerCallback.c)
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
  v6 = (int)ValidateTimerCallback(ThreadWin32Thread, a1);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
