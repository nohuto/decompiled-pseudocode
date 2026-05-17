/*
 * XREFs of sub_1800794DC @ 0x1800794DC
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_1800794DC(_QWORD *a1)
{
  struct _TEB *v2; // rbx
  __int64 result; // rax
  _QWORD *v4; // rdx

  *a1 = 0LL;
  v2 = NtCurrentTeb();
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 2883584) | 8u, 136LL);
  v4 = (_QWORD *)result;
  if ( result )
  {
    *(_DWORD *)(result + 8) |= 3u;
    result = MEMORY[0x7FFE03B0];
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
