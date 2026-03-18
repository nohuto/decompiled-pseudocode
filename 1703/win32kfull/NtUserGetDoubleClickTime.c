/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1C00EBCF0
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C00EBE68 (CheckGrantedAccess.c)
 */

__int64 NtUserGetDoubleClickTime()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v1, v0);
  v5 = gpepCSRSS;
  v6 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v7 = PsGetCurrentProcessWin32Process(gpepCSRSS, gpepCSRSS),
        v8 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(v7 + 648), 2LL)) )
  {
    v8 = gdtDblClk;
  }
  UserSessionSwitchLeaveCrit(v5, v6, v3, v4);
  return v8;
}
