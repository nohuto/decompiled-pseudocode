/*
 * XREFs of NdisReadPciSlotInformation @ 0x1C0062830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C0062AF4 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisReadPciSlotInformation(
        NDIS_HANDLE NdisAdapterHandle,
        ULONG SlotNumber,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  int v5; // edi
  ULONG SetBusConfigSpace; // edi

  v5 = (int)Buffer;
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_q(0x12u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 0, 1);
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_q(0x13u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, (__int64)NdisAdapterHandle);
  return SetBusConfigSpace;
}
