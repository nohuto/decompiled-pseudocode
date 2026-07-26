/*
 * XREFs of ndisQueuedReenumerateFailedAdapter @ 0x1C00EB990
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C001F488 (ndisMDereferenceIfBlock.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C0064E9C (ndisMReenumerateFailedAdapterInternal.c)
 */

void __fastcall ndisQueuedReenumerateFailedAdapter(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMReenumerateFailedAdapterInternal(a2);
  ndisMDereferenceIfBlock((__int64)a2, MPIFREF_FATAL_ERROR);
  ndisDereferenceMiniport((__int64)a2, 9u);
  ExFreePoolWithTag(P, 0);
}
