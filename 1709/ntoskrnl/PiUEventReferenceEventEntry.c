/*
 * XREFs of PiUEventReferenceEventEntry @ 0x14054D748
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14054B8AC (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClient @ 0x14054D5CC (PiUEventNotifyClient.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  unsigned int v2; // ebx

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = ++*(_DWORD *)(a1 + 56);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  return v2;
}
