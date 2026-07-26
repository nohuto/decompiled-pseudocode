/*
 * XREFs of nullDeleteFilter @ 0x1C00ED8C0
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00B1FFC (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C0021BE0 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *P)
{
  NdisFreeRWLock(P[36]);
  ExFreePoolWithTag(P, 0);
}
