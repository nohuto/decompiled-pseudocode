/*
 * XREFs of NtUserDwmKernelShutdown @ 0x1C01D7D70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxDwmStopRedirection @ 0x1C00A15E0 (xxxDwmStopRedirection.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  NTSTATUS v10; // eax

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v0);
  v5 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v6 = 5LL;
LABEL_10:
    UserSetLastError(v6);
    goto LABEL_11;
  }
  v7 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v7 || (v8 = *(_QWORD *)(v7 + 8)) == 0 )
  {
    v6 = 87LL;
    goto LABEL_10;
  }
  v9 = *(unsigned int *)(*(_QWORD *)v8 + 52LL);
  if ( (v9 & 1) != 0 && (v10 = xxxDwmStopRedirection(), v10 < 0) )
    UserSetLastStatus(v10, 1);
  else
    v5 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v9, v2, v3, v4);
  return v5;
}
