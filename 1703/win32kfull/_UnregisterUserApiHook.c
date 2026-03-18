/*
 * XREFs of _UnregisterUserApiHook @ 0x1C00D8A20
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C01E0E90 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C00D9358 (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 result; // rax

  if ( PsGetCurrentProcessWin32Process(a1, a2) == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      ((void (*)(void))RemoveHmodDependency)();
      gihmodUserApiHook = -1;
      RemoveHmodDependency((unsigned int)gihmodUserApiHookWOW);
      gihmodUserApiHookWOW = v2;
    }
    result = 1LL;
    *gpsi &= ~0x10u;
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return result;
}
