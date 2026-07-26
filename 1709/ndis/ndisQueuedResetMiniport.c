/*
 * XREFs of ndisQueuedResetMiniport @ 0x1C0060F90
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C64 (ndisMResetMiniportInternal.c)
 */

void __fastcall ndisQueuedResetMiniport(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMResetMiniportInternal(a2, 3);
  ndisDereferenceMiniport((__int64)a2, 8u);
  ExFreePoolWithTag(P, 0);
}
