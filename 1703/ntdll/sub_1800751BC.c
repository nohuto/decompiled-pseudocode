/*
 * XREFs of sub_1800751BC @ 0x1800751BC
 * Callers:
 *     sub_18002F644 @ 0x18002F644 (sub_18002F644.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     sub_1800FFD08 @ 0x1800FFD08 (sub_1800FFD08.c)
 */

_BYTE *__fastcall sub_1800751BC(PRTL_CRITICAL_SECTION *HeapHandle, char a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  SIZE_T v9; // rbp
  _BYTE *Heap; // rax
  _BYTE *v11; // rbx
  __int64 UserModeGlobalLogger; // rcx
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
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FFD08(HeapHandle, v11, v9, a3);
  }
  else
  {
    RtlLeaveCriticalSection(HeapHandle[44]);
  }
  return v11;
}
