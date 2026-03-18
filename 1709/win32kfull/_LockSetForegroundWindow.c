/*
 * XREFs of _LockSetForegroundWindow @ 0x1C01B4F00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CanForceForeground @ 0x1C0090A90 (CanForceForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall LockSetForegroundWindow(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    goto LABEL_11;
  v4 = v1 - 1;
  if ( !v4 )
  {
    if ( (unsigned int)CanForceForeground(CurrentProcessWin32Process) && !gppiLockSFW )
    {
      MEMORY[0] = CurrentProcessWin32Process;
      return 1LL;
    }
LABEL_11:
    v5 = 5LL;
    goto LABEL_12;
  }
  if ( v4 == 1 )
  {
    if ( CurrentProcessWin32Process == gppiLockSFW )
    {
      gppiLockSFW = 0LL;
      return 1LL;
    }
    goto LABEL_11;
  }
  v5 = 87LL;
LABEL_12:
  UserSetLastError(v5, v3);
  return 0LL;
}
