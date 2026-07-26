/*
 * XREFs of ndisReferenceDriver @ 0x1C0002828
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00E94A0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C0101878 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisReferenceDriver(__int64 a1)
{
  return ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 392));
}
