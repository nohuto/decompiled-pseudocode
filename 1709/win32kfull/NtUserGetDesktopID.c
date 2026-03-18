/*
 * XREFs of NtUserGetDesktopID @ 0x1C010A960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, _QWORD *a2)
{
  int v4; // ebx
  _QWORD ***v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  int v11; // edi
  int v12; // edi
  _QWORD *v14; // rax

  v4 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v9);
    goto LABEL_10;
  }
  v11 = a1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 2 )
        v5 = (_QWORD ***)grpdeskLogon;
      goto LABEL_6;
    }
    v14 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v14 = (_QWORD *)grpdeskRitInput;
  }
  v5 = (_QWORD ***)*v14;
LABEL_6:
  if ( v5 )
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = **v5[1];
    v4 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v4;
}
