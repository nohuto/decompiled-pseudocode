/*
 * XREFs of ?BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x1801D5050
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z @ 0x1801D50EC (-BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z.c)
 */

void __fastcall WindowEventDispatcher::BoostShellPriority(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rsi
  HANDLE CurrentProcess; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1 + 56;
  AcquireSRWLockExclusive(a1 + 56);
  if ( !a2 )
    ++a1[58].Ptr;
  ProcessInformation = 1;
  CurrentProcess = GetCurrentProcess();
  v6 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1100LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
  WindowEventDispatcher::BoostUnboostSiHostProcess((WindowEventDispatcher *)&a1[-2], 1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
