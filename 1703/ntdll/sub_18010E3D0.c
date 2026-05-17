/*
 * XREFs of sub_18010E3D0 @ 0x18010E3D0
 * Callers:
 *     sub_180109568 @ 0x180109568 (sub_180109568.c)
 *     sub_18010E4A8 @ 0x18010E4A8 (sub_18010E4A8.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_18010E3D0(unsigned __int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 Heap; // rbx
  __int64 v4; // rax

  if ( !a1 )
    return 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
  if ( !Heap )
    return 0LL;
  v4 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  *(_QWORD *)(Heap + 8) = v4;
  if ( !v4 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    return 0LL;
  }
  *(_DWORD *)Heap = 0;
  result = 1LL;
  *(_DWORD *)(Heap + 4) = 10;
  *a1 = Heap;
  return result;
}
