/*
 * XREFs of RtlIsCriticalSectionLocked @ 0x1800E6830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlIsCriticalSectionLocked(PRTL_CRITICAL_SECTION CriticalSection)
{
  return (CriticalSection->LockCount & 1) == 0;
}
