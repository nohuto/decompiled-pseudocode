/*
 * XREFs of NdisFreeRWLock @ 0x1C001E4D0
 * Callers:
 *     EthDeleteFilter @ 0x1C00AB8CC (EthDeleteFilter.c)
 *     nullCreateFilter @ 0x1C00EAC8C (nullCreateFilter.c)
 *     nullDeleteFilter @ 0x1C00EAD1C (nullDeleteFilter.c)
 *     ndisUnloadPeriodicReceives @ 0x1C011DE44 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C001E500 (ndisFreePerProcessorSlot.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  ndisFreePerProcessorSlot(Lock->RefCountSlot, 2003977294LL);
  ExFreePoolWithTag(Lock, 0);
}
