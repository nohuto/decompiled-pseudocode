/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C0125280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 NtUserDwmKernelStartup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  NTSTATUS started; // eax
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v4 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v10 = 5LL;
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v10 = 87LL;
LABEL_10:
    UserSetLastError(v10, v3);
    goto LABEL_7;
  }
  v7 = *(unsigned int *)(*(_QWORD *)v6 + 52LL);
  if ( (v7 & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v4 = 1LL;
  else
    UserSetLastStatus(started, 1);
LABEL_7:
  UserSessionSwitchLeaveCrit(v7, v3);
  return v4;
}
