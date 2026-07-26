/*
 * XREFs of NdisReadPciSlotInformation @ 0x1C00619C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C0061C84 (ndisGetSetBusConfigSpace.c)
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
  if ( (unsigned __int8)byte_1C009260E >= 4u )
    WPP_SF_q(0x12u, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 0, 1);
  if ( (unsigned __int8)byte_1C009260E >= 4u )
    WPP_SF_q(0x13u, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle);
  return SetBusConfigSpace;
}
