/*
 * XREFs of NtUserGetDesktopID @ 0x1C00FD2A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, _QWORD *a2)
{
  int v4; // ebx
  _QWORD **v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  int v13; // edi
  _QWORD *v15; // rax

  v4 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v6);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL);
    goto LABEL_10;
  }
  v12 = a1 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 2 )
        v5 = (_QWORD **)grpdeskLogon;
      goto LABEL_6;
    }
    v15 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v15 = (_QWORD *)grpdeskRitInput;
  }
  v5 = (_QWORD **)*v15;
LABEL_6:
  if ( v5 )
  {
    v9 = (_QWORD *)*v5[1];
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    *a2 = *v9;
    v4 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v4;
}
