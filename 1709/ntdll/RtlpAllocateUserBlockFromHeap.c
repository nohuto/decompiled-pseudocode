/*
 * XREFs of RtlpAllocateUserBlockFromHeap @ 0x180049840
 * Callers:
 *     RtlpAllocateUserBlock @ 0x180049994 (RtlpAllocateUserBlock.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x18003C6F0 (RtlReAllocateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x1801019D4 (RtlpLogHeapSubSegmentAlloc.c)
 */

_BYTE *__fastcall RtlpAllocateUserBlockFromHeap(PRTL_CRITICAL_SECTION *HeapHandle, char a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  SIZE_T v9; // rbp
  _BYTE *Heap; // rax
  _BYTE *v11; // rbx
  __int64 v12; // rcx
  char *v14; // rbp
  PVOID BaseAddress; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  ULONG OldProtect; // [rsp+88h] [rbp+10h] BYREF

  v5 = 1LL << a2;
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v9 = v5;
  if ( a4 )
    v9 = v5 + 0x2000;
  RtlEnterCriticalSection(HeapHandle[44]);
  Heap = RtlAllocateHeap(HeapHandle, 0x800001u, v9);
  v11 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      BaseAddress = (PVOID)((unsigned __int64)&Heap[v5 + 4095] & 0xFFFFFFFFFFFFF000uLL);
      v14 = (char *)((_BYTE *)BaseAddress - Heap + 4096);
      v11 = RtlReAllocateHeap(HeapHandle, 0x800001u, Heap, (SIZE_T)v14);
      RtlLeaveCriticalSection(HeapHandle[44]);
      RegionSize = 4096LL;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u, &OldProtect);
      v9 = (SIZE_T)(v14 - 4096);
      v11[17] = 1;
      *((_WORD *)v11 + 9) = v9 - v5;
    }
    else
    {
      RtlLeaveCriticalSection(HeapHandle[44]);
      *((_WORD *)v11 + 9) = 0;
      v11[17] = 0;
    }
    v11[16] = a2;
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(HeapHandle, v11, v9, a3);
  }
  else
  {
    RtlLeaveCriticalSection(HeapHandle[44]);
  }
  return v11;
}
