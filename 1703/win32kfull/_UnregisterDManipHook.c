/*
 * XREFs of _UnregisterDManipHook @ 0x1C00D8A90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C00D9358 (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterDManipHook(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 result; // rax

  if ( PsGetCurrentProcessWin32Process(a1, a2) == gppiDManipHook )
  {
    gppiDManipHook = 0LL;
    if ( gihmodDManipHook >= 0 )
    {
      RemoveHmodDependency((unsigned int)gihmodDManipHook);
      gihmodDManipHook = -1;
      RemoveHmodDependency((unsigned int)gihmodDManipHookWOW);
      gihmodDManipHookWOW = v2;
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
