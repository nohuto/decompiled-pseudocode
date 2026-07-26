/*
 * XREFs of NdisMRemoveMiniport @ 0x1C0061850
 * Callers:
 *     <none>
 * Callees:
 *     NdisMRemoveMiniportInternal @ 0x1C006186C (NdisMRemoveMiniportInternal.c)
 */

NDIS_STATUS __stdcall NdisMRemoveMiniport(NDIS_HANDLE MiniportHandle)
{
  NdisMRemoveMiniportInternal(MiniportHandle, 71LL);
  return 0;
}
