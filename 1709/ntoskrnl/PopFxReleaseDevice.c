/*
 * XREFs of PopFxReleaseDevice @ 0x14023EE80
 * Callers:
 *     PoFxSetTargetDripsDevicePowerState @ 0x1406F7FD0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxUpdateVetoMaskWork @ 0x1406F9580 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxReleaseDevice(__int64 a1)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 216), 0LL, 0x20u);
}
