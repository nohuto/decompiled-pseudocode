/*
 * XREFs of RtlUpdateClonedCriticalSection @ 0x180076700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlUpdateClonedCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  void *UniqueThread; // rdx

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  CriticalSection->LockSemaphore = 0LL;
  CriticalSection->OwningThread = UniqueThread;
  CriticalSection->LockCount = -2;
  CriticalSection->RecursionCount = 1;
}
