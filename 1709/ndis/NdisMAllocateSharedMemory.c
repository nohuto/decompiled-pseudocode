/*
 * XREFs of NdisMAllocateSharedMemory @ 0x1C00C4A60
 * Callers:
 *     ndisMQueuedAllocateSharedHandler @ 0x1C0061BC0 (ndisMQueuedAllocateSharedHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C004ED08 (WPP_SF_qLq.c)
 */

void __stdcall NdisMAllocateSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID *VirtualAddress,
        PNDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v7; // rbp
  __int64 v9; // r13
  unsigned __int8 CurrentIrql; // r14
  unsigned int v11; // ecx
  unsigned int v12; // r15d
  __int64 v13; // r9
  __int64 (__fastcall *v14)(__int64, __int64, PNDIS_PHYSICAL_ADDRESS, __int64); // r10
  _BOOL8 v15; // rbp
  __int64 v16; // rax
  ULONG_PTR v17; // r14
  ULONG_PTR v18; // r14

  BugCheckParameter4 = *((_QWORD *)MiniportAdapterHandle + 63);
  v7 = Length;
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportAdapterHandle, Length);
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 926) & 4) == 0 )
  {
    if ( !BugCheckParameter4 )
      goto LABEL_16;
    v9 = *(_QWORD *)(BugCheckParameter4 + 24);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql >= 2u )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 485),
        "Allocating Shared Memory at raised IRQL");
      KeBugCheckEx(0x7Cu, 1uLL, (ULONG_PTR)MiniportAdapterHandle, v7, CurrentIrql);
    }
    v11 = 72;
    if ( (unsigned int)v7 >= 0x48 )
      v11 = v7;
    if ( v11 + ndisDmaAlignment + 8 < v11 )
    {
LABEL_16:
      *VirtualAddress = 0LL;
      return;
    }
    v12 = (v11 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
    v14 = *(__int64 (__fastcall **)(__int64, __int64, PNDIS_PHYSICAL_ADDRESS, __int64))(*(_QWORD *)(v9 + 8) + 16LL);
    v15 = Cached != 0;
    if ( *(_DWORD *)(BugCheckParameter4 + 4 * v15 + 104) < v12 )
    {
      LOBYTE(v13) = Cached;
      if ( (unsigned __int64)v12 + 8 >= 0x1000 )
      {
        *VirtualAddress = (PVOID)v14(v9, v12, PhysicalAddress, v13);
LABEL_12:
        if ( *VirtualAddress )
          _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter4 + 72));
        goto LABEL_14;
      }
      v16 = v14(v9, 4096LL, (PNDIS_PHYSICAL_ADDRESS)(BugCheckParameter4 + 112 + 8 * v15), v13);
      *(_QWORD *)(BugCheckParameter4 + 8 * v15 + 88) = v16;
      if ( !v16 )
      {
        *(_DWORD *)(BugCheckParameter4 + 4 * v15 + 104) = 0;
        *VirtualAddress = 0LL;
LABEL_14:
        ExReleaseResourceLite(&SharedMemoryResource);
        KeLeaveCriticalRegion();
        if ( (unsigned __int8)byte_1C009875C >= 4u )
          WPP_SF_qLq(0x1Fu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportAdapterHandle, v12);
        return;
      }
      *(_DWORD *)(v16 + 4092) = 0;
      *(_DWORD *)(v16 + 4088) = 1752384590;
      *(_DWORD *)(BugCheckParameter4 + 4 * v15 + 104) = 4088;
    }
    v17 = *(_QWORD *)(BugCheckParameter4 + 8 * v15 + 88);
    if ( *(_DWORD *)(v17 + 4088) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 485),
        "Overwrote past allocated shared memory");
      KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v17, BugCheckParameter4);
    }
    ++*(_DWORD *)(v17 + 4092);
    v18 = v17 - *(unsigned int *)(BugCheckParameter4 + 4 * v15 + 104);
    *VirtualAddress = (PVOID)(v18 + 4088);
    PhysicalAddress->QuadPart = *(_QWORD *)(BugCheckParameter4 + 8 * v15 + 112) + (((_DWORD)v18 + 4088) & 0xFFF);
    *(_DWORD *)(BugCheckParameter4 + 4 * v15 + 104) -= v12;
    goto LABEL_12;
  }
  *VirtualAddress = 0LL;
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_qD(0x1Du, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportAdapterHandle, v7);
}
