/*
 * XREFs of nullDeleteFilter @ 0x1C00E0E7C
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00BEB48 (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C00254B0 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *a1)
{
  NdisFreeRWLock(a1[36]);
  ExFreePoolWithTag(a1, 0);
}
