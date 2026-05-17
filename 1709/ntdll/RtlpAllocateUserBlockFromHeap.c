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

__int64 __fastcall RtlpAllocateUserBlockFromHeap(__int64 a1, char a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  __int64 v9; // rbp
  __int64 Heap; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v14; // rbp
  unsigned __int64 v15[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  char v17; // [rsp+88h] [rbp+10h] BYREF

  v5 = 1LL << a2;
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v9 = v5;
  if ( a4 )
    v9 = v5 + 0x2000;
  RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
  Heap = RtlAllocateHeap(a1, 0x800001u, v9);
  v11 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      v15[0] = (Heap + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v14 = v15[0] - Heap + 4096;
      v11 = RtlReAllocateHeap(a1, 0x800001u, Heap, v14);
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v16 = 4096LL;
      ZwProtectVirtualMemory(-1LL, v15, &v16, 1LL, &v17);
      v9 = v14 - 4096;
      *(_BYTE *)(v11 + 17) = 1;
      *(_WORD *)(v11 + 18) = v9 - v5;
    }
    else
    {
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      *(_WORD *)(v11 + 18) = 0;
      *(_BYTE *)(v11 + 17) = 0;
    }
    *(_BYTE *)(v11 + 16) = a2;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(a1, v11, v9, a3);
  }
  else
  {
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  }
  return v11;
}
