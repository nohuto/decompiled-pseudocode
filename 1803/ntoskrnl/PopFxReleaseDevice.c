/*
 * XREFs of PopFxReleaseDevice @ 0x1402761E8
 * Callers:
 *     PoFxSetTargetDripsDevicePowerState @ 0x14075F5E0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14075F754 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x140760A40 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxReleaseDevice(__int64 a1)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 216), 0LL, 0x20u);
}
