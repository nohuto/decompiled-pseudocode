/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C00EBE00
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C00EBE68 (CheckGrantedAccess.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v1, v0);
  v5 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v6 = PsGetCurrentProcessWin32Process(gpepCSRSS, gpepCSRSS),
        v8 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(v6 + 648), 2LL)) )
  {
    v7 = gpsi;
    v8 = *(_DWORD *)(gpsi + 5392LL);
  }
  UserSessionSwitchLeaveCrit(v7, v5, v3, v4);
  return v8;
}
