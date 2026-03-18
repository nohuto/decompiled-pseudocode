/*
 * XREFs of GreUnlockDynamicModeChange @ 0x1C0091890
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockDynamicModeChange()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v1);
  }
  return result;
}
