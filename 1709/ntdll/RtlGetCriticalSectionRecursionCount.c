/*
 * XREFs of RtlGetCriticalSectionRecursionCount @ 0x1800E6810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlGetCriticalSectionRecursionCount(PRTL_CRITICAL_SECTION CriticalSection)
{
  if ( CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return CriticalSection->RecursionCount;
  else
    return 0;
}
