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

char __fastcall RtlpCommitBlock(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  char *v15; // [rsp+60h] [rbp+30h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(a1, a2, &v15, &v14);
  v4 = RtlpHpHeapValidateProtection(a1, (*(_DWORD *)(a1 + 112) & 0x40000) != 0 ? 64 : 4);
  v5 = ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v14, 4096, v4);
  if ( v5 >= 0 )
  {
    v6 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v7 = 2147353472LL;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(a1, v15, v14, 8LL);
    *(_QWORD *)(a1 + 632) -= v14;
    --*(_DWORD *)(a1 + 628);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v8 = 2147353472LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v6 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(a1, (_DWORD)v15, v14, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v6);
    }
    v9 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v10 = 2147353482LL;
    if ( *(_BYTE *)v10 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapExtendEvent(a1, (_DWORD)v15, v14, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v9);
    }
    ++*(_DWORD *)(a1 + 592);
    if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
      goto LABEL_12;
    v12 = v15;
    v13 = v14 >> 2;
    if ( !(v14 >> 2) )
      goto LABEL_12;
    if ( ((unsigned __int8)v15 & 4) != 0 )
    {
      *(_DWORD *)v15 = -17891602;
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
  ++*(_DWORD *)(a1 + 604);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v5, (const void *)a1, v15, v14);
  return 0;
}
