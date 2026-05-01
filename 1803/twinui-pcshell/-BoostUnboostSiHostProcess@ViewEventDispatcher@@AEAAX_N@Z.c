/*
 * XREFs of ?BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z @ 0x180031960
 * Callers:
 *     ?UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ @ 0x1800315E0 (-UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801D04F8 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ViewEventDispatcher::BoostUnboostSiHostProcess(
        ViewEventDispatcher *this,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  void *v5; // rcx
  NTSTATUS v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  v5 = (void *)*((_QWORD *)this + 77);
  if ( (((unsigned __int64)v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ProcessInformation = a2;
    v6 = NtSetInformationProcess(v5, ProcessForegroundInformation, &ProcessInformation, 1u);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0xD9C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v7);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xD93,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8000FFFFLL,
      a5);
  }
}
