/*
 * XREFs of sub_1800D93DC @ 0x1800D93DC
 * Callers:
 *     sub_1800D9420 @ 0x1800D9420 (sub_1800D9420.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_1800D93DC(unsigned __int16 a1)
{
  __int64 result; // rax

  result = RtlAllocateHeap(qword_18015C288, dword_18015C294 + 0x40000, a1 + 32LL);
  if ( result )
  {
    *(_WORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = result + 32;
    *(_WORD *)(result + 18) = a1;
  }
  return result;
}
