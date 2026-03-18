/*
 * XREFs of IsThreadCrossSessionAttached @ 0x1C00A8FE4
 * Callers:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsThreadCrossSessionAttached()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentProcess = PsGetCurrentProcess(v1, v0);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return 1;
  }
  return result;
}
