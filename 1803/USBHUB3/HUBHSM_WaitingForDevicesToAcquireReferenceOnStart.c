/*
 * XREFs of HUBHSM_WaitingForDevicesToAcquireReferenceOnStart @ 0x1C0008060
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000E218 (HUBMUX_QueuePowerUpEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForDevicesToAcquireReferenceOnStart(__int64 a1)
{
  HUBMUX_QueuePowerUpEventToDSMs(*(_QWORD *)(a1 + 960), 4018LL);
  return 1000LL;
}
