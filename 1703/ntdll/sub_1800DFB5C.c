/*
 * XREFs of sub_1800DFB5C @ 0x1800DFB5C
 * Callers:
 *     sub_1800DFBA0 @ 0x1800DFBA0 (sub_1800DFBA0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

_WORD *__fastcall sub_1800DFB5C(unsigned __int16 a1)
{
  _WORD *result; // rax

  result = RtlAllocateHeap(HeapHandle, dword_18015B268 + 0x40000, a1 + 32LL);
  if ( result )
  {
    result[8] = 0;
    *((_QWORD *)result + 3) = result + 16;
    result[9] = a1;
  }
  return result;
}
