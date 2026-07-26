/*
 * XREFs of NdisMRemoveMiniport @ 0x1C0061490
 * Callers:
 *     <none>
 * Callees:
 *     NdisMRemoveMiniportInternal @ 0x1C00614AC (NdisMRemoveMiniportInternal.c)
 */

NDIS_STATUS __stdcall NdisMRemoveMiniport(NDIS_HANDLE MiniportHandle)
{
  NdisMRemoveMiniportInternal(MiniportHandle, 71LL);
  return 0;
}
