/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0122260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

void *NtUserDwmGetRemoteSessionOcclusionEvent()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rbx
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v4 = ObOpenObjectByPointer(
           gpRemoteSessionOcclusionEvent,
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v4 < 0 )
    {
      Handle = 0LL;
      UserSetLastStatus(v4, 1);
    }
  }
  else
  {
    Handle = 0LL;
    UserSetLastError(5LL, v3);
  }
  v7 = Handle;
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
