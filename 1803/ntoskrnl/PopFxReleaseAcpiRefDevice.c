/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x1402761C4
 * Callers:
 *     PoFxAbandonDevice @ 0x1405C8D04 (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140614C84 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxReleaseAcpiRefDevice(__int64 a1, void *a2)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 248), a2, 0x20u);
}
