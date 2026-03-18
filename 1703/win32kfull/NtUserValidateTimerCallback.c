/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C00DCD30
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTimerCallback @ 0x1C00DCD8C (ValidateTimerCallback.c)
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterSharedCrit(0LL, 1LL);
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  v4 = (int)ValidateTimerCallback(v2, a1);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
