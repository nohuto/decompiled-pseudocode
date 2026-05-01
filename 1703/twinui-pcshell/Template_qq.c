/*
 * XREFs of Template_qq @ 0x180033690
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bedd51116fa11b33adb0b90decd23b1___::Run @ 0x180032F10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9bedd51116fa11b33adb0b90decd23b1___--Run.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800583A0 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qq(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-38h] BYREF
  int *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  int v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v5.Ptr = (ULONGLONG)&v9;
  v5.Reserved = 0;
  v5.Size = 4;
  v6 = &v10;
  v8 = 0;
  v7 = 4;
  return EventWrite(Microsoft_Windows_Immersive_ShellHandle, a2, 2u, &v5);
}
