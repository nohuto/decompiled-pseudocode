/*
 * XREFs of PiUEventReferenceEventEntry @ 0x1404A6B48
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1404A5D80 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClient @ 0x1404A69CC (PiUEventNotifyClient.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  unsigned int v2; // ebx

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = ++*(_DWORD *)(a1 + 56);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  return v2;
}
