/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C011B410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     zzzDwmStartRedirection @ 0x1C0016490 (zzzDwmStartRedirection.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 NtUserDwmKernelStartup()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  NTSTATUS started; // eax
  __int64 v11; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v0);
  v5 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v11 = 5LL;
    goto LABEL_10;
  }
  v6 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 8)) == 0 )
  {
    v11 = 87LL;
LABEL_10:
    UserSetLastError(v11);
    goto LABEL_7;
  }
  v8 = *(unsigned int *)(*(_QWORD *)v7 + 52LL);
  if ( (v8 & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v5 = 1LL;
  else
    UserSetLastStatus(started, 1);
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v2, v3, v4);
  return v5;
}
