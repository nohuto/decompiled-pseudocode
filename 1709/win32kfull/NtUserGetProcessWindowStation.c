/*
 * XREFs of NtUserGetProcessWindowStation @ 0x1C0106F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetProcessWindowStation()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterSharedCrit(0LL, 1LL);
  v1 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v0) + 648);
  UserSessionSwitchLeaveCrit(v3, v2);
  return v1;
}
