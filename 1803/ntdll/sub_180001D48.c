/*
 * XREFs of sub_180001D48 @ 0x180001D48
 * Callers:
 *     sub_180001A1C @ 0x180001A1C (sub_180001A1C.c)
 * Callees:
 *     sub_180007D50 @ 0x180007D50 (sub_180007D50.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180001D48(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  size_t v6; // rsi
  __int64 v7; // r8
  void *v8; // rax
  PVOID Heap; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = a1;
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
  LOWORD(a1) = *(_DWORD *)(a1 + 324);
  if ( !*(_QWORD *)(v3 + 520) && *(_BYTE *)(a2 + 4) == 80 && (unsigned int)v6 >= 0x30 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, *(unsigned int *)(a2 + 80));
    *(_QWORD *)(v3 + 520) = Heap;
    if ( !Heap )
      return 1450;
    memmove(Heap, *(const void **)(a2 + 72), v6);
    *(_DWORD *)(v3 + 528) = v6;
    LODWORD(a1) = *(_DWORD *)(v3 + 324);
  }
  v7 = *(_WORD *)(a2 + 84) & 0x7FF;
  if ( (a1 & 0x1000) != 0 )
    v7 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v3 + 504) + 8LL * v5) + 2 * v7);
  v8 = (void *)sub_180007D50(v3, (unsigned int)v6, v7, 0LL, &v12);
  if ( v8 )
  {
    memmove(v8, *(const void **)(a2 + 72), v6);
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
  }
  else if ( (unsigned int)v6 <= 0xFFF8 )
  {
    return (unsigned int)(*(_DWORD *)(v3 + 212) < (unsigned int)v6 ? 234 : 8);
  }
  else
  {
    return 534;
  }
  return v4;
}
