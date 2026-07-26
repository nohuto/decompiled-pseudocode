/*
 * XREFs of ndisOidPrePMHaltOnSuspend @ 0x1C004C110
 * Callers:
 *     <none>
 * Callees:
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004CEFC (ndisUpdateAndIndicatePMCapabilities.c)
 *     GetMiniportFromReqTracker @ 0x1C00BB01C (GetMiniportFromReqTracker.c)
 */

char ndisOidPrePMHaltOnSuspend()
{
  __int64 MiniportFromReqTracker; // rdi
  KIRQL v1; // al

  MiniportFromReqTracker = GetMiniportFromReqTracker();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(MiniportFromReqTracker + 96));
  *(_DWORD *)(MiniportFromReqTracker + 4452) |= 0x10u;
  *(_QWORD *)(MiniportFromReqTracker + 520) = 0LL;
  *(_DWORD *)(MiniportFromReqTracker + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(MiniportFromReqTracker + 96), v1);
  *(_DWORD *)(MiniportFromReqTracker + 124) &= 0xFFFFFF9F;
  *(_DWORD *)(MiniportFromReqTracker + 3888) |= 0x10u;
  ndisUpdateAndIndicatePMCapabilities(MiniportFromReqTracker);
  return 1;
}
