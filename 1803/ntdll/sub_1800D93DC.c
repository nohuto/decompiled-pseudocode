/*
 * XREFs of sub_1800D93DC @ 0x1800D93DC
 * Callers:
 *     sub_1800D9420 @ 0x1800D9420 (sub_1800D9420.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

_WORD *__fastcall sub_1800D93DC(unsigned __int16 a1)
{
  _WORD *result; // rax

  result = RtlAllocateHeap(HeapHandle, Flags + 0x40000, a1 + 32LL);
  if ( result )
  {
    result[8] = 0;
    *((_QWORD *)result + 3) = result + 16;
    result[9] = a1;
  }
  return result;
}
