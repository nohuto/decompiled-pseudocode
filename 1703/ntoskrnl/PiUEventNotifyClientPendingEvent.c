/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x1404A6AA8
 * Callers:
 *     PiUEventHandleGetEvent @ 0x1404A5454 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1404A69CC (PiUEventNotifyClient.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x14006767C (PiUEventEstimateRequiredClientBufferSize.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
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
