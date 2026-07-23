/*
 * XREFs of RtlIsCriticalSectionLockedByThread @ 0x180038990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlIsCriticalSectionLockedByThread(PRTL_CRITICAL_SECTION CriticalSection)
{
  return CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
