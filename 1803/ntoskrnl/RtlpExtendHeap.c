/*
 * XREFs of RtlpExtendHeap @ 0x14028B0B0
 * Callers:
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1401A77C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401A7880 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x140289EB0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x14028B32C (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14028BAB4 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14028BD3C (RtlpInsertFreeBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x140293310 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edx
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // rcx
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rcx
  __int64 v14; // rcx
  NTSTATUS v15; // edi
  __int64 v16; // rdx
  int v17; // r8d
  ULONG_PTR v19[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp+48h] BYREF

  v22 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = RtlpFindAndCommitPages(a1, &v22);
  if ( v4 )
  {
    v22 >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1, v4, &v22);
    RtlpInsertFreeBlock(a1, v5, v22);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v6 = *(_DWORD *)(v5 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v5 + 8) = v6;
      if ( HIBYTE(v6) != ((unsigned __int8)v6 ^ (unsigned __int8)(BYTE1(v6) ^ BYTE2(v6))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_DWORD *)(a1 + 112) & 2) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 160);
  v8 = a2 + 0x2000;
  BaseAddress = 0LL;
  v9 = a2 + 0x2000;
  if ( a2 + 0x2000 <= v7 )
    v9 = v7;
  v10 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v10 >= 0xFD0000 )
    v10 = 16580608LL;
  RegionSize = v10;
  v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( v11 >= 0 )
  {
    v12 = RegionSize;
  }
  else
  {
    while ( 1 )
    {
      v12 = RegionSize;
      if ( RegionSize == v8 )
        break;
      v13 = RegionSize >> 1;
      if ( RegionSize >> 1 < v8 )
        v13 = a2 + 0x2000;
      RegionSize = v13;
      v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
      if ( v11 >= 0 )
      {
        v12 = RegionSize;
        break;
      }
    }
    if ( v11 < 0 )
    {
      ++*(_DWORD *)(a1 + 600);
      return 0LL;
    }
  }
  *(_QWORD *)(a1 + 160) += v12;
  v14 = a2 + 4096;
  if ( (unsigned __int64)(a2 + 4096) <= *(_QWORD *)(a1 + 168) )
    v14 = *(_QWORD *)(a1 + 168);
  v19[0] = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v19, 0x1000u, 4u);
  if ( v15 < 0 )
    goto LABEL_29;
  if ( !(unsigned __int8)RtlpInitializeHeapSegment(
                           a1,
                           (int)BaseAddress,
                           112,
                           (int)BaseAddress + (int)RegionSize - 4096,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v19[0],
                           (ULONG_PTR)BaseAddress + RegionSize - 4096) )
    v15 = -1073741801;
  if ( v15 < 0 )
  {
LABEL_29:
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  v16 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v17 = *(_DWORD *)(v16 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v16 + 8) = v17;
    if ( HIBYTE(v17) != ((unsigned __int8)v17 ^ (unsigned __int8)(BYTE1(v17) ^ BYTE2(v17))) )
      RtlpAnalyzeHeapFailure(a1, v16);
  }
  return *((_QWORD *)BaseAddress + 8);
}
