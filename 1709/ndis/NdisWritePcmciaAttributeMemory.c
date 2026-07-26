/*
 * XREFs of NdisWritePcmciaAttributeMemory @ 0x1C0061EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisGetSetBusConfigSpace @ 0x1C0061FF4 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisWritePcmciaAttributeMemory(NDIS_HANDLE NdisAdapterHandle, ULONG Offset, PVOID Buffer, ULONG Length)
{
  int v5; // esi
  int SetBusConfigSpace; // eax
  ULONG v9; // ebx

  v5 = (int)Buffer;
  if ( (unsigned __int8)byte_1C009874E >= 4u )
    WPP_SF_q(0x1Eu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 1, 0);
  v9 = SetBusConfigSpace;
  if ( (unsigned __int8)byte_1C009874E >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle, SetBusConfigSpace);
  return v9;
}
