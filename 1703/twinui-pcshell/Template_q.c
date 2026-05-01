/*
 * XREFs of Template_q @ 0x1800336FC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76760fd8d2347637ca4c9aed770147f6___::Run @ 0x180032D30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76760fd8d2347637ca4c9aed770147f6___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bedd51116fa11b33adb0b90decd23b1___::Run @ 0x180032F10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9bedd51116fa11b33adb0b90decd23b1___--Run.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800583A0 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

ULONG __fastcall Template_q(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  v4.Ptr = (ULONGLONG)&v5;
  v4.Reserved = 0;
  v4.Size = 4;
  return EventWrite(Microsoft_Windows_Immersive_ShellHandle, a2, 1u, &v4);
}
