/*
 * XREFs of sub_1800DFB5C @ 0x1800DFB5C
 * Callers:
 *     sub_1800DFBA0 @ 0x1800DFBA0 (sub_1800DFBA0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_1800DFB5C(unsigned __int16 a1)
{
  __int64 result; // rax

  result = RtlAllocateHeap(qword_18015B328, dword_18015B268 + 0x40000, a1 + 32LL);
  if ( result )
  {
    *(_WORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = result + 32;
    *(_WORD *)(result + 18) = a1;
  }
  return result;
}
