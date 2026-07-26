/*
 * XREFs of NdisFreeRWLock @ 0x1C00254B0
 * Callers:
 *     EthDeleteFilter @ 0x1C00BECE8 (EthDeleteFilter.c)
 *     nullCreateFilter @ 0x1C00E0DEC (nullCreateFilter.c)
 *     nullDeleteFilter @ 0x1C00E0E7C (nullDeleteFilter.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0114DC4 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C00254E0 (ndisFreePerProcessorSlot.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  ndisFreePerProcessorSlot(Lock->RefCountSlot, 2003977294LL);
  ExFreePoolWithTag(Lock, 0);
}
