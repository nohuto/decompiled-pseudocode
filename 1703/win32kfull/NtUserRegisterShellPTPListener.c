/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C0118E50
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C001BECC (IsShellProcess.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _RegisterShellPTPListener @ 0x1C0118EFC (_RegisterShellPTPListener.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 376LL)) )
    {
      if ( (!a2 || *(char *)(v10 + 60) >= 0 && *(char *)(v10 + 59) >= 0)
        && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 376LL) == PsGetCurrentProcessWin32Process(v12, v11) )
      {
        v9 = RegisterShellPTPListener(v10, a2);
        goto LABEL_8;
      }
      UserSetLastError(87LL);
      v14 = 87LL;
    }
    else
    {
      v14 = 5LL;
    }
    UserSetLastError(v14);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
