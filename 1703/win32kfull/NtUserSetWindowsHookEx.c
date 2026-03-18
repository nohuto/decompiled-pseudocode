/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C00E44A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     zzzSetWindowsHookEx @ 0x1C00E45A4 (zzzSetWindowsHookEx.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // r14d
  __int64 CurrentProcess; // rax
  _QWORD *ProcessPeb; // r15
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  EnterCrit(0LL, 1LL);
  v11 = 0LL;
  if ( a3 )
  {
    v12 = PtiFromThreadId(a3);
    v13 = v12;
    if ( !v12 )
    {
      UserSetLastError(87LL);
      goto LABEL_8;
    }
  }
  else
  {
    v13 = 0;
  }
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    ProcessPeb = (_QWORD *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(ProcessPeb, 0x7A0uLL, 1u);
    if ( ProcessPeb[2] == a1 )
    {
      LODWORD(a1) = 0;
      a2 = 0;
    }
  }
  v16 = (__int64 *)zzzSetWindowsHookEx(a1, a2, v13, a4, a5, a6);
  if ( v16 )
    v11 = *v16;
LABEL_8:
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v11;
}
