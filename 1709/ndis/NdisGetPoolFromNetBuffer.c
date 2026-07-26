/*
 * XREFs of NdisGetPoolFromNetBuffer @ 0x1C004D0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_HANDLE __stdcall NdisGetPoolFromNetBuffer(PNET_BUFFER NetBuffer)
{
  return NetBuffer->NdisPoolHandle;
}
