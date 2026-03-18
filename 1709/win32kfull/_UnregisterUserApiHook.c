/*
 * XREFs of _UnregisterUserApiHook @ 0x1C0126000
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C01ED000 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C0058D88 (RemoveHmodDependency.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( PsGetCurrentProcessWin32Process(a1) == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      RemoveHmodDependency(gihmodUserApiHook);
      gihmodUserApiHook = -1;
      RemoveHmodDependency(gihmodUserApiHookWOW);
      gihmodUserApiHookWOW = -1;
    }
    result = 1LL;
    *gpsi &= ~0x10u;
  }
  else
  {
    UserSetLastError(5LL, v1);
    return 0LL;
  }
  return result;
}
