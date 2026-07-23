/*
 * XREFs of sub_1800131F0 @ 0x1800131F0
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

_DWORD *__fastcall sub_1800131F0(_QWORD *a1)
{
  struct _TEB *v2; // rbx
  _DWORD *result; // rax
  _QWORD *v4; // rdx

  *a1 = 0LL;
  v2 = NtCurrentTeb();
  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 2883584) | 8, 0x88uLL);
  v4 = result;
  if ( result )
  {
    result[2] |= 3u;
    result = (_DWORD *)MEMORY[0x7FFE03B0];
    v4[3] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v2->ThreadPoolData = v4;
    *a1 = v4;
  }
  else
  {
    v2->ThreadPoolData = 0LL;
  }
  return result;
}
