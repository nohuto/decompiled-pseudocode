/*
 * XREFs of NtUserDwmValidateWindow @ 0x1C008DD20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetDesktopView @ 0x1C008E7D0 (GetDesktopView.c)
 *     LockProcessByClientId @ 0x1C00907F8 (LockProcessByClientId.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 ProcessWin32Process; // rax
  __int64 v12; // rdx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v2, &Object) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
        LOBYTE(v7) = GetDesktopView(ProcessWin32Process, *(_QWORD *)(v8 + 24)) != 0;
      else
        UserSetLastError(5LL, v12);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5LL, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
