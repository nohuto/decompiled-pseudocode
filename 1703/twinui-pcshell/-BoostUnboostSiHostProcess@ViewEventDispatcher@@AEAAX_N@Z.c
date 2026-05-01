/*
 * XREFs of ?BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z @ 0x1800FAD48
 * Callers:
 *     ?UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ @ 0x1800FADBC (-UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ.c)
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180116770 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180102050 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ViewEventDispatcher::BoostUnboostSiHostProcess(ViewEventDispatcher *this, char a2)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 68);
  if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ProcessInformation = a2;
    v3 = NtSetInformationProcess(v2, ProcessForegroundInformation, &ProcessInformation, 1u);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0xE52,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v3,
        v4);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xE49,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8000FFFFLL);
  }
}
