/*
 * XREFs of RtlpInitializeHeapSegment @ 0x1401354FC
 * Callers:
 *     RtlpExtendHeap @ 0x14000E7E4 (RtlpExtendHeap.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 * Callees:
 *     RtlpInsertFreeBlock @ 0x14000E8DC (RtlpInsertFreeBlock.c)
 *     RtlpCreateUCREntry @ 0x140010744 (RtlpCreateUCREntry.c)
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x14017E240 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x140244798 (RtlpLogHeapCommit.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        ULONG_PTR RegionSize)
{
  ULONG_PTR v8; // r15
  __int64 v11; // rsi
  char *v12; // r8
  int v13; // r13d
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int16 v16; // cx
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // r8
  unsigned __int64 *v22; // rbx
  __int64 *v23; // rax

  v8 = RegionSize;
  if ( RegionSize - a6 > 0xFFFFF000 )
    return 0;
  v11 = a3 + 15;
  v12 = BaseAddress;
  v11 &= 0xFFFFFFFFFFFFFFF0uLL;
  v13 = (__int64)(RegionSize - a6) / 4096;
  v14 = v11 + a2;
  v15 = v11 >> 4;
  if ( v14 + 80 >= (unsigned __int64)BaseAddress )
  {
    if ( v14 + 80 < RegionSize )
    {
      RegionSize = (v14 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
          RtlpLogHeapCommit(a1, BaseAddress, RegionSize, 3LL);
        v12 = &BaseAddress[RegionSize];
        BaseAddress += RegionSize;
        goto LABEL_3;
      }
      ++*(_DWORD *)(a1 + 600);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 8) = v15;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v16 = *(_WORD *)(a1 + 140);
  *(_DWORD *)(a2 + 80) = 0;
  *(_WORD *)(a2 + 12) = v16;
  v17 = (__int64)(v8 - (_QWORD)v12) / 4096;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v14;
  *(_DWORD *)(a2 + 56) = v13;
  v18 = (unsigned int)(v13 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v18;
  *(_QWORD *)(a1 + 544) += v18;
  *(_QWORD *)(a1 + 536) += v18;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v14 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v19 = *(_QWORD *)(a2 + 40);
  if ( v19 == a2 )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    v20 = ((v14 - a2) >> 16) + 1;
    if ( (v14 - a2) >> 16 > 0xFC )
    {
      RtlpLogHeapFailure(3, v19, v14, a2, 0LL);
      v12 = BaseAddress;
    }
  }
  *(_BYTE *)(v14 + 14) = v20;
  RtlpCreateUCREntry(a1, a2, (__int64)(v12 - 48), (unsigned int)((_DWORD)v17 << 12), v14, (__int64 *)&RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize )
    RtlpInsertFreeBlock(a1, v14, RegionSize);
  v21 = a1 + 288;
  v22 = (unsigned __int64 *)(a2 + 24);
  v23 = *(__int64 **)(a1 + 296);
  if ( *v23 == a1 + 288 )
  {
    *v22 = v21;
    v22[1] = (unsigned __int64)v23;
    *v23 = (__int64)v22;
    *(_QWORD *)(a1 + 296) = v22;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, v21, 0, *v23);
  }
  ++*(_DWORD *)(a1 + 568);
  return 1;
}
