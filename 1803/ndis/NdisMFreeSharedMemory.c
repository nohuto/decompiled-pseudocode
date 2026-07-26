/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C0012ED0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qLq @ 0x1C0043C94 (WPP_SF_qLq.c)
 *     ndisFreeSharedMemory @ 0x1C00B327C (ndisFreeSharedMemory_ea_1C00B327C.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  ULONG v7; // esi

  v7 = Length;
  if ( (unsigned __int8)byte_1C009961C >= 4u )
    WPP_SF_qLq(34LL, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, MiniportAdapterHandle, Length, VirtualAddress);
  if ( KeGetCurrentIrql() )
  {
    LOBYTE(Length) = 66;
    ndisReferenceMiniportNoCheck(MiniportAdapterHandle, *(_QWORD *)&Length);
    *((NDIS_PHYSICAL_ADDRESS *)VirtualAddress + 8) = PhysicalAddress;
    *((_QWORD *)VirtualAddress + 4) = MiniportAdapterHandle;
    *((_DWORD *)VirtualAddress + 10) = v7;
    *((_BYTE *)VirtualAddress + 44) = Cached;
    *((_QWORD *)VirtualAddress + 6) = VirtualAddress;
    *(_QWORD *)VirtualAddress = 0LL;
    *((_QWORD *)VirtualAddress + 2) = ndisMQueuedFreeSharedHandler;
    *((_QWORD *)VirtualAddress + 3) = VirtualAddress;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)VirtualAddress, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    ndisFreeSharedMemory((ULONG_PTR)MiniportAdapterHandle, PhysicalAddress.QuadPart);
  }
  if ( (unsigned __int8)byte_1C009961C >= 4u )
    WPP_SF_qLq(35LL, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, MiniportAdapterHandle, v7, VirtualAddress);
}
