/*
 * XREFs of RtlpCommitBlock @ 0x18004A2F4
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180008C44 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180038A9C (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceHeap @ 0x180090494 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F25E0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801053B8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapValidateProtection @ 0x180048FE8 (RtlpHpHeapValidateProtection.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x18004A5E4 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180101658 (RtlpLogHeapExtendEvent.c)
 */

char __fastcall RtlpCommitBlock(PVOID BaseAddress, __int64 a2)
{
  ULONG Protect; // eax
  NTSTATUS v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v12; // r8
  ULONG_PTR v13; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+20h] BYREF
  PVOID BaseAddressa; // [rsp+60h] [rbp+30h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(BaseAddress, a2, &BaseAddressa, &RegionSize);
  Protect = RtlpHpHeapValidateProtection(BaseAddress, (*((_DWORD *)BaseAddress + 28) & 0x40000) != 0 ? 64 : 4);
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
  if ( v5 >= 0 )
  {
    v6 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v7 = 2147353472LL;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize, 8LL);
    *((_QWORD *)BaseAddress + 79) -= RegionSize;
    --*((_DWORD *)BaseAddress + 157);
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v8 = 2147353472LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v6 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * *((_QWORD *)BaseAddress + 24),
        (HANDLE)*(unsigned __int8 *)v6);
    }
    v9 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v10 = 2147353482LL;
    if ( *(_BYTE *)v10 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapExtendEvent(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * *((_QWORD *)BaseAddress + 24),
        (HANDLE)*(unsigned __int8 *)v9);
    }
    ++*((_DWORD *)BaseAddress + 148);
    if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
      goto LABEL_12;
    v12 = (char *)BaseAddressa;
    v13 = RegionSize >> 2;
    if ( !(RegionSize >> 2) )
      goto LABEL_12;
    if ( ((unsigned __int8)BaseAddressa & 4) != 0 )
    {
      *(_DWORD *)BaseAddressa = -17891602;
      if ( !--v13 )
      {
LABEL_12:
        *(_BYTE *)(a2 + 10) &= 0x17u;
        return 1;
      }
      v12 += 4;
    }
    memset64(v12, 0xFEEEFEEEFEEEFEEEuLL, v13 >> 1);
    if ( (v13 & 1) != 0 )
      *(_DWORD *)&v12[4 * v13 - 4] = -17891602;
    goto LABEL_12;
  }
  ++*((_DWORD *)BaseAddress + 151);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
    v5,
    BaseAddress,
    BaseAddressa,
    RegionSize);
  return 0;
}
