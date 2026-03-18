/*
 * XREFs of NtUserSetProcessRestrictionExemption @ 0x1C01DFC30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessRestrictionExemption(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3);
    *(_DWORD *)(CurrentProcessWin32Process + 768) ^= (*(_DWORD *)(CurrentProcessWin32Process + 768) ^ (a1 << 8)) & 0x100;
  }
  else
  {
    UserSetLastError(5LL);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v2;
}
