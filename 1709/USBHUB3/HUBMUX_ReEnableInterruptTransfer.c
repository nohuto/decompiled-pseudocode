/*
 * XREFs of HUBMUX_ReEnableInterruptTransfer @ 0x1C000DB90
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C000F3C0 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C000F420 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_QueueingEnableInterruptTransferOnResume @ 0x1C000F450 (HUBPSM20_QueueingEnableInterruptTransferOnResume.c)
 *     HUBPSM20_ReEnablingInterruptsOnErrorInSuspended @ 0x1C000F530 (HUBPSM20_ReEnablingInterruptsOnErrorInSuspended.c)
 *     HUBPSM20_QueueingResumeToDSMFromSuspended @ 0x1C000F670 (HUBPSM20_QueueingResumeToDSMFromSuspended.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C0010270 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_ReEnableInterruptTransfer(volatile signed __int32 *a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFE);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2320), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v1 + 1256, 2046);
}
