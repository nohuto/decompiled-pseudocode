/*
 * XREFs of NdisMAllocateSharedMemory @ 0x1C00BC310
 * Callers:
 *     ndisMQueuedAllocateSharedHandler @ 0x1C0061850 (ndisMQueuedAllocateSharedHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C005013C (WPP_SF_qLq.c)
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
  char v9; // cl
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // r14
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  __int64 v14; // r9
  __int64 (__fastcall *v15)(__int64, __int64, PNDIS_PHYSICAL_ADDRESS, __int64); // r10
  _BOOL8 v16; // rbp
  __int64 v17; // rax
  ULONG_PTR v18; // r14
  ULONG_PTR v19; // r14

  BugCheckParameter4 = *((_QWORD *)MiniportAdapterHandle + 63);
  v7 = Length;
  v9 = byte_1C009261C;
  if ( (unsigned __int8)byte_1C009261C >= 4u )
  {
    WPP_SF_qD(0x1Cu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportAdapterHandle, Length);
    v9 = byte_1C009261C;
  }
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 926) & 4) == 0 )
  {
    if ( !BugCheckParameter4 )
      goto LABEL_16;
    v10 = *(_QWORD *)(BugCheckParameter4 + 24);
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
    v12 = 72;
    if ( (unsigned int)v7 >= 0x48 )
      v12 = v7;
    if ( v12 + ndisDmaAlignment + 8 < v12 )
    {
LABEL_16:
      *VirtualAddress = 0LL;
      return;
    }
    v13 = (v12 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
    v15 = *(__int64 (__fastcall **)(__int64, __int64, PNDIS_PHYSICAL_ADDRESS, __int64))(*(_QWORD *)(v10 + 8) + 16LL);
    v16 = Cached != 0;
    if ( *(_DWORD *)(BugCheckParameter4 + 4 * v16 + 104) < v13 )
    {
      LOBYTE(v14) = Cached;
      if ( (unsigned __int64)v13 + 8 >= 0x1000 )
      {
        *VirtualAddress = (PVOID)v15(v10, v13, PhysicalAddress, v14);
LABEL_12:
        if ( *VirtualAddress )
          _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter4 + 72));
        goto LABEL_14;
      }
      v17 = v15(v10, 4096LL, (PNDIS_PHYSICAL_ADDRESS)(BugCheckParameter4 + 112 + 8 * v16), v14);
      *(_QWORD *)(BugCheckParameter4 + 8 * v16 + 88) = v17;
      if ( !v17 )
      {
        *(_DWORD *)(BugCheckParameter4 + 4 * v16 + 104) = 0;
        *VirtualAddress = 0LL;
LABEL_14:
        ExReleaseResourceLite(&SharedMemoryResource);
        KeLeaveCriticalRegion();
        if ( (unsigned __int8)byte_1C009261C >= 4u )
          WPP_SF_qLq(0x1Fu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportAdapterHandle, v13);
        return;
      }
      *(_DWORD *)(v17 + 4092) = 0;
      *(_DWORD *)(v17 + 4088) = 1752384590;
      *(_DWORD *)(BugCheckParameter4 + 4 * v16 + 104) = 4088;
    }
    v18 = *(_QWORD *)(BugCheckParameter4 + 8 * v16 + 88);
    if ( *(_DWORD *)(v18 + 4088) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 485),
        "Overwrote past allocated shared memory");
      KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v18, BugCheckParameter4);
    }
    ++*(_DWORD *)(v18 + 4092);
    v19 = v18 - *(unsigned int *)(BugCheckParameter4 + 4 * v16 + 104);
    *VirtualAddress = (PVOID)(v19 + 4088);
    PhysicalAddress->QuadPart = *(_QWORD *)(BugCheckParameter4 + 8 * v16 + 112) + (((_DWORD)v19 + 4088) & 0xFFF);
    *(_DWORD *)(BugCheckParameter4 + 4 * v16 + 104) -= v13;
    goto LABEL_12;
  }
  *VirtualAddress = 0LL;
  if ( (unsigned __int8)v9 >= 4u )
    WPP_SF_qD(0x1Du, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportAdapterHandle, v7);
}
