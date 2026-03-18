/*
 * XREFs of GreUnlockSprite @ 0x1C005C0A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockSprite()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    return PsLeavePriorityRegion(v1);
  }
  return result;
}
