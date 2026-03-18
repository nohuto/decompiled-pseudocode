/*
 * XREFs of _UnregisterDManipHook @ 0x1C01C47A0
 * Callers:
 *     <none>
 * Callees:
 *     RemoveHmodDependency @ 0x1C0058D88 (RemoveHmodDependency.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterDManipHook(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( PsGetCurrentProcessWin32Process(a1) == gppiDManipHook )
  {
    gppiDManipHook = 0LL;
    if ( gihmodDManipHook >= 0 )
    {
      RemoveHmodDependency(gihmodDManipHook);
      gihmodDManipHook = -1;
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
