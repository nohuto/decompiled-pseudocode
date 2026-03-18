/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x1C01EA540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadMiPEnabled @ 0x1C00CF820 (IsThreadMiPEnabled.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  _DWORD *v3; // rax

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( IsThreadMiPEnabled(gptiCurrent) && (v3 = *(_DWORD **)(v1 + 1224)) != 0LL )
  {
    *v3 |= 2u;
    v2 = 1LL;
  }
  else
  {
    UserSetLastError(5LL, v0);
  }
  UserSessionSwitchLeaveCrit(v1, v0);
  return v2;
}
