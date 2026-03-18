/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x14022BAD8
 * Callers:
 *     PoFxAbandonDevice @ 0x140570AF4 (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxReleaseAcpiRefDevice(__int64 a1, void *a2)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 248), a2, 0x20u);
}
