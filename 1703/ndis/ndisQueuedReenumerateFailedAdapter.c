/*
 * XREFs of ndisQueuedReenumerateFailedAdapter @ 0x1C00E1AE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C0064854 (ndisMReenumerateFailedAdapterInternal.c)
 */

void __fastcall ndisQueuedReenumerateFailedAdapter(void *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMReenumerateFailedAdapterInternal(a2);
  ndisMDereferenceIfBlock((__int64)a2, 0x13u);
  ndisDereferenceMiniport((__int64)a2, 9u);
  ExFreePoolWithTag(a1, 0);
}
