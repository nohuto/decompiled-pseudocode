/*
 * XREFs of NtUserRegisterServicesProcess @ 0x1C01EA990
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C010BDF0 (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = gpsi;
  if ( *(_DWORD *)(gpsi + 2264LL) || !(unsigned int)IsPrivileged(psTcb) )
  {
    UserSetLastError(5LL, v3);
    v2 = 0LL;
  }
  else
  {
    v4 = gpsi;
    *(_DWORD *)(gpsi + 2264LL) = a1;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
