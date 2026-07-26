/*
 * XREFs of EthDeleteFilter @ 0x1C00AB8CC
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00AB714 (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C001E4D0 (NdisFreeRWLock.c)
 */

void __fastcall EthDeleteFilter(PVOID *P)
{
  struct _NDIS_RW_LOCK_EX *v2; // rcx

  if ( *((_DWORD *)P + 86) )
  {
    ExFreePoolWithTag(P[47], 0);
    ExFreePoolWithTag(P[49], 0);
    ExFreePoolWithTag(P[44], 0);
    ExFreePoolWithTag(P[45], 0);
  }
  v2 = (struct _NDIS_RW_LOCK_EX *)P[36];
  if ( v2 )
    NdisFreeRWLock(v2);
  ExFreePoolWithTag(P, 0);
}
