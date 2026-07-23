/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x14051FBB8
 * Callers:
 *     PiUEventNotifyClient @ 0x14051FAD4 (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x14058BEA4 (PiUEventHandleGetEvent.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x14007534C (PiUEventEstimateRequiredClientBufferSize.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventNotifyClientPendingEvent(const WNF_STATE_NAME *a1)
{
  struct _FAST_MUTEX *v2; // rcx
  int v3; // eax
  struct _FAST_MUTEX *v4; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _FAST_MUTEX *)a1[2];
  Buffer = 0;
  ExAcquireFastMutex(v2);
  v3 = PiUEventEstimateRequiredClientBufferSize((__int64)a1);
  v4 = (struct _FAST_MUTEX *)a1[2];
  Buffer = v3;
  KeReleaseGuardedMutex(v4);
  return ZwUpdateWnfStateData(a1 + 11, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
