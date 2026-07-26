/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C0001D60
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qLq @ 0x1C004ED08 (WPP_SF_qLq.c)
 *     ndisFreeSharedMemory @ 0x1C00ABDBC (ndisFreeSharedMemory_ea_1C00ABDBC.c)
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
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_qLq(34LL, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, MiniportAdapterHandle, Length, VirtualAddress);
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
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_qLq(35LL, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, MiniportAdapterHandle, v7, VirtualAddress);
}
