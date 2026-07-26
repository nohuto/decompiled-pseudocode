/*
 * XREFs of ndisQueuedPnPIrpSurpriseRemoval @ 0x1C00EB970
 * Callers:
 *     <none>
 * Callees:
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EB838 (ndisPnPIrpSurpriseRemovalInner.c)
 */

void __fastcall ndisQueuedPnPIrpSurpriseRemoval(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisPnPIrpSurpriseRemovalInner(a1);
}
