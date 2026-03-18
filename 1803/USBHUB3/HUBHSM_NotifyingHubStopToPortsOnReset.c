/*
 * XREFs of HUBHSM_NotifyingHubStopToPortsOnReset @ 0x1C0007950
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueStopToAllPSMs @ 0x1C000D874 (HUBMUX_QueueStopToAllPSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubStopToPortsOnReset(__int64 a1)
{
  HUBMUX_QueueStopToAllPSMs(*(_QWORD *)(a1 + 960));
  return 2053LL;
}
