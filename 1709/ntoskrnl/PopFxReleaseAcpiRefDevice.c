/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x14023EE5C
 * Callers:
 *     PoFxAbandonDevice @ 0x14055E514 (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1405CA234 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxReleaseAcpiRefDevice(__int64 a1, void *a2)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 248), a2, 0x20u);
}
