/*
 * XREFs of PnpFreeWatchdog @ 0x1400753C0
 * Callers:
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 *     PnpDelayedRemoveWorker @ 0x1405C86A0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeWatchdog(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
