/*
 * XREFs of NdisWritePcmciaAttributeMemory @ 0x1C0061B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisGetSetBusConfigSpace @ 0x1C0061C84 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisWritePcmciaAttributeMemory(NDIS_HANDLE NdisAdapterHandle, ULONG Offset, PVOID Buffer, ULONG Length)
{
  int v5; // esi
  int SetBusConfigSpace; // eax
  ULONG v9; // ebx

  v5 = (int)Buffer;
  if ( (unsigned __int8)byte_1C009260E >= 4u )
    WPP_SF_q(0x1Eu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 1, 0);
  v9 = SetBusConfigSpace;
  if ( (unsigned __int8)byte_1C009260E >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle, SetBusConfigSpace);
  return v9;
}
