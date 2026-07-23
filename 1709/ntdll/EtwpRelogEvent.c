/*
 * XREFs of EtwpRelogEvent @ 0x180019DB8
 * Callers:
 *     EtwpTraceUmEvent @ 0x180019A88 (EtwpTraceUmEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x18001A834 (EtwpReserveTraceBuffer.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall EtwpRelogEvent(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  size_t v6; // rsi
  __int64 v7; // r8
  void *v8; // rax
  PVOID Heap; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v12 = 0LL;
  v5 = 0;
  if ( *(_WORD *)a2 < 0x58u )
    return 87;
  if ( (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
    v5 = *(unsigned __int16 *)(a2 + 86);
  v6 = *(unsigned int *)(a2 + 80);
  if ( !(_DWORD)v6 )
  {
    ++*(_DWORD *)(a1 + 384);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 512) + 12LL * v5 + 4);
    return 87;
  }
  if ( !*(_QWORD *)(a1 + 520) && *(_BYTE *)(a2 + 4) == 80 && (unsigned int)v6 >= 0x30 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, *(unsigned int *)(a2 + 80));
    *(_QWORD *)(a1 + 520) = Heap;
    if ( !Heap )
      return 1450;
    memmove(Heap, *(const void **)(a2 + 72), v6);
    *(_DWORD *)(a1 + 528) = v6;
  }
  v7 = *(_WORD *)(a2 + 84) & 0x7FF;
  if ( (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
    v7 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL * v5) + 2 * v7);
  v8 = (void *)EtwpReserveTraceBuffer(a1, (unsigned int)v6, v7, 0LL, &v12);
  if ( v8 )
  {
    memmove(v8, *(const void **)(a2 + 72), v6);
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
  }
  else if ( (unsigned int)v6 <= 0xFFF8 )
  {
    return (unsigned int)(*(_DWORD *)(a1 + 212) < (unsigned int)v6 ? 234 : 8);
  }
  else
  {
    return 534;
  }
  return v4;
}
