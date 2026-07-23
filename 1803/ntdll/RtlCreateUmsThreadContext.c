/*
 * XREFs of RtlCreateUmsThreadContext @ 0x1800EF5B0
 * Callers:
 *     sub_1800EFCD8 @ 0x1800EFCD8 (sub_1800EFCD8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlCreateUmsThreadContext(_QWORD *a1)
{
  unsigned int v2; // eax
  PVOID Heap; // rax
  PVOID v4; // rcx
  __int64 result; // rax
  unsigned int v6; // [rsp+20h] [rbp-18h]
  PVOID BaseAddress; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  v2 = 1312;
  if ( MEMORY[0x7FFE03E8] )
    v2 = MEMORY[0x7FFE03E8] + 1375;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v2);
  v4 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 316) |= 8u;
    *((_QWORD *)Heap + 159) = *((_QWORD *)Heap + 159) & 0xFFFFFFFFFFFFFFFCuLL | 1;
    v4 = Heap;
    *a1 = Heap;
    result = 0LL;
  }
  else
  {
    result = 3221225495LL;
  }
  v6 = result;
  if ( (int)result < 0 )
  {
    if ( v4 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      return v6;
    }
  }
  return result;
}
