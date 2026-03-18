/*
 * XREFs of HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000DD1C
 * Callers:
 *     HUBPSM20_IssuingHubResetFromDisconnected @ 0x1C000EBF0 (HUBPSM20_IssuingHubResetFromDisconnected.c)
 *     HUBPSM20_IssuingHubResetWithTimer @ 0x1C000EC20 (HUBPSM20_IssuingHubResetWithTimer.c)
 *     HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x1C000F180 (HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C000F3B0 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart @ 0x1C000F420 (HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart.c)
 *     HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect @ 0x1C000F4E0 (HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect.c)
 *     HUBPSM30_IssuingHubResetOnTimedOut @ 0x1C000FB90 (HUBPSM30_IssuingHubResetOnTimedOut.c)
 *     HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent @ 0x1C000FE70 (HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent.c)
 *     HUBFDO_IoctlResetHub @ 0x1C0069B28 (HUBFDO_IoctlResetHub.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 */

bool __fastcall HUBMUX_CheckAndQueueIfResetHubIsEnabled(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  KIRQL v3; // al
  int v4; // edi

  v1 = (KSPIN_LOCK *)(a1 + 2312);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2312));
  v4 = *(_DWORD *)(a1 + 2344) & 4;
  if ( v4 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2344), 0xFFFFFFFB);
  KeReleaseSpinLock(v1, v3);
  if ( v4 )
    HUBSM_AddEvent(a1 + 1256, 2047);
  return v4 != 0;
}
