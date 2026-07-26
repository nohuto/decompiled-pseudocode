/*
 * XREFs of ndisQueuedResetMiniport @ 0x1C0060F50
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C24 (ndisMResetMiniportInternal.c)
 */

void __fastcall ndisQueuedResetMiniport(void *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMResetMiniportInternal(a2, 3);
  ndisDereferenceMiniport((__int64)a2, 8u);
  ExFreePoolWithTag(a1, 0);
}
