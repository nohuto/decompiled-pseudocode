/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x1C01DE420
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsShellThreadMiPEnabled @ 0x1C00CCD80 (IsShellThreadMiPEnabled.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // rax

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  v4 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL);
  if ( ((v4 & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled(gptiCurrent))
    && (v5 = *(_DWORD **)(gptiCurrent + 1136LL)) != 0LL )
  {
    *v5 |= 2u;
    v3 = 1LL;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v4, v0, v1, v2);
  return v3;
}
