/*
 * XREFs of ndisQueuedReenumerateFailedAdapter @ 0x1C00EE540
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F1C (ndisMDereferenceIfBlock.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C00659FC (ndisMReenumerateFailedAdapterInternal.c)
 */

void __fastcall ndisQueuedReenumerateFailedAdapter(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9

  ndisMReenumerateFailedAdapterInternal(a2);
  ndisMDereferenceIfBlock((__int64)a2, MPIFREF_FATAL_ERROR);
  ndisDereferenceMiniport((__int64)a2, 9u, v4, v5);
  ExFreePoolWithTag(P, 0);
}
