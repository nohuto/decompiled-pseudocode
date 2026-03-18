/*
 * XREFs of NtUserRegisterServicesProcess @ 0x1C01DE870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00C6ED0 (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( *(_DWORD *)(gpsi + 2264LL) || !(unsigned int)IsPrivileged(psTcb) )
  {
    UserSetLastError(5LL);
    v2 = 0LL;
  }
  else
  {
    v6 = gpsi;
    *(_DWORD *)(gpsi + 2264LL) = a1;
  }
  UserSessionSwitchLeaveCrit(v6, v3, v4, v5);
  return v2;
}
