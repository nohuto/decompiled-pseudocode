/*
 * XREFs of ndisOidPrePMHaltOnSuspend @ 0x1C00499B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004A7B0 (ndisUpdateAndIndicatePMCapabilities.c)
 *     GetMiniportFromReqTracker @ 0x1C00ADF9C (GetMiniportFromReqTracker.c)
 */

char ndisOidPrePMHaltOnSuspend()
{
  __int64 MiniportFromReqTracker; // rdi
  KIRQL v1; // al
  __int64 v2; // rdx

  MiniportFromReqTracker = GetMiniportFromReqTracker();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(MiniportFromReqTracker + 96));
  *(_DWORD *)(MiniportFromReqTracker + 4452) |= 0x10u;
  *(_QWORD *)(MiniportFromReqTracker + 520) = 0LL;
  *(_DWORD *)(MiniportFromReqTracker + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(MiniportFromReqTracker + 96), v1);
  *(_DWORD *)(MiniportFromReqTracker + 124) &= 0xFFFFFF9F;
  *(_DWORD *)(MiniportFromReqTracker + 3888) |= 0x10u;
  ndisUpdateAndIndicatePMCapabilities(MiniportFromReqTracker, v2);
  return 1;
}
