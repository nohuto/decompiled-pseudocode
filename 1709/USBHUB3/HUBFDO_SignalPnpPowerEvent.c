/*
 * XREFs of HUBFDO_SignalPnpPowerEvent @ 0x1C000B5D8
 * Callers:
 *     HUBHSM_NotifyingHubResumeToDevices @ 0x1C0007870 (HUBHSM_NotifyingHubResumeToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevices @ 0x1C00078B0 (HUBHSM_NotifyingHubResumeWithResetToDevices.c)
 *     HUBHSM_QueueingFakeStatusChangeOnResumeInS0 @ 0x1C00079F0 (HUBHSM_QueueingFakeStatusChangeOnResumeInS0.c)
 *     HUBHSM_SignalingPnPPowerEventOnPendingStop @ 0x1C0007FA0 (HUBHSM_SignalingPnPPowerEventOnPendingStop.c)
 *     HUBHSM_SignalingPnPPowerEventOnStop @ 0x1C0007FD0 (HUBHSM_SignalingPnPPowerEventOnStop.c)
 *     HUBHSM_WaitingForD0Entry @ 0x1C0008030 (HUBHSM_WaitingForD0Entry.c)
 *     HUBHSM_UnblockResumeWaitingForStop @ 0x1C0008070 (HUBHSM_UnblockResumeWaitingForStop.c)
 * Callees:
 *     <none>
 */

LONG __fastcall HUBFDO_SignalPnpPowerEvent(__int64 a1)
{
  *(_DWORD *)(a1 + 1168) = 0;
  return KeSetEvent((PRKEVENT)(a1 + 1144), 0, 0);
}
