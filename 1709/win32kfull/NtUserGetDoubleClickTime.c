/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1C0050700
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C0050878 (CheckGrantedAccess.c)
 */

__int64 NtUserGetDoubleClickTime()
{
  __int64 v0; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v0);
  v2 = gpepCSRSS;
  v3 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v4 = PsGetCurrentProcessWin32Process(gpepCSRSS),
        v5 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(v4 + 656), 2LL)) )
  {
    v5 = gdtDblClk;
  }
  UserSessionSwitchLeaveCrit(v2, v3);
  return v5;
}
