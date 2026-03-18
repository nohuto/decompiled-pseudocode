/*
 * XREFs of RtlpInitializeHeapSegment @ 0x14028BAB4
 * Callers:
 *     RtlpExtendHeap @ 0x14028B0B0 (RtlpExtendHeap.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1401A77C0 (ZwAllocateVirtualMemory.c)
 *     RtlpCreateUCREntry @ 0x14028A9AC (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x14028BD3C (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        ULONG_PTR RegionSize)
{
  ULONG_PTR v8; // rbp
  __int64 v12; // r14
  char *v13; // r8
  int v14; // r13d
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  __int64 v21; // r8
  __int64 *v22; // rbx
  __int64 *v23; // rax

  v8 = RegionSize;
  if ( RegionSize - a6 > 0xFFFFF000 )
    return 0;
  v12 = a3 + 15;
  v13 = BaseAddress;
  v12 &= 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (__int64)(RegionSize - a6) / 4096;
  v15 = v12 + a2;
  v16 = v12 >> 4;
  if ( v15 + 80 >= (unsigned __int64)BaseAddress )
  {
    if ( v15 + 80 >= RegionSize )
      return 0;
    RegionSize = (v15 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    {
      ++*(_DWORD *)(a1 + 600);
      return 0;
    }
    v13 = &BaseAddress[RegionSize];
    BaseAddress += RegionSize;
  }
  *(_WORD *)(a2 + 8) = v16;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  v17 = (__int64)(v8 - (_QWORD)v13) / 4096;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  v18 = (unsigned int)(v14 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v18;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v15;
  *(_DWORD *)(a2 + 56) = v14;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 544) += v18;
  *(_QWORD *)(a1 + 536) += v18;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v19 = *(_QWORD *)(a2 + 40);
  if ( v19 == a2 )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    v20 = ((v15 - a2) >> 16) + 1;
    if ( v20 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v19, v15, a2, 0LL);
      v13 = BaseAddress;
    }
  }
  *(_BYTE *)(v15 + 14) = v20;
  RtlpCreateUCREntry(a1, a2, (__int64)(v13 - 48), (unsigned int)((_DWORD)v17 << 12), v15, (__int64 *)&RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize )
    RtlpInsertFreeBlock(a1, v15, RegionSize);
  v21 = a1 + 288;
  v22 = (__int64 *)(a2 + 24);
  v23 = *(__int64 **)(a1 + 296);
  if ( *v23 == a1 + 288 )
  {
    *v22 = v21;
    v22[1] = (__int64)v23;
    *v23 = (__int64)v22;
    *(_QWORD *)(a1 + 296) = v22;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v21, 0, *v23);
  }
  ++*(_DWORD *)(a1 + 568);
  return 1;
}
