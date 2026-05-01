/*
 * XREFs of ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x18018C880
 * Callers:
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18018C974 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18018C9DC (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall QueryCpuCyclesUsedByWindow(HWND a1, unsigned __int64 *a2)
{
  char *v2; // rbx
  int LastError; // edi
  const char *v5; // r9
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = 0LL;
  if ( !a1 )
  {
    LastError = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91C,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)0x80070057LL);
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x928,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)LastError);
    goto LABEL_11;
  }
  dwProcessId = 0;
  GetWindowThreadProcessId(a1, &dwProcessId);
  v2 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( v2 )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x920,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                  v5);
  if ( LastError < 0 )
    goto LABEL_7;
  if ( QueryProcessCycleTime(v2, a2) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x929,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                  v6);
LABEL_11:
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  return (unsigned int)LastError;
}
