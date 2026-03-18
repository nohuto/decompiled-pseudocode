/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C0122D30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C0090B7C (IsShellProcess.c)
 *     _RegisterShellPTPListener @ 0x1C0122DDC (_RegisterShellPTPListener.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 400LL)) )
    {
      if ( (!a2 || *(char *)(v8 + 60) >= 0 && *(char *)(v8 + 59) >= 0)
        && *(_QWORD *)(*(_QWORD *)(v8 + 16) + 400LL) == PsGetCurrentProcessWin32Process(v10) )
      {
        v7 = RegisterShellPTPListener(v8, a2);
        goto LABEL_8;
      }
      UserSetLastError(87LL, v9);
      v12 = 87LL;
    }
    else
    {
      v12 = 5LL;
    }
    UserSetLastError(v12, v9);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
