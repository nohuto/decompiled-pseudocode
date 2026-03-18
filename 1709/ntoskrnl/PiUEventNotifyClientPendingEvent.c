/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x14054D6A8
 * Callers:
 *     PiUEventHandleGetEvent @ 0x140548374 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x14054D5CC (PiUEventNotifyClient.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x1400FB2B0 (PiUEventEstimateRequiredClientBufferSize.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PiUEventNotifyClientPendingEvent(__int64 a1)
{
  int v2; // eax
  struct _FAST_MUTEX *v3; // rcx
  int v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = PiUEventEstimateRequiredClientBufferSize(a1);
  v3 = *(struct _FAST_MUTEX **)(a1 + 16);
  v5 = v2;
  KeReleaseGuardedMutex(v3);
  return ZwUpdateWnfStateData(a1 + 88, (__int64)&v5, 4LL);
}
