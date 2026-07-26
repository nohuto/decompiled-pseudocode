/*
 * XREFs of NdisGetPoolFromNetBufferList @ 0x1C004E850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_HANDLE __stdcall NdisGetPoolFromNetBufferList(PNET_BUFFER_LIST NetBufferList)
{
  return NetBufferList->NdisPoolHandle;
}
