/*
 * XREFs of NtUserInitialize @ 0x1C00766E0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeGreCSRSS @ 0x1C0068300 (InitializeGreCSRSS.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0074A90 (-UserInitialize@@YAJXZ.c)
 *     InitializePowerRequestList @ 0x1C01D5664 (InitializePowerRequestList.c)
 */

__int64 __fastcall NtUserInitialize(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 BugCheckParameter4; // rbx
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rax

  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(Handle, a2, a3, a4);
  if ( (int)IsVerifyTcbPrivilegesSupported() >= 0 && !(unsigned __int8)VerifyTcbPrivileges() )
    KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  result = InitializePowerRequestList(Handle);
  if ( (int)result >= 0 )
  {
    if ( (int)IsInitializeMediaChangeSupported() < 0 || (result = InitializeMediaChange(a2), (int)result >= 0) )
    {
      if ( InitializeGreCSRSS() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
        v9 = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(v9 + 768) |= 0x200000u;
        *(_DWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 280) = 18;
        return UserInitialize();
      }
      return 3221225473LL;
    }
  }
  return result;
}
