/*
 * XREFs of RtlpCreateLowFragHeap @ 0x180006FD8
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180006DF0 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpInitializeLowFragHeap @ 0x1800071B0 (RtlpInitializeLowFragHeap.c)
 *     RtlQueryResourcePolicy @ 0x180007560 (RtlQueryResourcePolicy.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x18004AE8C (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180101658 (RtlpLogHeapExtendEvent.c)
 */

PVOID __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  ULONG_PTR v4; // rcx
  ULONG Protect; // eax
  int v6; // eax
  __int64 v7; // r14
  ULONG HeapProtection; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  PVOID v12; // rcx
  int v14; // [rsp+70h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+48h] BYREF
  ULONG_PTR v17; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v14, 4LL) >= 0 && v14 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v4 = 0LL;
  }
  else
  {
    v3 = RtlpAffinityState;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v4 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  BaseAddress = 0LL;
  RegionSize = v4;
  Protect = RtlpGetHeapProtection(a1, 1LL);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v6 = RtlpAffinityState;
  if ( (v2 & 1) != 0 )
    v6 = 1;
  v7 = 48LL * (unsigned int)(v6 - 1);
  v17 = (v7 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection(a1, 1LL);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v17, 0x1000u, HeapProtection) < 0 )
  {
    RegionSize = 0LL;
    RtlpSecMemFreeVirtualMemory(v9, &BaseAddress, &RegionSize, 0x8000LL);
    return 0LL;
  }
  v10 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v11 = 2147353472LL;
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, (int)BaseAddress, v17, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v10);
    RtlpLogHeapCommit(a1, BaseAddress, v17, 9LL);
  }
  RtlpInitializeLowFragHeap(a1, v2, BaseAddress);
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 536LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 544LL) += v17;
  *((_QWORD *)BaseAddress + 6) = (char *)BaseAddress + RegionSize;
  *((_QWORD *)BaseAddress + 5) = (char *)BaseAddress + v17;
  v12 = BaseAddress;
  *((_QWORD *)BaseAddress + 4) = (char *)BaseAddress + v7 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray(v12);
  }
  *((_DWORD *)BaseAddress + 168) = v2;
  return BaseAddress;
}
