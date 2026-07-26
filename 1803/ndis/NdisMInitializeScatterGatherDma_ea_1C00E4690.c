/*
 * XREFs of NdisMInitializeScatterGatherDma @ 0x1C00E4690
 * Callers:
 *     <none>
 * Callees:
 *     ndisMInitializeScatterGatherDma @ 0x1C00C7034 (ndisMInitializeScatterGatherDma.c)
 */

NDIS_STATUS __stdcall NdisMInitializeScatterGatherDma(
        NDIS_HANDLE MiniportAdapterHandle,
        BOOLEAN Dma64BitAddresses,
        ULONG MaximumPhysicalMapping)
{
  return ndisMInitializeScatterGatherDma(
           (unsigned __int16 *)MiniportAdapterHandle,
           Dma64BitAddresses,
           2u,
           MaximumPhysicalMapping);
}
